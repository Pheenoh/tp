/**
 * @file d_a_obj_pdtile.cpp
 * 
*/

#include "d/actor/d_a_obj_pdtile.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void create1st__13daObjPDtile_cFv();
extern "C" void setMtx__13daObjPDtile_cFv();
extern "C" void rideActor__13daObjPDtile_cFP10fopAc_ac_c();
extern "C" void CreateHeap__13daObjPDtile_cFv();
extern "C" void Create__13daObjPDtile_cFv();
extern "C" void Execute__13daObjPDtile_cFPPA3_A4_f();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void Draw__13daObjPDtile_cFv();
extern "C" void Delete__13daObjPDtile_cFv();
extern "C" static void daObjPDtile_create1st__FP13daObjPDtile_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static void daObjPDtile_MoveBGDelete__FP13daObjPDtile_c();
extern "C" static void daObjPDtile_MoveBGExecute__FP13daObjPDtile_c();
extern "C" static void daObjPDtile_MoveBGDraw__FP13daObjPDtile_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__13daObjPDtile_cFv();
extern "C" static void func_80CAC4EC();
extern "C" static void func_80CAC4F4();
extern "C" static void func_80CAC4FC();
extern "C" extern char const* const d_a_obj_pdtile__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XYZrotM__FPA4_fsss();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80CAACB8-80CAACE0 000078 0028+00 1/1 0/0 0/0 .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC50C-80CAC510 000000 0004+00 3/3 0/0 0/0 .rodata          @3680 */
SECTION_RODATA static f32 const lit_3680 = 1500.0f;
COMPILER_STRIP_GATE(0x80CAC50C, &lit_3680);

/* 80CAC510-80CAC514 000004 0004+00 0/1 0/0 0/0 .rodata          @3681 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3681 = 600.0f;
COMPILER_STRIP_GATE(0x80CAC510, &lit_3681);
#pragma pop

/* 80CAC514-80CAC518 000008 0004+00 0/2 0/0 0/0 .rodata          @3682 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3682 = 450.0f;
COMPILER_STRIP_GATE(0x80CAC514, &lit_3682);
#pragma pop

/* 80CAC518-80CAC51C 00000C 0004+00 1/3 0/0 0/0 .rodata          @3683 */
SECTION_RODATA static u8 const lit_3683[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CAC518, &lit_3683);

/* 80CAC580-80CAC580 000074 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CAC580 = "P_Dtile";
SECTION_DEAD static char const* const stringBase_80CAC588 = "P_Dtile00";
SECTION_DEAD static char const* const stringBase_80CAC592 = "Lv9_Dtile";
#pragma pop

/* 80CAC59C-80CAC5A8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CAC5A8-80CAC5BC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80CAC5BC-80CAC5C0 -00001 0004+00 0/1 0/0 0/0 .data            l_arcName4 */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_arcName4 = (void*)&d_a_obj_pdtile__stringBase0;
#pragma pop

/* 80CAC5C0-80CAC5C8 000024 0008+00 0/1 0/0 0/0 .data            l_dzbidx4 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_dzbidx4[8] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08,
};
#pragma pop

/* 80CAC5C8-80CAC5D0 00002C 0008+00 0/1 0/0 0/0 .data            l_bmdidx4 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_bmdidx4[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04,
};
#pragma pop

/* 80CAC5D0-80CAC600 000034 0030+00 0/1 0/0 0/0 .data            l_cull_box4 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_cull_box4[48] = {
    0xC2, 0x48, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x41, 0xA3, 0xEB, 0x85, 0x42, 0x48, 0x00, 0x00, 0xC3, 0x20, 0x00, 0x00, 0xC3, 0xE6, 0x00, 0x00,
    0xC3, 0x20, 0x00, 0x00, 0x43, 0x20, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x43, 0x20, 0x00, 0x00,
};
#pragma pop

/* 80CAC600-80CAC604 -00001 0004+00 0/1 0/0 0/0 .data            l_arcName7 */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_arcName7 = (void*)(((char*)&d_a_obj_pdtile__stringBase0) + 0x8);
#pragma pop

