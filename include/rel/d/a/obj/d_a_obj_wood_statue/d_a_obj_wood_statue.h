#ifndef D_A_OBJ_WOOD_STATUE_H
#define D_A_OBJ_WOOD_STATUE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjWStatue_c : public fopAc_ac_c {
    /* 80D3A268 */ void initBaseMtx();
    /* 80D3A2A4 */ void setBaseMtx();
    /* 80D3A2F0 */ void Create();
    /* 80D3A474 */ bool __CreateHeap();
    /* 80D3A47C */ void create();
    /* 80D3A8E8 */ void bg_check();
    /* 80D3AA3C */ void actionWaitInit();
    /* 80D3AA80 */ void actionWait();
    /* 80D3AB9C */ void initActionOrderGetDemo();
    /* 80D3AC64 */ void actionOrderGetDemo();
    /* 80D3ACAC */ void actionGetDemo();
    /* 80D3AD30 */ void actionInitSwOnWait();
    /* 80D3AD88 */ void actionSwOnWait();
    /* 80D3AE7C */ void actionInitBoomerangCarry();
    /* 80D3AF5C */ void actionBoomerangCarry();
    /* 80D3AFC0 */ void demoProc();
    /* 80D3B164 */ void effectSet();
    /* 80D3B250 */ void effectStop();
    /* 80D3B2A0 */ void execute();
    /* 80D3B428 */ void draw();
    /* 80D3B47C */ void setListStart();
    /* 80D3B480 */ void _delete();
};

class daItemBase_c : public fopAc_ac_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
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

#endif /* D_A_OBJ_WOOD_STATUE_H */
