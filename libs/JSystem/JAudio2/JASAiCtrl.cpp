//
// Generated By: dol2asm
// Translation Unit: JASAiCtrl
//

#include "JSystem/JAudio2/JASAiCtrl.h"
#include "dol2asm.h"

//
// Types:
//

struct JKRHeap {};

struct JASProbe {
    /* 80290EE4 */ void start(s32, char const*);
    /* 80290F24 */ void stop(s32);
};

struct JASPortCmd {
    /* 80291060 */ void execAllCommand();
};

struct JASOutputRate {};

struct JASMixMode {};

struct JASLfo {
    /* 8029BDD8 */ void incCounter(f32);

    static u8 sFreeRunLfo[24];
};

struct JASDsp {
    /* 8029D9E4 */ void syncFrame(u32, u32, u32);
    /* 8029DAA0 */ void invalChannelAll();
};

struct JASDriver {
    /* 8029C388 */ void initAI(void (*)(void));
    /* 8029C4E4 */ void startDMA();
    /* 8029C504 */ void stopDMA();
    /* 8029C524 */ void setOutputRate(JASOutputRate);
    /* 8029C568 */ void updateDac();
    /* 8029C6C4 */ void updateDSP();
    /* 8029C7E0 */ void readDspBuffer(s16*, u32);
    /* 8029C900 */ void finishDSPFrame();
    /* 8029C9DC */ void registerMixCallback(s16* (*)(s32), JASMixMode);
    /* 8029C9E8 */ void getDacRate();
    /* 8029C9F0 */ u32 getSubFrames();
    /* 8029C9F8 */ void getDacSize();
    /* 8029CA04 */ void getFrameSamples();
    /* 8029CA10 */ void mixMonoTrack(s16*, u32, s16* (*)(s32));
    /* 8029CAC0 */ void mixMonoTrackWide(s16*, u32, s16* (*)(s32));
    /* 8029CB70 */ void mixExtraTrack(s16*, u32, s16* (*)(s32));
    /* 8029CC50 */ void mixInterleaveTrack(s16*, u32, s16* (*)(s32));
    /* 8029CCD4 */ u32 getSubFrameCounter();
    /* 8029E2A8 */ void subframeCallback();
    /* 8029E2D0 */ void DSPSyncCallback();

    static void* const sMixFuncs[4];
    static u8 sDmaDacBuffer[12 + 4 /* padding */];
    static u32 sMixMode;
    static f32 sDacRate;
    static u32 sSubFrames;
    static u8 sDspDacBuffer[4];
    static u8 sDspDacWriteBuffer[4];
    static u8 sDspDacReadBuffer[4];
    static u8 sDspStatus[4];
    static u8 sDspDacCallback[4];
    static u8 lastRspMadep[4];
    static u8 dacCallbackFunc[4];
    static u8 extMixCallback[4];
    static u8 sOutputRate[4];
    static u8 sSubFrameCounter[4];
};

struct JASDSPChannel {
    /* 8029D89C */ void updateAll();
    /* 8029D910 */ void killActiveChannel();
};

struct JASChannel {
    /* 8029BC0C */ void initBankDisposeMsgQueue();
    /* 8029BC48 */ void receiveBankDisposeMsg();
};

struct JASCalc {
    /* 8028F2E8 */ void imixcopy(s16 const*, s16 const*, s16*, u32);
    /* 8028F480 */ void bzero(void*, u32);
    template <typename A1, typename B1>
    void clamp(/* ... */);
    /* 8028F69C */ /* JASCalc::clamp<s16, s32> */
    void func_8028F69C(void* _this, s32);
};

