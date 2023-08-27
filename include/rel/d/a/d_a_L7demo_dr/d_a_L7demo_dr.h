#ifndef D_A_L7DEMO_DR_H
#define D_A_L7DEMO_DR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daDr_c : public fopAc_ac_c {
    /* 805A9238 */ void setAction(void (daDr_c::*)());
    /* 805A92DC */ void action();
    /* 805A9304 */ void mtx_set();
    /* 805A93D4 */ void draw();
    /* 805A9478 */ void wait();
    /* 805A963C */ void pl_walk();
    /* 805A9914 */ void pl_turn();
    /* 805A9A34 */ void bridge_destroy();
    /* 805A9D10 */ void bridge_destroy2();
    /* 805A9EE4 */ void execute();
    /* 805A9FFC */ void _delete();
    /* 805AA084 */ void CreateHeap();
    /* 805AA19C */ void check_start();
    /* 805AA224 */ void create();
};

#endif /* D_A_L7DEMO_DR_H */
