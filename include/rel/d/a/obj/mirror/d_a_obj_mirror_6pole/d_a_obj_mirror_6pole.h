#ifndef D_A_OBJ_MIRROR_6POLE_H
#define D_A_OBJ_MIRROR_6POLE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjMirror6Pole_c : public fopAc_ac_c {
    /* 80C95E18 */ void initWait();
    /* 80C95E2C */ void executeWait();
    /* 80C95E88 */ void initDemo();
    /* 80C95E8C */ void executeDemo();
    /* 80C95EFC */ void setBaseMtx();
    /* 80C95F50 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C95F70 */ void CreateHeap();

    static u8 ActionTable[48];
};

#endif /* D_A_OBJ_MIRROR_6POLE_H */
