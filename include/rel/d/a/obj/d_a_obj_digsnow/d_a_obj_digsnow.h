#ifndef D_A_OBJ_DIGSNOW_H
#define D_A_OBJ_DIGSNOW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjDigSnow_c : public fopAc_ac_c {
    /* 80BDCC58 */ void initBaseMtx();
    /* 80BDCC94 */ void setBaseMtx();
    /* 80BDCD08 */ void Create();
    /* 80BDCD64 */ void CreateHeap();
    /* 80BDCDD4 */ void create1st();
    /* 80BDCE84 */ void Execute(f32 (**)[3][4]);
    /* 80BDCF00 */ void action();
    /* 80BDCFA4 */ void mode_init_wait();
    /* 80BDCFB0 */ void mode_wait();
    /* 80BDCFDC */ void mode_init_dig();
    /* 80BDD124 */ void mode_dig();
    /* 80BDD1BC */ void mode_init_end();
    /* 80BDD210 */ void mode_end();
    /* 80BDD214 */ void Draw();
    /* 80BDD2B8 */ void Delete();
};

#endif /* D_A_OBJ_DIGSNOW_H */
