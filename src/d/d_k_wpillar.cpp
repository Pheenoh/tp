//
// Generated By: dol2asm
// Translation Unit: d/d_k_wpillar
//

#include "d/d_k_wpillar.h"
#include "dol2asm.h"

//
// Types:
//

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DModelData {};

struct J3DAnmTransform {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct kankyo_class {};

struct cXyz {};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);

    static u8 mGndCheck[84];
};

struct dkWpillar_c {
    /* 80261B54 */ void create();
    /* 80261F24 */ ~dkWpillar_c();
    /* 80262014 */ void execute();
    /* 802620C8 */ void draw();
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct cBgS_PolyInfo {};

struct dBgS {
    /* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct JKRSolidHeap {};

struct J3DModel {};

struct J3DLightObj {
    /* 80018C0C */ J3DLightObj();
};

struct J3DLightInfo {
    /* 803256C4 */ void operator=(J3DLightInfo const&);
};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
};

//
// Forward References:
//

extern "C" void create__11dkWpillar_cFv();
extern "C" static void dkWpillar_Create__FP12kankyo_class();
extern "C" void __dt__11dkWpillar_cFv();
extern "C" static void dkWpillar_Delete__FP11dkWpillar_c();
extern "C" void execute__11dkWpillar_cFv();
extern "C" static void dkWpillar_Execute__FP11dkWpillar_c();
extern "C" void draw__11dkWpillar_cFv();
extern "C" static void dkWpillar_Draw__FP11dkWpillar_c();
extern "C" extern void* g_profile_WPILLAR[10 + 1 /* padding */];

//
// External References:
//

extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_createSolidHeapFromGameToCurrent__FUlUl();
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_destroySolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_restoreCurrentHeap__Fv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void fopAcM_getWaterY__FPC4cXyzPf();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fopKyM_Delete__FPv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void __dl__FPv();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __construct_array();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern u8 const j3dDefaultLightInfo[52];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* g_fopKy_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80454FF0-80454FF8 0035F0 0007+01 1/1 0/0 0/0 .sdata2          l_arcName */
SECTION_SDATA2 static u8 l_arcName[7 + 1 /* padding */] = {
    0x41,
    0x6C,
    0x77,
    0x61,
    0x79,
    0x73,
    0x00,
    /* padding */
    0x00,
};

/* 80454FF8-80454FFC 0035F8 0004+00 1/1 0/0 0/0 .sdata2          @3838 */
SECTION_SDATA2 static f32 lit_3838 = 1.0f;

/* 80454FFC-80455000 0035FC 0004+00 1/1 0/0 0/0 .sdata2          @3839 */
SECTION_SDATA2 static f32 lit_3839 = 0.5f;

/* 80455000-80455004 003600 0004+00 1/1 0/0 0/0 .sdata2          @3840 */
SECTION_SDATA2 static f32 lit_3840 = 0.25f;

/* 80261B54-80261F04 25C494 03B0+00 1/1 0/0 0/0 .text            create__11dkWpillar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dkWpillar_c::create() {
    nofralloc
#include "asm/d/d_k_wpillar/create__11dkWpillar_cFv.s"
}
#pragma pop

/* 80261F04-80261F24 25C844 0020+00 1/0 0/0 0/0 .text            dkWpillar_Create__FP12kankyo_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dkWpillar_Create(kankyo_class* param_0) {
    nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Create__FP12kankyo_class.s"
}
#pragma pop

/* 80261F24-80261FEC 25C864 00C8+00 1/1 0/0 0/0 .text            __dt__11dkWpillar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dkWpillar_c::~dkWpillar_c() {
    nofralloc
#include "asm/d/d_k_wpillar/__dt__11dkWpillar_cFv.s"
}
#pragma pop

/* 80261FEC-80262014 25C92C 0028+00 1/0 0/0 0/0 .text            dkWpillar_Delete__FP11dkWpillar_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dkWpillar_Delete(dkWpillar_c* param_0) {
    nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Delete__FP11dkWpillar_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455004-80455008 003604 0004+00 1/1 0/0 0/0 .sdata2          @3946 */
SECTION_SDATA2 static u8 lit_3946[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80262014-802620A8 25C954 0094+00 1/1 0/0 0/0 .text            execute__11dkWpillar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dkWpillar_c::execute() {
    nofralloc
#include "asm/d/d_k_wpillar/execute__11dkWpillar_cFv.s"
}
#pragma pop

/* 802620A8-802620C8 25C9E8 0020+00 1/0 0/0 0/0 .text            dkWpillar_Execute__FP11dkWpillar_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dkWpillar_Execute(dkWpillar_c* param_0) {
    nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Execute__FP11dkWpillar_c.s"
}
#pragma pop

/* 802620C8-802621AC 25CA08 00E4+00 1/1 0/0 0/0 .text            draw__11dkWpillar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dkWpillar_c::draw() {
    nofralloc
#include "asm/d/d_k_wpillar/draw__11dkWpillar_cFv.s"
}
#pragma pop

/* 802621AC-802621CC 25CAEC 0020+00 1/0 0/0 0/0 .text            dkWpillar_Draw__FP11dkWpillar_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dkWpillar_Draw(dkWpillar_c* param_0) {
    nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Draw__FP11dkWpillar_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C3470-803C3484 -00001 0014+00 1/0 0/0 0/0 .data            l_dkWpillar_Method */
SECTION_DATA static void* l_dkWpillar_Method[5] = {
    (void*)dkWpillar_Create__FP12kankyo_class, (void*)dkWpillar_Delete__FP11dkWpillar_c,
    (void*)dkWpillar_Execute__FP11dkWpillar_c, (void*)NULL,
    (void*)dkWpillar_Draw__FP11dkWpillar_c,
};

/* 803C3484-803C34B0 -00001 0028+04 0/0 0/0 1/0 .data            g_profile_WPILLAR */
SECTION_DATA extern void* g_profile_WPILLAR[10 + 1 /* padding */] = {
    (void*)0xFFFFFFFD,
    (void*)0x0009FFFD,
    (void*)0x03020000,
    (void*)&g_fpcLf_Method,
    (void*)0x000004D4,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopKy_Method,
    (void*)0x02F70000,
    (void*)&l_dkWpillar_Method,
    /* padding */
    NULL,
};