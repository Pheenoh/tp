//
// Generated By: dol2asm
// Translation Unit: d_a_obj_wind_stone
//

#include "rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone.h"
#include "dol2asm.h"

//
// Types:
//

struct dBgW {
    /* 8007B970 */ dBgW();
};

//
// Forward References:
//

extern "C" static void daWindStone_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__13daWindStone_cFv();
extern "C" void __dt__13daWindStone_cFv();
extern "C" void createHeap__13daWindStone_cFv();
extern "C" void create__13daWindStone_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void execute__13daWindStone_cFv();
extern "C" void draw__13daWindStone_cFv();
extern "C" void Delete__13daWindStone_cFv();
extern "C" void setModelMtx__13daWindStone_cFv();
extern "C" void init__13daWindStone_cFv();
extern "C" void chkWlfInRange__13daWindStone_cFv();
extern "C" void chkEveOccur__13daWindStone_cFv();
extern "C" void exeModeHowl__13daWindStone_cFv();
extern "C" void exeModeMapDisp__13daWindStone_cFv();
extern "C" void chkMapDispMode__13daWindStone_cFv();
extern "C" void getGoldWolfIdx__13daWindStone_cFv();
extern "C" static void daWindStone_create__FP13daWindStone_c();
extern "C" static void daWindStone_Delete__FP13daWindStone_c();
extern "C" static void daWindStone_execute__FP13daWindStone_c();
extern "C" static void daWindStone_draw__FP13daWindStone_c();
extern "C" static void func_80D385F0();
extern "C" static void func_80D385F8();
extern "C" extern char const* const d_a_obj_wind_stone__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void startWindStoneSound__13Z2WolfHowlMgrFScP3Vec();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_meter2_info[248];

//
// Declarations:
//

/* 80D379F8-80D37A18 000078 0020+00 1/1 0/0 0/0 .text daWindStone_c_createHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daWindStone_c_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D38628-80D38628 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D38628 = "WindStone";
#pragma pop

/* 80D38634-80D38638 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_wind_stone__stringBase0;

/* 80D38638-80D38658 -00001 0020+00 1/0 0/0 0/0 .data            daWindStone_METHODS */
SECTION_DATA static void* daWindStone_METHODS[8] = {
    (void*)daWindStone_create__FP13daWindStone_c,
    (void*)daWindStone_Delete__FP13daWindStone_c,
    (void*)daWindStone_execute__FP13daWindStone_c,
    (void*)NULL,
    (void*)daWindStone_draw__FP13daWindStone_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D38658-80D38688 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_WindStone */
SECTION_DATA extern void* g_profile_Obj_WindStone[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x018A0000, (void*)&g_fpcLf_Method,
    (void*)0x000005C8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02DC0000, (void*)&daWindStone_METHODS,
    (void*)0x00040100, (void*)0x03000000,
};

/* 80D38688-80D38694 000054 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80D38694-80D386B8 000060 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D385F8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D385F0,
};

/* 80D386B8-80D386C4 000084 000C+00 2/2 0/0 0/0 .data            __vt__13daWindStone_c */
SECTION_DATA extern void* __vt__13daWindStone_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daWindStone_cFv,
};

/* 80D37A18-80D37A68 000098 0050+00 2/2 0/0 0/0 .text            __ct__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daWindStone_c::daWindStone_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__ct__13daWindStone_cFv.s"
}
#pragma pop

/* 80D37A68-80D37AF4 0000E8 008C+00 1/0 0/0 0/0 .text            __dt__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daWindStone_c::~daWindStone_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__dt__13daWindStone_cFv.s"
}
#pragma pop

/* 80D37AF4-80D37C20 000174 012C+00 1/1 0/0 0/0 .text            createHeap__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/createHeap__13daWindStone_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D38608-80D38614 000000 000C+00 1/1 0/0 0/0 .rodata          @3760 */
SECTION_RODATA static u8 const lit_3760[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D38608, &lit_3760);

/* 80D38614-80D38618 00000C 0004+00 1/2 0/0 0/0 .rodata          @4127 */
SECTION_RODATA static u8 const lit_4127[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D38614, &lit_4127);

/* 80D38618-80D3861C 000010 0004+00 1/1 0/0 0/0 .rodata          @4128 */
SECTION_RODATA static f32 const lit_4128 = 10.0f;
COMPILER_STRIP_GATE(0x80D38618, &lit_4128);