struct JASAudioThread {
    static u8 snIntCount[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void initAI__9JASDriverFPFv_v();
extern "C" void startDMA__9JASDriverFv();
extern "C" void stopDMA__9JASDriverFv();
extern "C" void setOutputRate__9JASDriverF13JASOutputRate();
extern "C" void updateDac__9JASDriverFv();
extern "C" void updateDSP__9JASDriverFv();
extern "C" void readDspBuffer__9JASDriverFPsUl();
extern "C" void finishDSPFrame__9JASDriverFv();
extern "C" void registerMixCallback__9JASDriverFPFl_Ps10JASMixMode();
extern "C" void getDacRate__9JASDriverFv();
extern "C" u32 getSubFrames__9JASDriverFv();
extern "C" void getDacSize__9JASDriverFv();
extern "C" void getFrameSamples__9JASDriverFv();
extern "C" void mixMonoTrack__9JASDriverFPsUlPFl_Ps();
extern "C" void mixMonoTrackWide__9JASDriverFPsUlPFl_Ps();
extern "C" void mixExtraTrack__9JASDriverFPsUlPFl_Ps();
extern "C" void mixInterleaveTrack__9JASDriverFPsUlPFl_Ps();
extern "C" u32 getSubFrameCounter__9JASDriverFv();
extern "C" void* const sMixFuncs__9JASDriver[4];
extern "C" extern char const* const JASAiCtrl__stringBase0;
extern "C" u8 sDmaDacBuffer__9JASDriver[12 + 4 /* padding */];
extern "C" u32 sMixMode__9JASDriver;
extern "C" f32 sDacRate__9JASDriver;
extern "C" u32 sSubFrames__9JASDriver;
extern "C" u8 sDspDacBuffer__9JASDriver[4];
extern "C" u8 sDspDacWriteBuffer__9JASDriver[4];
extern "C" u8 sDspDacReadBuffer__9JASDriver[4];
extern "C" u8 sDspStatus__9JASDriver[4];
extern "C" u8 sDspDacCallback__9JASDriver[4];
extern "C" u8 lastRspMadep__9JASDriver[4];
extern "C" u8 dacCallbackFunc__9JASDriver[4];
extern "C" u8 extMixCallback__9JASDriver[4];
extern "C" u8 sOutputRate__9JASDriver[4];
extern "C" u8 sSubFrameCounter__9JASDriver[4];

//
// External References:
//

extern "C" void imixcopy__7JASCalcFPCsPCsPsUl();
extern "C" void bzero__7JASCalcFPvUl();
extern "C" void func_8028F69C(void* _this, s32);
extern "C" void start__8JASProbeFlPCc();
extern "C" void stop__8JASProbeFl();
extern "C" void JASReport__FPCce();
extern "C" void execAllCommand__10JASPortCmdFv();
extern "C" void initBankDisposeMsgQueue__10JASChannelFv();
extern "C" void receiveBankDisposeMsg__10JASChannelFv();
extern "C" void incCounter__6JASLfoFf();
extern "C" void updateAll__13JASDSPChannelFv();
extern "C" void killActiveChannel__13JASDSPChannelFv();
extern "C" void syncFrame__6JASDspFUlUlUl();
extern "C" void invalChannelAll__6JASDspFv();
extern "C" void subframeCallback__9JASDriverFv();
extern "C" void DSPSyncCallback__9JASDriverFv();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void DCInvalidateRange();
extern "C" void DCStoreRange();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSGetTick();
extern "C" void AIRegisterDMACallback();
extern "C" void AIInitDMA();
extern "C" void AIStartDMA();
extern "C" void AIStopDMA();
extern "C" void AISetDSPSampleRate();
extern "C" void AIInit();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 sFreeRunLfo__6JASLfo[24];
extern "C" extern u8 JASDram[4];
extern "C" u8 snIntCount__14JASAudioThread[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80431C58-80431C68 05E978 000C+04 2/2 0/0 0/0 .bss             sDmaDacBuffer__9JASDriver */
u8 JASDriver::sDmaDacBuffer[12 + 4 /* padding */];

/* 804507A8-804507AC 000228 0004+00 3/3 0/0 0/0 .sdata           None */
SECTION_SDATA static u32 data_804507A8 = 0x03000000;

/* 804512A0-804512A4 0007A0 0004+00 3/3 0/0 0/0 .sbss            sDspDacBuffer__9JASDriver */
u8 JASDriver::sDspDacBuffer[4];

/* 804512A4-804512A8 0007A4 0004+00 3/3 0/0 0/0 .sbss            sDspDacWriteBuffer__9JASDriver */
u8 JASDriver::sDspDacWriteBuffer[4];

/* 804512A8-804512AC 0007A8 0004+00 3/3 0/0 0/0 .sbss            sDspDacReadBuffer__9JASDriver */
u8 JASDriver::sDspDacReadBuffer[4];

/* 804512AC-804512B0 0007AC 0004+00 3/3 0/0 0/0 .sbss            sDspStatus__9JASDriver */
u8 JASDriver::sDspStatus[4];

/* 804512B0-804512B4 0007B0 0004+00 1/1 0/0 0/0 .sbss            sDspDacCallback__9JASDriver */
u8 JASDriver::sDspDacCallback[4];

/* 804512B4-804512B8 0007B4 0004+00 1/1 0/0 0/0 .sbss            lastRspMadep__9JASDriver */
u8 JASDriver::lastRspMadep[4];

/* 804512B8-804512BC 0007B8 0004+00 1/1 0/0 0/0 .sbss            dacCallbackFunc__9JASDriver */
u8 JASDriver::dacCallbackFunc[4];

/* 804512BC-804512C0 0007BC 0004+00 2/2 0/0 0/0 .sbss            extMixCallback__9JASDriver */
u8 JASDriver::extMixCallback[4];

/* 804512C0-804512C4 0007C0 0004+00 2/2 0/0 0/0 .sbss            sOutputRate__9JASDriver */
u8 JASDriver::sOutputRate[4];

/* 8029C388-8029C4E4 296CC8 015C+00 0/0 1/1 0/0 .text            initAI__9JASDriverFPFv_v */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::initAI(void (*param_0)(void)) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/initAI__9JASDriverFPFv_v.s"
}
#pragma pop

/* 8029C4E4-8029C504 296E24 0020+00 0/0 1/1 0/0 .text            startDMA__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::startDMA() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/startDMA__9JASDriverFv.s"
}
#pragma pop

/* 8029C504-8029C524 296E44 0020+00 0/0 1/1 0/0 .text            stopDMA__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::stopDMA() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/stopDMA__9JASDriverFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804507AC-804507B0 00022C 0004+00 2/2 0/0 0/0 .sdata           sMixMode__9JASDriver */
SECTION_SDATA u32 JASDriver::sMixMode = 0x00000002;

/* 804507B0-804507B4 000230 0004+00 2/2 0/0 0/0 .sdata           sDacRate__9JASDriver */
SECTION_SDATA f32 JASDriver::sDacRate = 32028.5f;

/* 804507B4-804507B8 000234 0004+00 4/3 0/0 0/0 .sdata           sSubFrames__9JASDriver */
SECTION_SDATA u32 JASDriver::sSubFrames = 0x00000007;

/* 80455720-80455724 003D20 0004+00 1/1 0/0 0/0 .sdata2          @233 */
SECTION_SDATA2 static f32 lit_233 = 32000.0f;

/* 80455724-80455728 003D24 0004+00 1/1 0/0 0/0 .sdata2          @234 */
SECTION_SDATA2 static f32 lit_234 = 48000.0f;

/* 80455728-8045572C 003D28 0004+00 1/1 0/0 0/0 .sdata2          @235 */
SECTION_SDATA2 static f32 lit_235 = 1.0008896589279175f;

/* 8029C524-8029C568 296E64 0044+00 1/1 0/0 0/0 .text setOutputRate__9JASDriverF13JASOutputRate */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::setOutputRate(JASOutputRate param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/setOutputRate__9JASDriverF13JASOutputRate.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B2E0-8039B2F0 -00001 0010+00 1/1 0/0 0/0 .rodata          sMixFuncs__9JASDriver */
SECTION_RODATA void* const JASDriver::sMixFuncs[4] = {
    (void*)mixMonoTrack__9JASDriverFPsUlPFl_Ps,
    (void*)mixMonoTrackWide__9JASDriverFPsUlPFl_Ps,
    (void*)mixExtraTrack__9JASDriverFPsUlPFl_Ps,
    (void*)mixInterleaveTrack__9JASDriverFPsUlPFl_Ps,
};
COMPILER_STRIP_GATE(0x8039B2E0, &JASDriver::sMixFuncs);

/* 804512C4-804512C8 0007C4 0004+00 2/1 0/0 0/0 .sbss            sSubFrameCounter__9JASDriver */
u8 JASDriver::sSubFrameCounter[4];

/* 804512C8-804512CC 0007C8 0004+00 1/1 0/0 0/0 .sbss            dacp$239 */
static u8 dacp[4];

/* 804512CC-804512D0 0007CC 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_804512CC[4];

/* 8029C568-8029C6C4 296EA8 015C+00 0/0 1/1 0/0 .text            updateDac__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::updateDac() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/updateDac__9JASDriverFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B2F0-8039B2F0 027950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B2F0 = "SFR-UPDATE";
SECTION_DEAD static char const* const stringBase_8039B2FB = "kill DSP channel";
#pragma pop

/* 803C78B8-803C78E0 0249D8 0028+00 1/1 0/0 0/0 .data            history$267 */
SECTION_DATA static u8 history[40] = {
    0x00, 0x0F, 0x42, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804512D0-804512D4 0007D0 0004+00 1/1 0/0 0/0 .sbss            old_time$264 */
static u8 old_time[4];

/* 804512D4-804512D8 0007D4 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_804512D4[4];

/* 8045572C-80455730 003D2C 0004+00 1/1 0/0 0/0 .sdata2          @275 */
SECTION_SDATA2 static f32 lit_275 = 11.0f / 10.0f;

/* 80455730-80455738 003D30 0004+04 1/1 0/0 0/0 .sdata2          @276 */
SECTION_SDATA2 static f32 lit_276[1 + 1 /* padding */] = {
    32028.5f,
    /* padding */
    0.0f,
};

/* 80455738-80455740 003D38 0008+00 1/1 0/0 0/0 .sdata2          @278 */
SECTION_SDATA2 static f64 lit_278 = 4503599627370496.0 /* cast u32 to float */;

/* 8029C6C4-8029C7E0 297004 011C+00 1/1 1/1 0/0 .text            updateDSP__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::updateDSP() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/updateDSP__9JASDriverFv.s"
}
#pragma pop

/* 8029C7E0-8029C900 297120 0120+00 1/1 0/0 0/0 .text            readDspBuffer__9JASDriverFPsUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::readDspBuffer(s16* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/readDspBuffer__9JASDriverFPsUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B2F0-8039B2F0 027950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B30C = "DSP-MAIN";
#pragma pop

/* 8029C900-8029C9DC 297240 00DC+00 1/1 1/1 0/0 .text            finishDSPFrame__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::finishDSPFrame() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/finishDSPFrame__9JASDriverFv.s"
}
#pragma pop

/* 8029C9DC-8029C9E8 29731C 000C+00 0/0 0/0 2/2 .text
 * registerMixCallback__9JASDriverFPFl_Ps10JASMixMode           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::registerMixCallback(s16* (*param_0)(s32), JASMixMode param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/registerMixCallback__9JASDriverFPFl_Ps10JASMixMode.s"
}
#pragma pop

/* 8029C9E8-8029C9F0 297328 0008+00 1/1 5/5 0/0 .text            getDacRate__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::getDacRate() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/getDacRate__9JASDriverFv.s"
}
#pragma pop

/* 8029C9F0-8029C9F8 -00001 0008+00 0/0 0/0 0/0 .text            getSubFrames__9JASDriverFv */
u32 JASDriver::getSubFrames() {
    return *(u32*)(&JASDriver::sSubFrames);
}

/* 8029C9F8-8029CA04 297338 000C+00 2/2 0/0 0/0 .text            getDacSize__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::getDacSize() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/getDacSize__9JASDriverFv.s"
}
#pragma pop

/* 8029CA04-8029CA10 297344 000C+00 3/3 0/0 0/0 .text            getFrameSamples__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::getFrameSamples() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/getFrameSamples__9JASDriverFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B2F0-8039B2F0 027950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B315 = "MONO-MIX";
#pragma pop

/* 8029CA10-8029CAC0 297350 00B0+00 1/0 0/0 0/0 .text            mixMonoTrack__9JASDriverFPsUlPFl_Ps
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::mixMonoTrack(s16* param_0, u32 param_1, s16* (*param_2)(s32)) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/mixMonoTrack__9JASDriverFPsUlPFl_Ps.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B2F0-8039B2F0 027950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B31E = "MONO(W)-MIX";
#pragma pop

/* 8029CAC0-8029CB70 297400 00B0+00 1/0 0/0 0/0 .text mixMonoTrackWide__9JASDriverFPsUlPFl_Ps */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::mixMonoTrackWide(s16* param_0, u32 param_1, s16* (*param_2)(s32)) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/mixMonoTrackWide__9JASDriverFPsUlPFl_Ps.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B2F0-8039B2F0 027950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B32A = "DSPMIX";
SECTION_DEAD static char const* const stringBase_8039B331 = "MIXING";
#pragma pop

/* 8029CB70-8029CC50 2974B0 00E0+00 1/0 0/0 0/0 .text mixExtraTrack__9JASDriverFPsUlPFl_Ps */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::mixExtraTrack(s16* param_0, u32 param_1, s16* (*param_2)(s32)) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/mixExtraTrack__9JASDriverFPsUlPFl_Ps.s"
}
#pragma pop

/* 8029CC50-8029CCD4 297590 0084+00 1/0 0/0 0/0 .text mixInterleaveTrack__9JASDriverFPsUlPFl_Ps */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::mixInterleaveTrack(s16* param_0, u32 param_1, s16* (*param_2)(s32)) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAiCtrl/mixInterleaveTrack__9JASDriverFPsUlPFl_Ps.s"
}
#pragma pop

/* 8029CCD4-8029CCDC -00001 0008+00 0/0 0/0 0/0 .text            getSubFrameCounter__9JASDriverFv */
u32 JASDriver::getSubFrameCounter() {
    return *(u32*)(&JASDriver::sSubFrameCounter);
}

/* 8039B2F0-8039B2F0 027950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */