#ifndef D_A_OBJ_GANONWALL_H
#define D_A_OBJ_GANONWALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjGWall_c : public fopAc_ac_c {
    /* 80BF4D18 */ void initBaseMtx();
    /* 80BF4D54 */ void setBaseMtx();
    /* 80BF4DA8 */ void Create();
    /* 80BF4E8C */ void CreateHeap();
    /* 80BF4FF0 */ void create();
    /* 80BF50A4 */ void execute();
    /* 80BF50CC */ void checkDraw();
    /* 80BF5168 */ void draw();
    /* 80BF5530 */ void _delete();
};

#endif /* D_A_OBJ_GANONWALL_H */
