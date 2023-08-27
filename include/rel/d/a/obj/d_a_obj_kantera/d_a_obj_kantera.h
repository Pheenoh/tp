#ifndef D_A_OBJ_KANTERA_H
#define D_A_OBJ_KANTERA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daItemKantera_c : public fopAc_ac_c {
    /* 80C389BC */ void initBaseMtx();
    /* 80C389F8 */ void setBaseMtx();
    /* 80C38A64 */ void Create();
    /* 80C38BA8 */ bool __CreateHeap();
    /* 80C38BB0 */ void create();
    /* 80C38F78 */ void bg_check();
    /* 80C39068 */ void actionInit();
    /* 80C390A0 */ void actionWaitInit();
    /* 80C3911C */ void actionWait();
    /* 80C39234 */ void initActionOrderGetDemo();
    /* 80C392D0 */ void actionOrderGetDemo();
    /* 80C3934C */ void actionGetDemo();
    /* 80C393B0 */ void execute();
    /* 80C394DC */ void draw();
    /* 80C39530 */ void _delete();
};

class daItemBase_c : public fopAc_ac_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144C7C */ void setListStart();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 80145144 */ void chkFlag(int);
    /* 80145164 */ void getTevFrm();
    /* 80145180 */ void getBtpFrm();
    /* 8014519C */ void getShadowSize();
    /* 801451B4 */ void getCollisionH();
    /* 801451D0 */ void getCollisionR();
};

#endif /* D_A_OBJ_KANTERA_H */
