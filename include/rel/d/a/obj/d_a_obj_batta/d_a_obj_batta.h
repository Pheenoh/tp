#ifndef D_A_OBJ_BATTA_H
#define D_A_OBJ_BATTA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_BattaHIO_c {
    /* 80BA9E2C */ daObj_BattaHIO_c();
    /* 80BAC874 */ ~daObj_BattaHIO_c();
};

class daObjBATTA_c : public fopAc_ac_c {
    /* 80BA9E5C */ void setAction(void (daObjBATTA_c::*)());
    /* 80BAA1C8 */ void wait();
    /* 80BAA47C */ void turn();
    /* 80BAAA18 */ void jump();
    /* 80BAAD30 */ void fly_up();
    /* 80BAB234 */ void fly_down();
    /* 80BAB500 */ void bin_wait();
    /* 80BAB6C8 */ void bin_action();
    /* 80BAB820 */ void hook();
    /* 80BAB934 */ void boomerang();
    /* 80BABA98 */ void batta_setParticle();
    /* 80BABCA4 */ void action();
    /* 80BABD6C */ void hit_check();
    /* 80BABE20 */ void execute();
    /* 80BABFA4 */ void _delete();
    /* 80BAC00C */ void mtx_set();
    /* 80BAC194 */ void create();
};

#endif /* D_A_OBJ_BATTA_H */