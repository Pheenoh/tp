#ifndef D_A_DEMO_ITEM_H
#define D_A_DEMO_ITEM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daItemBase_c : public fopAc_ac_c {
    /* 80037A64 */ void hide();
    /* 80037ACC */ void chkDraw();
    /* 80037AF4 */ void chkDead();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 8014503C */ void animPlay(f32, f32, f32, f32, f32, f32);
    /* 80145144 */ void chkFlag(int);
    /* 80145164 */ void getTevFrm();
    /* 80145180 */ void getBtpFrm();
    /* 8014519C */ void getShadowSize();
    /* 801451B4 */ void getCollisionH();
    /* 801451D0 */ void getCollisionR();
};

class daDitem_c : public fopAc_ac_c {
    /* 804DFBCC */ bool __CreateHeap();
    /* 804DFBD4 */ void CreateInit();
    /* 804DFC98 */ void action();
    /* 804DFD10 */ void actionStart();
    /* 804E00DC */ void actionEvent();
    /* 804E0A50 */ void actionWaitLightEnd();
    /* 804E0B40 */ void actionEnd();
    /* 804E0B60 */ void setInsectEffect();
    /* 804E0C44 */ void followInsectEffect();
    /* 804E0CB0 */ void endInsectEffect();
    /* 804E0D44 */ void onEventReg(int, int);
    /* 804E0DB4 */ void set_pos();
    /* 804E105C */ void anim_control();
    /* 804E1098 */ void initEffectLight();
    /* 804E10D0 */ void settingEffectLight();
    /* 804E111C */ void set_mtx();
    /* 804E11D4 */ void setTevStr();
    /* 804E122C */ void setListStart();
    /* 804E1230 */ void draw_WOOD_STICK();
};

#endif /* D_A_DEMO_ITEM_H */
