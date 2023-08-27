#ifndef D_A_B_ZANT_MOBILE_H
#define D_A_B_ZANT_MOBILE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daB_ZANTZ_c : public fopEn_enemy_c {
    /* 806507B0 */ void draw();
    /* 80650854 */ void setSnortEffect(int);
    /* 806508E0 */ void calcSnortEffect();
    /* 80650B7C */ void setMouthMode(u8);
    /* 80650D0C */ void setAppearMode(u8);
    /* 806510C0 */ void getGroundPos();
    /* 8065127C */ void action();
    /* 80651B1C */ void cc_set();
    /* 80651C20 */ void execute();
    /* 80651D1C */ void _delete();
    /* 80651DC4 */ void CreateHeap();
    /* 80652038 */ void create();
};

class daB_ZANTZ_HIO_c {
    /* 8065078C */ daB_ZANTZ_HIO_c();
    /* 8065268C */ ~daB_ZANTZ_HIO_c();
};

#endif /* D_A_B_ZANT_MOBILE_H */
