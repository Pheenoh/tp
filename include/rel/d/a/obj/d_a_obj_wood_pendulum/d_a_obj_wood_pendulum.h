#ifndef D_A_OBJ_WOOD_PENDULUM_H
#define D_A_OBJ_WOOD_PENDULUM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjWPndlm_c : public fopAc_ac_c {
    /* 80D39418 */ void initBaseMtx();
    /* 80D39454 */ void setBaseMtx();
    /* 80D394CC */ void Create();
    /* 80D395C8 */ void CreateHeap();
    /* 80D39638 */ void create();
    /* 80D39978 */ void execute();
    /* 80D39B68 */ void draw();
    /* 80D39BCC */ void _delete();
};

#endif /* D_A_OBJ_WOOD_PENDULUM_H */
