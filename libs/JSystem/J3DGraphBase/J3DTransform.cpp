//
// Generated By: dol2asm
// Translation Unit: J3DTransform
//

#include "JSystem/J3DGraphBase/J3DTransform.h"
#include "dol2asm.h"

//
// Types:
//

struct J3DTextureSRTInfo {};

//
// Forward References:
//

extern "C" void __MTGQR7__FUl();
extern "C" void J3DGQRSetup7__FUlUlUlUl();
extern "C" void J3DCalcBBoardMtx__FPA4_f();
extern "C" void J3DCalcYBBoardMtx__FPA4_f();
extern "C" void J3DPSCalcInverseTranspose__FPA4_fPA3_f();
extern "C" void J3DGetTranslateRotateMtx__FRC16J3DTransformInfoPA4_f();
extern "C" void J3DGetTranslateRotateMtx__FsssfffPA4_f();
extern "C" void J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DScaleNrmMtx__FPA4_fRC3Vec();
extern "C" void J3DScaleNrmMtx33__FPA3_fRC3Vec();
extern "C" void J3DMtxProjConcat__FPA4_fPA4_fPA4_f();
extern "C" void J3DPSMtxArrayConcat__FPA4_fPA4_fPA4_fUl();
extern "C" extern f32 PSMulUnit01[2];

//
// External References:
//

extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 80311630-80311638 -00001 0008+00 0/0 0/0 0/0 .text            __MTGQR7__FUl */
asm void __MTGQR7(u32 param_0) {
    // clang-format off
	nofralloc
	mtspr 0x397, r3
	blr
    // clang-format on
}

