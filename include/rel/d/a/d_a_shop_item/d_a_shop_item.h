#ifndef D_A_SHOP_ITEM_H
#define D_A_SHOP_ITEM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daShopItem_c : public fopAc_ac_c {
    /* 8059E9B8 */ void getShopArcname();
    /* 8059EC04 */ void getHeapSize();
    /* 8059EC1C */ void CreateInit();
    /* 8059ED58 */ void set_mtx();
    /* 8059EEF4 */ void _execute();
    /* 8059EF48 */ void _draw();
    /* 8059EF9C */ void setListStart();
    /* 8059EFA0 */ void setShadow();
    /* 8059F024 */ void chkFlag(int);
    /* 8059F044 */ void getTevFrm();
    /* 8059F064 */ void getBtpFrm();
    /* 8059F084 */ void getShadowSize();
    /* 8059F0A0 */ void getCollisionH();
    /* 8059F0BC */ void getCollisionR();

    static void* const mData[276];
    static f32 const m_cullfar_max;
};

class daItemBase_c : public fopAc_ac_c {
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144754 */ bool __CreateHeap();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 8014503C */ void animPlay(f32, f32, f32, f32, f32, f32);
};

#endif /* D_A_SHOP_ITEM_H */
