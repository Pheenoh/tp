#ifndef D_A_OBJ_AVALANCHE_H
#define D_A_OBJ_AVALANCHE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjAvalanche_c : public fopAc_ac_c {
    /* 80BA6ED8 */ void initBaseMtx();
    /* 80BA6F14 */ void setBaseMtx();
    /* 80BA6FC8 */ void Create();
    /* 80BA7178 */ void CreateHeap();
    /* 80BA7370 */ void create1st();
    /* 80BA73F4 */ void Execute(f32 (**)[3][4]);
    /* 80BA7440 */ void checkCollapse();
    /* 80BA75A4 */ void move();
    /* 80BA7618 */ void event_proc_call();
    /* 80BA76D4 */ void actionWait();
    /* 80BA773C */ void actionOrderEvent();
    /* 80BA7804 */ void actionEvent();
    /* 80BA7888 */ void actionDead();
    /* 80BA788C */ void demoProc();
    /* 80BA7A50 */ void setEffect();
    /* 80BA7AE8 */ void Draw();
    /* 80BA7BA0 */ void Delete();
};

#endif /* D_A_OBJ_AVALANCHE_H */