/* 80CAC604-80CAC608 000068 0004+00 0/1 0/0 0/0 .data            l_dzbidx7 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 l_dzbidx7 = 0x00000007;
#pragma pop

/* 80CAC608-80CAC60C 00006C 0004+00 0/1 0/0 0/0 .data            l_bmdidx7 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 l_bmdidx7 = 0x00000004;
#pragma pop

/* 80CAC60C-80CAC624 000070 0018+00 0/1 0/0 0/0 .data            l_cull_box7 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_cull_box7[24] = {
    0xC3, 0x48, 0x00, 0x00, 0xC4, 0x2F, 0x00, 0x00, 0xC3, 0x48, 0x00, 0x00,
    0x43, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};
#pragma pop

/* 80CAC624-80CAC628 -00001 0004+00 0/1 0/0 0/0 .data            l_arcName9 */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_arcName9 = (void*)(((char*)&d_a_obj_pdtile__stringBase0) + 0x12);
#pragma pop

/* 80CAC628-80CAC62C 00008C 0004+00 0/1 0/0 0/0 .data            l_dzbidx9 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 l_dzbidx9 = 0x00000007;
#pragma pop

/* 80CAC62C-80CAC630 000090 0004+00 0/1 0/0 0/0 .data            l_bmdidx9 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 l_bmdidx9 = 0x00000004;
#pragma pop

/* 80CAC630-80CAC648 000094 0018+00 0/1 0/0 0/0 .data            l_cull_box9 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_cull_box9[24] = {
    0xC3, 0x48, 0x00, 0x00, 0xC4, 0x22, 0x80, 0x00, 0xC3, 0x48, 0x00, 0x00,
    0x43, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};
#pragma pop

/* 80CAACE0-80CAAE80 0000A0 01A0+00 1/1 0/0 0/0 .text            create1st__13daObjPDtile_cFv */
void daObjPDtile_c::create1st() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC51C-80CAC520 000010 0004+00 1/1 0/0 0/0 .rodata          @3716 */
SECTION_RODATA static f32 const lit_3716 = 101.0f / 100.0f;
COMPILER_STRIP_GATE(0x80CAC51C, &lit_3716);

/* 80CAC520-80CAC524 000014 0004+00 1/3 0/0 0/0 .rodata          @3717 */
SECTION_RODATA static f32 const lit_3717 = 1.0f;
COMPILER_STRIP_GATE(0x80CAC520, &lit_3717);

/* 80CAAE80-80CAAF90 000240 0110+00 3/3 0/0 0/0 .text            setMtx__13daObjPDtile_cFv */
void daObjPDtile_c::setMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC524-80CAC528 000018 0004+00 0/2 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3778 = 2.5f;
COMPILER_STRIP_GATE(0x80CAC524, &lit_3778);
#pragma pop

/* 80CAC528-80CAC52C 00001C 0004+00 0/2 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = -1.0f;
COMPILER_STRIP_GATE(0x80CAC528, &lit_3779);
#pragma pop

/* 80CAC52C-80CAC530 000020 0004+00 1/2 0/0 0/0 .rodata          @3780 */
SECTION_RODATA static f32 const lit_3780 = 65535.0f;
COMPILER_STRIP_GATE(0x80CAC52C, &lit_3780);

/* 80CAAF90-80CAB1F0 000350 0260+00 1/1 0/0 0/0 .text rideActor__13daObjPDtile_cFP10fopAc_ac_c */
void daObjPDtile_c::rideActor(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80CAB1F0-80CAB258 0005B0 0068+00 1/0 0/0 0/0 .text            CreateHeap__13daObjPDtile_cFv */
void daObjPDtile_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC648-80CAC68C 0000AC 0044+00 1/1 0/0 0/0 .data            cc_cyl_src */
static dCcD_SrcCyl cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x8020, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        70.0f, // mRadius
        100.0f // mHeight
    } // mCyl
};

/* 80CAB258-80CAB374 000618 011C+00 1/0 0/0 0/0 .text            Create__13daObjPDtile_cFv */
void daObjPDtile_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC530-80CAC534 000024 0004+00 0/1 0/0 0/0 .rodata          @4184 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4184 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CAC530, &lit_4184);
#pragma pop

