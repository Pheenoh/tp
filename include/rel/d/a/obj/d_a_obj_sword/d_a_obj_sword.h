#ifndef D_A_OBJ_SWORD_H
#define D_A_OBJ_SWORD_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjSword_c : public fopAc_ac_c {
    /* 80CFD558 */ void initBaseMtx();
    /* 80CFD594 */ void setBaseMtx();
    /* 80CFD600 */ void Create();
    /* 80CFD67C */ void create();
    /* 80CFDA14 */ void actionWait();
    /* 80CFDA8C */ void initActionOrderGetDemo();
    /* 80CFDB04 */ void actionOrderGetDemo();
    /* 80CFDB80 */ void actionGetDemo();
    /* 80CFDC1C */ void execute();
    /* 80CFDD18 */ void draw();
    /* 80CFDD6C */ void _delete();
};

class daItemBase_c : public fopAc_ac_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144754 */ bool __CreateHeap();
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

#endif /* D_A_OBJ_SWORD_H */
