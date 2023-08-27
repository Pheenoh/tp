#ifndef D_A_OBJ_ICELEAF_H
#define D_A_OBJ_ICELEAF_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjIceLeaf_c : public fopAc_ac_c {
    /* 80C24738 */ void initBaseMtx();
    /* 80C24774 */ void setBaseMtx();
    /* 80C249E4 */ void Create();
    /* 80C24BC4 */ void setAnmPos();
    /* 80C24C9C */ void CreateHeap();
    /* 80C24E14 */ void create();
    /* 80C25158 */ void execute();
    /* 80C25360 */ void action();
    /* 80C2541C */ void modeDropWait();
    /* 80C25614 */ void modeDrop();
    /* 80C258F8 */ void modePlayerWait();
    /* 80C25904 */ void modeRide();
    /* 80C25908 */ void event_proc_call();
    /* 80C259C4 */ void actionWait();
    /* 80C259C8 */ void actionOrderEvent();
    /* 80C25A68 */ void actionEvent();
    /* 80C25AC4 */ void actionDead();
    /* 80C25AC8 */ void setFallSE();
    /* 80C25BB8 */ void draw();
    /* 80C25C50 */ void _delete();
};

#endif /* D_A_OBJ_ICELEAF_H */