/* 80D37C20-80D37E2C 0002A0 020C+00 1/1 0/0 0/0 .text            create__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/create__13daWindStone_cFv.s"
}
#pragma pop

/* 80D37E2C-80D37E9C 0004AC 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80D37E9C-80D37F0C 00051C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80D37F0C-80D37F6C 00058C 0060+00 1/1 0/0 0/0 .text            execute__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/execute__13daWindStone_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D3861C-80D38620 000014 0004+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 500.0f;
COMPILER_STRIP_GATE(0x80D3861C, &lit_4175);
#pragma pop

/* 80D38620-80D38624 000018 0004+00 0/1 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4176 = 1.0f;
COMPILER_STRIP_GATE(0x80D38620, &lit_4176);
#pragma pop

/* 80D37F6C-80D3806C 0005EC 0100+00 1/1 0/0 0/0 .text            draw__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/draw__13daWindStone_cFv.s"
}
#pragma pop

/* 80D3806C-80D3811C 0006EC 00B0+00 1/1 0/0 0/0 .text            Delete__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/Delete__13daWindStone_cFv.s"
}
#pragma pop

/* 80D3811C-80D38180 00079C 0064+00 2/2 0/0 0/0 .text            setModelMtx__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::setModelMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/setModelMtx__13daWindStone_cFv.s"
}
#pragma pop

/* 80D38180-80D381EC 000800 006C+00 1/1 0/0 0/0 .text            init__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/init__13daWindStone_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D38624-80D38628 00001C 0004+00 1/1 0/0 0/0 .rodata          @4243 */
SECTION_RODATA static f32 const lit_4243 = 40000.0f;
COMPILER_STRIP_GATE(0x80D38624, &lit_4243);

/* 80D381EC-80D38278 00086C 008C+00 1/1 0/0 0/0 .text            chkWlfInRange__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::chkWlfInRange() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/chkWlfInRange__13daWindStone_cFv.s"
}
#pragma pop

/* 80D38278-80D382C4 0008F8 004C+00 2/2 0/0 0/0 .text            chkEveOccur__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::chkEveOccur() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/chkEveOccur__13daWindStone_cFv.s"
}
#pragma pop

/* 80D382C4-80D3835C 000944 0098+00 1/1 0/0 0/0 .text            exeModeHowl__13daWindStone_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::exeModeHowl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/exeModeHowl__13daWindStone_cFv.s"
}
#pragma pop

/* 80D3835C-80D383FC 0009DC 00A0+00 1/1 0/0 0/0 .text            exeModeMapDisp__13daWindStone_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::exeModeMapDisp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/exeModeMapDisp__13daWindStone_cFv.s"
}
#pragma pop

/* 80D383FC-80D384C4 000A7C 00C8+00 1/1 0/0 0/0 .text            chkMapDispMode__13daWindStone_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::chkMapDispMode() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/chkMapDispMode__13daWindStone_cFv.s"
}
#pragma pop

/* 80D384C4-80D3853C 000B44 0078+00 1/1 0/0 0/0 .text            getGoldWolfIdx__13daWindStone_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::getGoldWolfIdx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/getGoldWolfIdx__13daWindStone_cFv.s"
}
#pragma pop

/* 80D3853C-80D38590 000BBC 0054+00 1/0 0/0 0/0 .text daWindStone_create__FP13daWindStone_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daWindStone_create(daWindStone_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_create__FP13daWindStone_c.s"
}
#pragma pop

/* 80D38590-80D385B0 000C10 0020+00 1/0 0/0 0/0 .text daWindStone_Delete__FP13daWindStone_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daWindStone_Delete(daWindStone_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_Delete__FP13daWindStone_c.s"
}
#pragma pop

/* 80D385B0-80D385D0 000C30 0020+00 1/0 0/0 0/0 .text daWindStone_execute__FP13daWindStone_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daWindStone_execute(daWindStone_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_execute__FP13daWindStone_c.s"
}
#pragma pop

/* 80D385D0-80D385F0 000C50 0020+00 1/0 0/0 0/0 .text            daWindStone_draw__FP13daWindStone_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daWindStone_draw(daWindStone_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_draw__FP13daWindStone_c.s"
}
#pragma pop

/* 80D385F0-80D385F8 000C70 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80D385F0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/func_80D385F0.s"
}
#pragma pop

/* 80D385F8-80D38600 000C78 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80D385F8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/func_80D385F8.s"
}
#pragma pop

/* 80D38628-80D38628 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */