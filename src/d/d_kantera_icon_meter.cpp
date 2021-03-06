//
// Generated By: dol2asm
// Translation Unit: d/d_kantera_icon_meter
//

#include "d/d_kantera_icon_meter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dKantera_icon_c {
    /* 801AE938 */ dKantera_icon_c();
    /* 801AE974 */ ~dKantera_icon_c();
    /* 801AEA68 */ void initiate();
    /* 801AEB7C */ void setAlphaRate(f32);
    /* 801AEBA0 */ void setPos(f32, f32);
    /* 801AEBF4 */ void setScale(f32, f32);
    /* 801AEC44 */ void setNowGauge(u16, u16);
};

struct dDlst_KanteraIcon_c {
    /* 801AECB8 */ void draw();
    /* 801AED1C */ ~dDlst_KanteraIcon_c();
};

struct JKRExpHeap {};

struct JKRArchive {};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
};

//
// Forward References:
//

extern "C" void __ct__15dKantera_icon_cFv();
extern "C" void __dt__15dKantera_icon_cFv();
extern "C" void initiate__15dKantera_icon_cFv();
extern "C" void setAlphaRate__15dKantera_icon_cFf();
extern "C" void setPos__15dKantera_icon_cFff();
extern "C" void setScale__15dKantera_icon_cFff();
extern "C" void setNowGauge__15dKantera_icon_cFUsUs();
extern "C" void draw__19dDlst_KanteraIcon_cFv();
extern "C" void __dt__19dDlst_KanteraIcon_cFv();
extern "C" extern char const* const d_d_kantera_icon_meter__stringBase0;

//
// External References:
//

extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BC218-803BC228 019338 0010+00 2/2 0/0 0/0 .data            __vt__19dDlst_KanteraIcon_c */
SECTION_DATA extern void* __vt__19dDlst_KanteraIcon_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__19dDlst_KanteraIcon_cFv,
    (void*)__dt__19dDlst_KanteraIcon_cFv,
};

/* 803BC228-803BC238 019348 000C+04 2/2 0/0 0/0 .data            __vt__15dKantera_icon_c */
SECTION_DATA extern void* __vt__15dKantera_icon_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15dKantera_icon_cFv,
    /* padding */
    NULL,
};

/* 801AE938-801AE974 1A9278 003C+00 0/0 3/3 0/0 .text            __ct__15dKantera_icon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dKantera_icon_c::dKantera_icon_c() {
    nofralloc
#include "asm/d/d_kantera_icon_meter/__ct__15dKantera_icon_cFv.s"
}
#pragma pop

/* 801AE974-801AEA68 1A92B4 00F4+00 1/0 0/0 0/0 .text            __dt__15dKantera_icon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dKantera_icon_c::~dKantera_icon_c() {
    nofralloc
#include "asm/d/d_kantera_icon_meter/__dt__15dKantera_icon_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394F50-80394F50 0215B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80394F50 = "zelda_kantera_icon_mater.blo";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80394F6D = "\0\0";
#pragma pop

/* 801AEA68-801AEB7C 1A93A8 0114+00 1/1 0/0 0/0 .text            initiate__15dKantera_icon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dKantera_icon_c::initiate() {
    nofralloc
#include "asm/d/d_kantera_icon_meter/initiate__15dKantera_icon_cFv.s"
}
#pragma pop

/* 801AEB7C-801AEBA0 1A94BC 0024+00 0/0 4/4 0/0 .text            setAlphaRate__15dKantera_icon_cFf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dKantera_icon_c::setAlphaRate(f32 param_0) {
    nofralloc
#include "asm/d/d_kantera_icon_meter/setAlphaRate__15dKantera_icon_cFf.s"
}
#pragma pop

/* 801AEBA0-801AEBF4 1A94E0 0054+00 0/0 3/3 0/0 .text            setPos__15dKantera_icon_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dKantera_icon_c::setPos(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_kantera_icon_meter/setPos__15dKantera_icon_cFff.s"
}
#pragma pop

/* 801AEBF4-801AEC44 1A9534 0050+00 0/0 4/4 0/0 .text            setScale__15dKantera_icon_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dKantera_icon_c::setScale(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_kantera_icon_meter/setScale__15dKantera_icon_cFff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453EF8-80453F00 0024F8 0004+04 1/1 0/0 0/0 .sdata2          @3759 */
SECTION_SDATA2 static f32 lit_3759[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80453F00-80453F08 002500 0008+00 1/1 0/0 0/0 .sdata2          @3761 */
SECTION_SDATA2 static f64 lit_3761 = 4503599627370496.0 /* cast u32 to float */;

/* 801AEC44-801AECB8 1A9584 0074+00 0/0 4/4 0/0 .text            setNowGauge__15dKantera_icon_cFUsUs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dKantera_icon_c::setNowGauge(u16 param_0, u16 param_1) {
    nofralloc
#include "asm/d/d_kantera_icon_meter/setNowGauge__15dKantera_icon_cFUsUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453F08-80453F10 002508 0004+04 1/1 0/0 0/0 .sdata2          @3776 */
SECTION_SDATA2 static f32 lit_3776[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 801AECB8-801AED1C 1A95F8 0064+00 1/0 0/0 0/0 .text            draw__19dDlst_KanteraIcon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_KanteraIcon_c::draw() {
    nofralloc
#include "asm/d/d_kantera_icon_meter/draw__19dDlst_KanteraIcon_cFv.s"
}
#pragma pop

/* 801AED1C-801AED64 1A965C 0048+00 1/0 0/0 0/0 .text            __dt__19dDlst_KanteraIcon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_KanteraIcon_c::~dDlst_KanteraIcon_c() {
    nofralloc
#include "asm/d/d_kantera_icon_meter/__dt__19dDlst_KanteraIcon_cFv.s"
}
#pragma pop

/* 80394F50-80394F50 0215B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