/* 80CAC534-80CAC538 000028 0004+00 0/1 0/0 0/0 .rodata          @4185 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4185 = 19.0f / 20.0f;
COMPILER_STRIP_GATE(0x80CAC534, &lit_4185);
#pragma pop

/* 80CAC538-80CAC53C 00002C 0004+00 0/1 0/0 0/0 .rodata          @4186 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4186 = 4.5f;
COMPILER_STRIP_GATE(0x80CAC538, &lit_4186);
#pragma pop

/* 80CAC53C-80CAC540 000030 0004+00 0/1 0/0 0/0 .rodata          @4187 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4187 = -4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80CAC53C, &lit_4187);
#pragma pop

/* 80CAC540-80CAC544 000034 0004+00 0/1 0/0 0/0 .rodata          @4188 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4188 = 14400.0f;
COMPILER_STRIP_GATE(0x80CAC540, &lit_4188);
#pragma pop

/* 80CAC544-80CAC548 000038 0004+00 0/1 0/0 0/0 .rodata          @4189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4189 = 30.0f;
COMPILER_STRIP_GATE(0x80CAC544, &lit_4189);
#pragma pop

/* 80CAC548-80CAC54C 00003C 0004+00 0/1 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = 5.0f;
COMPILER_STRIP_GATE(0x80CAC548, &lit_4190);
#pragma pop

/* 80CAC54C-80CAC550 000040 0004+00 0/1 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = 3.0f;
COMPILER_STRIP_GATE(0x80CAC54C, &lit_4191);
#pragma pop

/* 80CAC550-80CAC554 000044 0004+00 0/1 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 15.0f;
COMPILER_STRIP_GATE(0x80CAC550, &lit_4192);
#pragma pop

/* 80CAC554-80CAC558 000048 0004+00 0/1 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = 2.0f;
COMPILER_STRIP_GATE(0x80CAC554, &lit_4193);
#pragma pop

/* 80CAC558-80CAC55C 00004C 0004+00 0/1 0/0 0/0 .rodata          @4194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4194 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x80CAC558, &lit_4194);
#pragma pop

/* 80CAC55C-80CAC560 000050 0004+00 0/1 0/0 0/0 .rodata          @4195 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4195 = 10.0f;
COMPILER_STRIP_GATE(0x80CAC55C, &lit_4195);
#pragma pop

/* 80CAC560-80CAC564 000054 0004+00 0/1 0/0 0/0 .rodata          @4196 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4196 = -1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80CAC560, &lit_4196);
#pragma pop

/* 80CAC564-80CAC568 000058 0004+00 0/1 0/0 0/0 .rodata          @4197 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4197 = 1.5f;
COMPILER_STRIP_GATE(0x80CAC564, &lit_4197);
#pragma pop

/* 80CAC568-80CAC56C 00005C 0004+00 0/1 0/0 0/0 .rodata          @4198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4198 = 7.0f;
COMPILER_STRIP_GATE(0x80CAC568, &lit_4198);
#pragma pop

/* 80CAC56C-80CAC570 000060 0004+00 0/1 0/0 0/0 .rodata          @4199 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4199 = -3000.0f;
COMPILER_STRIP_GATE(0x80CAC56C, &lit_4199);
#pragma pop

/* 80CAC570-80CAC574 000064 0004+00 0/1 0/0 0/0 .rodata          @4200 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4200 = 127.0f;
COMPILER_STRIP_GATE(0x80CAC570, &lit_4200);
#pragma pop

/* 80CAC574-80CAC57C 000068 0008+00 0/1 0/0 0/0 .rodata          @4202 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4202[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CAC574, &lit_4202);
#pragma pop

/* 80CAC68C-80CAC6AC -00001 0020+00 1/0 0/0 0/0 .data            daObjPDtile_METHODS */
static actor_method_class daObjPDtile_METHODS = {
    (process_method_func)daObjPDtile_create1st__FP13daObjPDtile_c,
    (process_method_func)daObjPDtile_MoveBGDelete__FP13daObjPDtile_c,
    (process_method_func)daObjPDtile_MoveBGExecute__FP13daObjPDtile_c,
    0,
    (process_method_func)daObjPDtile_MoveBGDraw__FP13daObjPDtile_c,
};

