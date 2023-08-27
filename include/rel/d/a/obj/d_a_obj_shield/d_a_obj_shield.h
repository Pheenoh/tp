#ifndef D_A_OBJ_SHIELD_H
#define D_A_OBJ_SHIELD_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopAc_ac_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);
};

class daItemShield_c : public fopAc_ac_c {
    /* 80CD6D9C */ void initBaseMtx();
    /* 80CD6DD8 */ void setBaseMtx();
    /* 80CD7094 */ void Create();
    /* 80CD724C */ bool __CreateHeap();
    /* 80CD7254 */ void create();
    /* 80CD75EC */ void bg_check();
    /* 80CD7734 */ void action_proc_call();
    /* 80CD77F0 */ void actionInit();
    /* 80CD7828 */ void actionWaitInit();
    /* 80CD7890 */ void actionWait();
    /* 80CD7C68 */ void initActionOrderGetDemo();
    /* 80CD7D04 */ void actionOrderGetDemo();
    /* 80CD7D80 */ void actionGetDemo();
    /* 80CD7E00 */ void event_proc_call();
    /* 80CD7EBC */ void actionWaitCamDemo();
    /* 80CD7F20 */ void actionOrderCamDemo();
    /* 80CD7F88 */ void actionCamDemo();
    /* 80CD7FE4 */ void actionCamDemoEnd();
    /* 80CD7FE8 */ void execute();
    /* 80CD80EC */ void draw();
    /* 80CD8140 */ void _delete();
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

#endif /* D_A_OBJ_SHIELD_H */
