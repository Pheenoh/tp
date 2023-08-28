#ifndef D_A_OBJ_WCHAIN_H
#define D_A_OBJ_WCHAIN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjWchain_shape_c {
    /* 80D31418 */ void draw();
    /* 80D318C0 */ ~daObjWchain_shape_c();
};

class daObjWchain_c : public fopAc_ac_c {
    /* 80D2FEF8 */ void createHeap();
    /* 80D2FFBC */ void create();
    /* 80D30434 */ ~daObjWchain_c();
    /* 80D30534 */ void setMatrix();
    /* 80D305E4 */ void getChainAngleZ(cXyz*, int);
    /* 80D3080C */ void setChainPos();
    /* 80D310AC */ void execute();
    /* 80D31810 */ void draw();
};

#endif /* D_A_OBJ_WCHAIN_H */
