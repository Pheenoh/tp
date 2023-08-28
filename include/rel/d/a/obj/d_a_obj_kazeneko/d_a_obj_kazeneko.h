#ifndef D_A_OBJ_KAZENEKO_H
#define D_A_OBJ_KAZENEKO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjKazeNeko_c : public fopAc_ac_c {
    /* 80C3C8D8 */ void create_init();
    /* 80C3C968 */ void initBaseMtx();
    /* 80C3C988 */ void setBaseMtx();
    /* 80C3CA8C */ void initCcCylinder();
    /* 80C3CB10 */ void setCcCylinder();
    /* 80C3CB7C */ void swingHead();
    /* 80C3CC40 */ void getFirstVec(cXyz*, int);

    static u8 const M_attr[44];
};

#endif /* D_A_OBJ_KAZENEKO_H */
