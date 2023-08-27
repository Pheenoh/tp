#ifndef D_A_OBJ_INOBONE_H
#define D_A_OBJ_INOBONE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjIBone_c : public fopAc_ac_c {
    /* 80C27830 */ void initBaseMtx();
    /* 80C2786C */ void setBaseMtx();
    /* 80C278CC */ void Create();
    /* 80C279A8 */ void CreateHeap();
    /* 80C27A20 */ void create();
    /* 80C27C4C */ void execute();
    /* 80C27E48 */ void setBreakEffect();
    /* 80C27FEC */ void draw();
    /* 80C28050 */ void _delete();
};

#endif /* D_A_OBJ_INOBONE_H */
