//
// Generated By: dol2asm
// Translation Unit: CARDMount
//

#include "dolphin/card/CARDMount.h"
#include "dolphin/card/card.h"
#include "dolphin/dsp/dsp.h"
#include "dolphin/os/OSRtc.h"

#include "dolphin/card/CARDPriv.h"

u8 GameChoice : 0x800030E3;

//
// Forward References:
//

static BOOL IsCard(u32 id);
static s32 DoMount(s32 chan);
static void DoUnmount(s32 chan, s32 result);

//
// Declarations:
//

/* ############################################################################################## */
/* 803D2000-803D2020 02F120 0020+00 3/3 0/0 0/0 .data            SectorSizeTable */
static u32 SectorSizeTable[8] = {
    8 * 1024, 16 * 1024, 32 * 1024, 64 * 1024, 128 * 1024, 256 * 1024, 0, 0,
};

/* 80356948-80356A14 351288 00CC+00 2/2 0/0 0/0 .text            IsCard */
static BOOL IsCard(u32 id) {
    u32 size;
    s32 sectorSize;
    if (id & (0xFFFF0000) && (id != 0x80000004 || __CARDVendorID == 0xFFFF)) {
        return FALSE;
    }

    if ((id & 3) != 0) {
        return FALSE;
    }

    size = id & 0xfc;
    switch (size) {
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
        break;
    default:
        return FALSE;
        break;
    }

    sectorSize = SectorSizeTable[(id & 0x00003800) >> 11];
    if (sectorSize == 0) {
        return FALSE;
    }

    if ((size * 1024 * 1024 / 8) / sectorSize < 8) {
        return FALSE;
    }

    return TRUE;
}

/* 80356A14-80356A4C 351354 0038+00 0/0 1/1 0/0 .text            CARDProbe */
s32 CARDProbe(s32 chan) {
    s32 result;

    if (GameChoice & 0x80) {
        result = 0;
    } else {
        result = EXIProbe(chan);
    }

    return result;
}

/* 80356A4C-80356BC8 35138C 017C+00 0/0 1/1 0/0 .text            CARDProbeEx */
s32 CARDProbeEx(s32 chan, s32* memSize, s32* sectorSize) {
    u32 id;
    CARDControl* card;
    BOOL enabled;
    s32 result;
    int probe;

    if (chan < 0 || 2 <= chan) {
        return CARD_RESULT_FATAL_ERROR;
    }

    if (GameChoice & 0x80) {
        return CARD_RESULT_NOCARD;
    }

    card = &__CARDBlock[chan];
    enabled = OSDisableInterrupts();

    probe = EXIProbeEx(chan);
    if (probe == -1) {
        result = CARD_RESULT_NOCARD;
    } else if (probe == 0) {
        result = CARD_RESULT_BUSY;
    } else if (card->attached) {
        if (card->mountStep < 1) {
            result = CARD_RESULT_BUSY;
        } else {
            if (memSize) {
                *memSize = card->size;
            }
            if (sectorSize) {
                *sectorSize = card->sectorSize;
            }
            result = CARD_RESULT_READY;
        }
    } else if ((EXIGetState(chan) & 8)) {
        result = CARD_RESULT_WRONGDEVICE;
    } else if (!EXIGetID(chan, 0, &id)) {
        result = CARD_RESULT_BUSY;
    } else if (IsCard(id)) {
        if (memSize) {
            *memSize = (s32)(id & 0xfc);
        }
        if (sectorSize) {
            *sectorSize = SectorSizeTable[(id & 0x00003800) >> 11];
        }
        result = CARD_RESULT_READY;
    } else {
        result = CARD_RESULT_WRONGDEVICE;
    }

    OSRestoreInterrupts(enabled);
    return result;
}

/* ############################################################################################## */
/* 803D2020-803D2040 02F140 0020+00 1/1 0/0 0/0 .data            LatencyTable */
static u32 LatencyTable[8] = {
    4, 8, 16, 32, 64, 128, 256, 512,
};

