//
// Generated By: dol2asm
// Translation Unit: d/d_kantera_icon_meter
//

#include "d/d_kantera_icon_meter.h"
#include "JSystem/J2DGraph/J2DGrafContext.h"
#include "JSystem/J2DGraph/J2DScreen.h"
#include "d/com/d_com_inf_game.h"
#include "d/meter/d_meter_HIO.h"
#include "d/pane/d_pane_class.h"
#include "dolphin/types.h"

/* 801AE938-801AE974 1A9278 003C+00 0/0 3/3 0/0 .text            __ct__15dKantera_icon_cFv */
dKantera_icon_c::dKantera_icon_c() {
    initiate();
}

/* 801AE974-801AEA68 1A92B4 00F4+00 1/0 0/0 0/0 .text            __dt__15dKantera_icon_cFv */
dKantera_icon_c::~dKantera_icon_c() {
    delete mpKanteraIcon->getScreen();
    delete mpKanteraIcon;
    mpKanteraIcon = NULL;

    delete mpParent;
    mpParent = NULL;

    delete mpGauge;
    mpGauge = NULL;
}

/* 801AEA68-801AEB7C 1A93A8 0114+00 1/1 0/0 0/0 .text            initiate__15dKantera_icon_cFv */
void dKantera_icon_c::initiate() {
    mpKanteraIcon = new dDlst_KanteraIcon_c();

    J2DScreen* scrn = new J2DScreen();
    scrn->setPriority("zelda_kantera_icon_mater.blo", 0x20000, dComIfGp_getMain2DArchive());
    dPaneClass_showNullPane(scrn);
    mpKanteraIcon->setScreen(scrn);

    mpParent = new CPaneMgr(scrn, 'kan_m_n', 2, NULL);

    mpGauge = new CPaneMgr(scrn, 'yellow_m', 0, NULL);
}

/* 801AEB7C-801AEBA0 1A94BC 0024+00 0/0 4/4 0/0 .text            setAlphaRate__15dKantera_icon_cFf
 */
void dKantera_icon_c::setAlphaRate(f32 alphaRate) {
    mpParent->setAlphaRate(alphaRate);
}

/* 801AEBA0-801AEBF4 1A94E0 0054+00 0/0 3/3 0/0 .text            setPos__15dKantera_icon_cFff */
void dKantera_icon_c::setPos(f32 x, f32 y) {
    mpParent->translate(x + g_drawHIO.mLanternIconMeterPosX, y + g_drawHIO.mLanternIconMeterPosY);
}

/* 801AEBF4-801AEC44 1A9534 0050+00 0/0 4/4 0/0 .text            setScale__15dKantera_icon_cFff */
void dKantera_icon_c::setScale(f32 h, f32 v) {
    mpParent->scale(h * g_drawHIO.mLanternIconMeterSize, v * g_drawHIO.mLanternIconMeterSize);
}

/* 801AEC44-801AECB8 1A9584 0074+00 0/0 4/4 0/0 .text            setNowGauge__15dKantera_icon_cFUsUs
 */
void dKantera_icon_c::setNowGauge(u16 h, u16 v) {
    mpGauge->scale((f32)v / (f32)h, 1.0f);
}

/* 801AECB8-801AED1C 1A95F8 0064+00 1/0 0/0 0/0 .text            draw__19dDlst_KanteraIcon_cFv */
void dDlst_KanteraIcon_c::draw() {
    J2DGrafContext* curGraf = dComIfGp_getCurrentGrafPort();
    curGraf->setup2D();
    mp_scrn->draw(0.0f, 0.0f, curGraf);
}

/* 801AED1C-801AED64 1A965C 0048+00 1/0 0/0 0/0 .text            __dt__19dDlst_KanteraIcon_cFv */
dDlst_KanteraIcon_c::~dDlst_KanteraIcon_c() {}

/* 80394F50-80394F50 0215B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */