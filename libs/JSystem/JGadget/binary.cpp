//
// Generated By: dol2asm
// Translation Unit: binary
//

#include "JSystem/JGadget/binary.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void
parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit();
extern "C" void __dt__Q37JGadget6binary19TParse_header_blockFv();
extern "C" void parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl();

//
// External References:
//

extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" extern void* __vt__Q37JGadget6binary19TParse_header_block[5];

//
// Declarations:
//

/* 802DC864-802DC8C8 2D71A4 0064+00 0/0 2/2 0/0 .text
 * parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm const void*
JGadget::binary::parseVariableUInt_16_32_following(void const* param_0, u32* param_1, u32* param_2,
                                                   JGadget::binary::TEBit* param_3) {
    nofralloc
#include "asm/JSystem/JGadget/binary/parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit.s"
}
#pragma pop

/* 802DC8C8-802DC910 2D7208 0048+00 0/0 4/4 0/0 .text
 * __dt__Q37JGadget6binary19TParse_header_blockFv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JGadget::binary::TParse_header_block::~TParse_header_block() {
    nofralloc
#include "asm/JSystem/JGadget/binary/__dt__Q37JGadget6binary19TParse_header_blockFv.s"
}
#pragma pop

/* 802DC910-802DCA1C 2D7250 010C+00 0/0 9/9 0/0 .text
 * parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JGadget::binary::TParse_header_block::parse_next(void const** param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JGadget/binary/parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl.s"
}
#pragma pop