/* 80311638-80311670 30BF78 0038+00 0/0 2/2 0/0 .text            J3DGQRSetup7__FUlUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGQRSetup7(u32 param_0, u32 param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGQRSetup7__FUlUlUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456378-8045637C 004978 0004+00 6/6 0/0 0/0 .sdata2          @435 */
SECTION_SDATA2 static u8 lit_435[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80311670-80311760 30BFB0 00F0+00 0/0 2/2 0/0 .text            J3DCalcBBoardMtx__FPA4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DCalcBBoardMtx(f32 (*param_0)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DCalcBBoardMtx__FPA4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1E30-803A1E50 02E490 0020+00 0/0 1/1 0/0 .rodata          j3dDefaultTransformInfo */
extern J3DTransformInfo const j3dDefaultTransformInfo = {
    {1.0f, 1.0f, 1.0f}, {0, 0, 0}, {0.0f, 0.0f, 0.0f}};

/* 803A1E50-803A1E5C 02E4B0 000C+00 0/0 1/1 0/0 .rodata          j3dDefaultScale */
extern Vec const j3dDefaultScale = {1.0f, 1.0f, 1.0f};

/* 803A1E5C-803A1E8C 02E4BC 0030+00 0/0 8/8 7/7 .rodata          j3dDefaultMtx */
extern Mtx const j3dDefaultMtx = {
    {1.0f, 0.0f, 0.0f, 0.0f}, {0.0f, 1.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 1.0f, 0.0f}};

/* 803A1E8C-803A1E98 02E4EC 000C+00 1/1 0/0 0/0 .rodata          @443 */
SECTION_RODATA static u8 const lit_443[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1E8C, &lit_443);

/* 80311760-8031189C 30C0A0 013C+00 0/0 2/2 0/0 .text            J3DCalcYBBoardMtx__FPA4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DCalcYBBoardMtx(f32 (*param_0)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DCalcYBBoardMtx__FPA4_f.s"
}
#pragma pop

/* 8031189C-80311964 30C1DC 00C8+00 0/0 6/6 0/0 .text J3DPSCalcInverseTranspose__FPA4_fPA3_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DPSCalcInverseTranspose(f32 (*param_0)[4], f32 (*param_1)[3]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DPSCalcInverseTranspose__FPA4_fPA3_f.s"
}
#pragma pop

/* 80311964-80311A24 30C2A4 00C0+00 0/0 2/2 2/2 .text
 * J3DGetTranslateRotateMtx__FRC16J3DTransformInfoPA4_f         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGetTranslateRotateMtx(J3DTransformInfo const& param_0, f32 (*param_1)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGetTranslateRotateMtx__FRC16J3DTransformInfoPA4_f.s"
}
#pragma pop

/* 80311A24-80311ACC 30C364 00A8+00 0/0 1/1 0/0 .text J3DGetTranslateRotateMtx__FsssfffPA4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGetTranslateRotateMtx(s16 param_0, s16 param_1, s16 param_2, f32 param_3, f32 param_4,
                                  f32 param_5, f32 (*param_6)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGetTranslateRotateMtx__FsssfffPA4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045637C-80456380 00497C 0004+00 4/4 0/0 0/0 .sdata2          @526 */
SECTION_SDATA2 static f32 lit_526 = 1.0f;

/* 80311ACC-80311B80 30C40C 00B4+00 0/0 3/3 0/0 .text
 * J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGetTextureMtx(J3DTextureSRTInfo const& param_0, Vec const& param_1, f32 (*param_2)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f.s"
}
#pragma pop

/* 80311B80-80311C34 30C4C0 00B4+00 0/0 3/3 0/0 .text
 * J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGetTextureMtxOld(J3DTextureSRTInfo const& param_0, Vec const& param_1,
                             f32 (*param_2)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456380-80456388 004980 0004+04 2/2 0/0 0/0 .sdata2          @557 */
SECTION_SDATA2 static f32 lit_557[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80311C34-80311CE4 30C574 00B0+00 0/0 3/3 0/0 .text
 * J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGetTextureMtxMaya(J3DTextureSRTInfo const& param_0, f32 (*param_1)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f.s"
}
#pragma pop

/* 80311CE4-80311D94 30C624 00B0+00 0/0 3/3 0/0 .text
 * J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGetTextureMtxMayaOld(J3DTextureSRTInfo const& param_0, f32 (*param_1)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f.s"
}
#pragma pop

/* 80311D94-80311DF8 30C6D4 0064+00 0/0 2/2 0/0 .text            J3DScaleNrmMtx__FPA4_fRC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DScaleNrmMtx(f32 (*param_0)[4], Vec const& param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DScaleNrmMtx__FPA4_fRC3Vec.s"
}
#pragma pop

/* 80311DF8-80311E4C 30C738 0054+00 0/0 5/5 0/0 .text            J3DScaleNrmMtx33__FPA3_fRC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DScaleNrmMtx33(f32 (*param_0)[3], Vec const& param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DScaleNrmMtx33__FPA3_fRC3Vec.s"
}
#pragma pop

/* 80311E4C-80311F70 30C78C 0124+00 0/0 3/3 0/0 .text            J3DMtxProjConcat__FPA4_fPA4_fPA4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxProjConcat(f32 (*param_0)[4], f32 (*param_1)[4], f32 (*param_2)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DMtxProjConcat__FPA4_fPA4_fPA4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450958-80450960 0003D8 0008+00 1/1 0/0 0/0 .sdata           Unit01 */
SECTION_SDATA static u8 Unit01[8] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 80311F70-8031204C 30C8B0 00DC+00 0/0 1/1 0/0 .text J3DPSMtxArrayConcat__FPA4_fPA4_fPA4_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DPSMtxArrayConcat(f32 (*param_0)[4], f32 (*param_1)[4], f32 (*param_2)[4], u32 param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTransform/J3DPSMtxArrayConcat__FPA4_fPA4_fPA4_fUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD8F8-803CD900 02AA18 0008+00 0/0 2/2 0/0 .data            PSMulUnit01 */
SECTION_DATA extern f32 PSMulUnit01[2] = {
    0.0f, -1.0f,
};