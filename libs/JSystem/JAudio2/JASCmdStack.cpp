//
// Generated By: dol2asm
// Translation Unit: JASCmdStack
//

#include "JSystem/JAudio2/JASCmdStack.h"
#include "dol2asm.h"

//
// Types:
//

struct JSUPtrLink {};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DC15C */ void remove(JSUPtrLink*);
};

struct JASPortCmd {
    struct TPortHead {
        /* 80291094 */ void execCommandOnce();
        /* 8029110C */ void execCommandStay();
        /* 802911D0 */ ~TPortHead();
    };

    /* 80291060 */ void execAllCommand();

    static u8 sCommandListOnce[12];
    static u8 sCommandListStay[12];
};

//
// Forward References:
//

extern "C" void execAllCommand__10JASPortCmdFv();
extern "C" void execCommandOnce__Q210JASPortCmd9TPortHeadFv();
extern "C" void execCommandStay__Q210JASPortCmd9TPortHeadFv();
extern "C" void __sinit_JASCmdStack_cpp();
extern "C" void __dt__Q210JASPortCmd9TPortHeadFv();
extern "C" u8 sCommandListOnce__10JASPortCmd[12];
extern "C" u8 sCommandListStay__10JASPortCmd[12];

//
// External References:
//

extern "C" void __dl__FPv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __register_global_object();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 80431678-80431684 05E398 000C+00 1/1 0/0 0/0 .bss             @80 */
static u8 lit_80[12];

/* 80431684-80431690 05E3A4 000C+00 1/2 0/0 0/0 .bss             sCommandListOnce__10JASPortCmd */
u8 JASPortCmd::sCommandListOnce[12];

/* 80431690-8043169C 05E3B0 000C+00 0/1 0/0 0/0 .bss             @82 */
#pragma push
#pragma force_active on
static u8 lit_82[12];
#pragma pop

/* 8043169C-804316A8 05E3BC 000C+00 1/2 0/0 0/0 .bss             sCommandListStay__10JASPortCmd */
u8 JASPortCmd::sCommandListStay[12];

/* 80291060-80291094 28B9A0 0034+00 0/0 1/1 0/0 .text            execAllCommand__10JASPortCmdFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASPortCmd::execAllCommand() {
    nofralloc
#include "asm/JSystem/JAudio2/JASCmdStack/execAllCommand__10JASPortCmdFv.s"
}
#pragma pop

/* 80291094-8029110C 28B9D4 0078+00 1/1 0/0 0/0 .text execCommandOnce__Q210JASPortCmd9TPortHeadFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASPortCmd::TPortHead::execCommandOnce() {
    nofralloc
#include "asm/JSystem/JAudio2/JASCmdStack/execCommandOnce__Q210JASPortCmd9TPortHeadFv.s"
}
#pragma pop

/* 8029110C-8029116C 28BA4C 0060+00 1/1 0/0 0/0 .text execCommandStay__Q210JASPortCmd9TPortHeadFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASPortCmd::TPortHead::execCommandStay() {
    nofralloc
#include "asm/JSystem/JAudio2/JASCmdStack/execCommandStay__Q210JASPortCmd9TPortHeadFv.s"
}
#pragma pop

/* 8029116C-802911D0 28BAAC 0064+00 0/0 1/0 0/0 .text            __sinit_JASCmdStack_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JASCmdStack_cpp() {
    nofralloc
#include "asm/JSystem/JAudio2/JASCmdStack/__sinit_JASCmdStack_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8029116C, __sinit_JASCmdStack_cpp);
#pragma pop

/* 802911D0-80291228 28BB10 0058+00 1/1 0/0 0/0 .text            __dt__Q210JASPortCmd9TPortHeadFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASPortCmd::TPortHead::~TPortHead() {
    nofralloc
#include "asm/JSystem/JAudio2/JASCmdStack/__dt__Q210JASPortCmd9TPortHeadFv.s"
}
#pragma pop