/* 80356BC8-8035701C 351508 0454+00 2/2 0/0 0/0 .text            DoMount */
static s32 DoMount(s32 chan) {
    CARDControl* card;
    u32 id;
    u8 status;
    s32 result;
    OSSramEx* sram;
    int i;
    u8 checkSum;
    int step;

    card = &__CARDBlock[chan];

    if (card->mountStep == 0) {
        if (EXIGetID(chan, 0, &id) == 0) {
            result = CARD_RESULT_NOCARD;
        } else if (IsCard(id)) {
            result = CARD_RESULT_READY;
        } else {
            result = CARD_RESULT_WRONGDEVICE;
        }
        if (result < 0) {
            goto error;
        }

        card->cid = id;

        card->size = (u16)(id & 0xFC);
        card->sectorSize = SectorSizeTable[(id & 0x00003800) >> 11];
        card->cBlock = (u16)((card->size * 1024 * 1024 / 8) / card->sectorSize);
        card->latency = LatencyTable[(id & 0x00000700) >> 8];

        result = __CARDReadVendorID(chan, &card->vendorID);
        if (result < 0) {
            goto error;
        }

        if (CARDGetFastMode() && (card->vendorID >> 8) == 0xec) {
            card->pageSize = 0x200;
        } else {
            card->pageSize = 0x80;
        }
        result = __CARDClearStatus(chan);
        if (result < 0) {
            goto error;
        }

        result = __CARDReadStatus(chan, &status);
        if (result < 0) {
            goto error;
        }

        if (!EXIProbe(chan)) {
            result = CARD_RESULT_NOCARD;
            goto error;
        }

        if (!(status & 0x40)) {
            result = __CARDUnlock(chan, card->id);
            if (result < 0) {
                goto error;
            }

            checkSum = 0;
            sram = __OSLockSramEx();
            for (i = 0; i < 12; i++) {
                sram->flashID[chan][i] = card->id[i];
                checkSum += card->id[i];
            }
            sram->flashIDCheckSum[chan] = (u8)~checkSum;
            __OSUnlockSramEx(TRUE);

            return result;
        } else {
            card->mountStep = 1;

            checkSum = 0;
            sram = __OSLockSramEx();
            for (i = 0; i < 12; i++) {
                checkSum += sram->flashID[chan][i];
            }
            __OSUnlockSramEx(FALSE);
            if (sram->flashIDCheckSum[chan] != (u8)~checkSum) {
                result = CARD_RESULT_IOERROR;
                goto error;
            }
        }
    }

    if (card->mountStep == 1) {
        if (card->cid == 0x80000004) {
            u16 vendorID;

            sram = __OSLockSramEx();
            vendorID = *(u16*)sram->flashID[chan];
            __OSUnlockSramEx(FALSE);

            if (__CARDVendorID == 0xffff || vendorID != __CARDVendorID) {
                result = CARD_RESULT_WRONGDEVICE;
                goto error;
            }
        }

        card->mountStep = 2;

        result = __CARDEnableInterrupt(chan, TRUE);
        if (result < 0) {
            goto error;
        }

        EXISetExiCallback(chan, __CARDExiHandler);
        EXIUnlock(chan);
        DCInvalidateRange(card->workArea, CARD_WORKAREA_SIZE);
    }

    step = card->mountStep - 2;
    result = __CARDRead(chan, (u32)card->sectorSize * step, CARD_SYSTEM_BLOCK_SIZE,
                        (u8*)card->workArea + (CARD_SYSTEM_BLOCK_SIZE * step), __CARDMountCallback);
    if (result < 0) {
        __CARDPutControlBlock(card, result);
    }
    return result;

error:
    EXIUnlock(chan);
    DoUnmount(chan, result);
    return result;
}

/* 8035701C-80357154 35195C 0138+00 2/2 1/1 0/0 .text            __CARDMountCallback */
void __CARDMountCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;

    card = &__CARDBlock[chan];

    switch (result) {
    case CARD_RESULT_READY:
        if (++card->mountStep < CARD_MAX_MOUNT_STEP) {
            result = DoMount(chan);
            if (0 <= result) {
                return;
            }
        } else {
            result = __CARDVerify(card);
        }
        break;
    case CARD_RESULT_UNLOCKED:
        card->unlockCallback = __CARDMountCallback;
        if (!EXILock(chan, 0, __CARDUnlockedHandler)) {
            return;
        }
        card->unlockCallback = 0;

        result = DoMount(chan);
        if (0 <= result) {
            return;
        }
        break;
    case CARD_RESULT_IOERROR:
    case CARD_RESULT_NOCARD:
        DoUnmount(chan, result);
        break;
    }

    callback = card->apiCallback;
    card->apiCallback = 0;
    __CARDPutControlBlock(card, result);
    callback(chan, result);
}

/* 80357154-803572F4 351A94 01A0+00 1/1 0/0 0/0 .text            CARDMountAsync */
s32 CARDMountAsync(s32 chan, void* workArea, CARDCallback detachCallback,
                   CARDCallback attachCallback) {
    CARDControl* card;
    BOOL enabled;

    if (chan < 0 || 2 <= chan) {
        return CARD_RESULT_FATAL_ERROR;
    }

    if (GameChoice & 0x80) {
        return CARD_RESULT_NOCARD;
    }

    card = &__CARDBlock[chan];

    enabled = OSDisableInterrupts();
    if (card->result == CARD_RESULT_BUSY) {
        OSRestoreInterrupts(enabled);
        return CARD_RESULT_BUSY;
    }

    if (!card->attached && (EXIGetState(chan) & 0x08)) {
        OSRestoreInterrupts(enabled);
        return CARD_RESULT_WRONGDEVICE;
    }

    card->result = CARD_RESULT_BUSY;
    card->workArea = workArea;
    card->extCallback = detachCallback;
    card->apiCallback = attachCallback ? attachCallback : __CARDDefaultApiCallback;
    card->exiCallback = 0;

    if (!card->attached && !EXIAttach(chan, __CARDExtHandler)) {
        card->result = CARD_RESULT_NOCARD;
        OSRestoreInterrupts(enabled);
        return CARD_RESULT_NOCARD;
    }

    card->mountStep = 0;
    card->attached = TRUE;
    EXISetExiCallback(chan, 0);
    OSCancelAlarm(&card->alarm);

    card->currentDir = 0;
    card->currentFat = 0;

    OSRestoreInterrupts(enabled);

    card->unlockCallback = __CARDMountCallback;
    if (!EXILock(chan, 0, __CARDUnlockedHandler)) {
        return CARD_RESULT_READY;
    }
    card->unlockCallback = 0;

    return DoMount(chan);
}

/* 803572F4-8035733C 351C34 0048+00 0/0 1/1 0/0 .text            CARDMount */
s32 CARDMount(s32 chan, void* workArea, CARDCallback attachCb) {
    s32 result = CARDMountAsync(chan, workArea, attachCb, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }

    return __CARDSync(chan);
}

/* 8035733C-803573D8 351C7C 009C+00 2/2 0/0 0/0 .text            DoUnmount */
static inline void DoUnmount(s32 chan, s32 result) {
    CARDControl* card;
    BOOL enabled;

    card = &__CARDBlock[chan];
    enabled = OSDisableInterrupts();
    if (card->attached) {
        EXISetExiCallback(chan, 0);
        EXIDetach(chan);
        OSCancelAlarm(&card->alarm);
        card->attached = FALSE;
        card->result = result;
        card->mountStep = 0;
    }
    OSRestoreInterrupts(enabled);
}

/* 803573D8-80357484 351D18 00AC+00 0/0 2/2 0/0 .text            CARDUnmount */
s32 CARDUnmount(s32 chan) {
    CARDControl* card;
    s32 result;

    result = __CARDGetControlBlock(chan, &card);
    if (result < 0) {
        return result;
    }
    DoUnmount(chan, CARD_RESULT_NOCARD);
    return CARD_RESULT_READY;
}