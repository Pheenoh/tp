#ifndef D_A_OBJ_FCHAIN_H
#define D_A_OBJ_FCHAIN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjFchain_shape_c {
    /* 80BE7194 */ void draw();
    /* 80BE73D4 */ ~daObjFchain_shape_c();
};

class daObjFchain_c : public fopAc_ac_c {
    /* 80BE5FF8 */ void createHeap();
    /* 80BE6074 */ void create();
    /* 80BE63C8 */ ~daObjFchain_c();
    /* 80BE64E0 */ void checkPlayerFoot(cXyz const*, cXyz const*, cXyz*);
    /* 80BE66B4 */ void setGroundVec(cXyz*, f32);
    /* 80BE6868 */ void execute();
    /* 80BE7324 */ void draw();
};

#endif /* D_A_OBJ_FCHAIN_H */