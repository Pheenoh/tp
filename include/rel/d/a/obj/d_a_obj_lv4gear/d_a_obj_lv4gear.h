#ifndef D_A_OBJ_LV4GEAR_H
#define D_A_OBJ_LV4GEAR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjLv4Gear_c : public fopAc_ac_c {
    /* 80C67FB4 */ void initBaseMtx();
    /* 80C67FF0 */ void setBaseMtx();
    /* 80C68050 */ void Create();
    /* 80C680A4 */ void CreateHeap();
    /* 80C68124 */ void create();
    /* 80C681F4 */ void execute();
    /* 80C683E0 */ void draw();
    /* 80C68444 */ void _delete();
};

#endif /* D_A_OBJ_LV4GEAR_H */
