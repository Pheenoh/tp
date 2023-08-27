#ifndef D_A_OBJ_SMALLKEY_H
#define D_A_OBJ_SMALLKEY_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daKey_c : public fopAc_ac_c {
    /* 80CD9F2C */ void initBaseMtx();
    /* 80CD9F68 */ void setBaseMtx();
    /* 80CD9FDC */ void Create();
    /* 80CDA15C */ bool __CreateHeap();
    /* 80CDA164 */ void create();
    /* 80CDA680 */ void bg_check();
    /* 80CDA7E8 */ void actionInitInit();
    /* 80CDA81C */ void actionInit();
    /* 80CDA8C8 */ void actionParentWaitInit();
    /* 80CDA8FC */ void actionParentWait();
    /* 80CDA9AC */ void actionWaitInit();
    /* 80CDAA28 */ void actionWait();
    /* 80CDAB74 */ void initActionOrderGetDemo();
    /* 80CDAC18 */ void actionOrderGetDemo();
    /* 80CDAC94 */ void actionGetDemo();
    /* 80CDAD28 */ void actionInitSwOnWait();
    /* 80CDADD4 */ void actionSwOnWait();
    /* 80CDAE54 */ void actionInitBoomerangCarry();
    /* 80CDAF40 */ void actionBoomerangCarry();
    /* 80CDAFB4 */ void effectSet();
    /* 80CDB0D8 */ void effectStop();
    /* 80CDB128 */ void effectCtrl();
    /* 80CDB2E0 */ void seStartTwinkle_private(u32);
    /* 80CDB36C */ void actionInitE_GB();
    /* 80CDB3D8 */ void actionE_GB();
    /* 80CDB404 */ void execute();
    /* 80CDB5D4 */ void draw();
    /* 80CDB628 */ void _delete();
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

#endif /* D_A_OBJ_SMALLKEY_H */