/* 80CAC6AC-80CAC6DC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_PDtile */
extern actor_process_profile_definition g_profile_Obj_PDtile = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_PDtile,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjPDtile_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  670,                    // mPriority
  &daObjPDtile_METHODS,   // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CAC6DC-80CAC6E8 000140 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CAC6E8-80CAC6F4 00014C 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CAC6F4-80CAC700 000158 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CAC700-80CAC70C 000164 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CAC70C-80CAC73C 000170 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CAC4EC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CAC4FC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CAC4F4,
};

/* 80CAB374-80CABED8 000734 0B64+00 1/0 0/0 0/0 .text            Execute__13daObjPDtile_cFPPA3_A4_f
 */
void daObjPDtile_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80CABED8-80CABF50 001298 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
// dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" void __dt__14dBgS_ObjGndChkFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC57C-80CAC580 000070 0004+00 1/1 0/0 0/0 .rodata          @4256 */
SECTION_RODATA static f32 const lit_4256 = 200.0f;
COMPILER_STRIP_GATE(0x80CAC57C, &lit_4256);

/* 80CABF50-80CAC094 001310 0144+00 1/0 0/0 0/0 .text            Draw__13daObjPDtile_cFv */
void daObjPDtile_c::Draw() {
    // NONMATCHING
}

/* 80CAC094-80CAC0D8 001454 0044+00 1/0 0/0 0/0 .text            Delete__13daObjPDtile_cFv */
void daObjPDtile_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CAC73C-80CAC768 0001A0 002C+00 2/2 0/0 0/0 .data            __vt__13daObjPDtile_c */
SECTION_DATA extern void* __vt__13daObjPDtile_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daObjPDtile_cFv,
    (void*)Create__13daObjPDtile_cFv,
    (void*)Execute__13daObjPDtile_cFPPA3_A4_f,
    (void*)Draw__13daObjPDtile_cFv,
    (void*)Delete__13daObjPDtile_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)__dt__13daObjPDtile_cFv,
};

/* 80CAC0D8-80CAC1D4 001498 00FC+00 1/0 0/0 0/0 .text daObjPDtile_create1st__FP13daObjPDtile_c */
static void daObjPDtile_create1st(daObjPDtile_c* param_0) {
    // NONMATCHING
}

/* 80CAC1D4-80CAC21C 001594 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80CAC21C-80CAC264 0015DC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80CAC264-80CAC2C0 001624 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80CAC2C0-80CAC2E0 001680 0020+00 1/0 0/0 0/0 .text daObjPDtile_MoveBGDelete__FP13daObjPDtile_c
 */
static void daObjPDtile_MoveBGDelete(daObjPDtile_c* param_0) {
    // NONMATCHING
}

/* 80CAC2E0-80CAC300 0016A0 0020+00 1/0 0/0 0/0 .text daObjPDtile_MoveBGExecute__FP13daObjPDtile_c
 */
static void daObjPDtile_MoveBGExecute(daObjPDtile_c* param_0) {
    // NONMATCHING
}

/* 80CAC300-80CAC32C 0016C0 002C+00 1/0 0/0 0/0 .text daObjPDtile_MoveBGDraw__FP13daObjPDtile_c */
static void daObjPDtile_MoveBGDraw(daObjPDtile_c* param_0) {
    // NONMATCHING
}

/* 80CAC32C-80CAC374 0016EC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80CAC374-80CAC4EC 001734 0178+00 1/0 0/0 0/0 .text            __dt__13daObjPDtile_cFv */
daObjPDtile_c::~daObjPDtile_c() {
    // NONMATCHING
}

/* 80CAC4EC-80CAC4F4 0018AC 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
static void func_80CAC4EC() {
    // NONMATCHING
}

/* 80CAC4F4-80CAC4FC 0018B4 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
static void func_80CAC4F4() {
    // NONMATCHING
}

/* 80CAC4FC-80CAC504 0018BC 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
static void func_80CAC4FC() {
    // NONMATCHING
}

/* 80CAC580-80CAC580 000074 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */