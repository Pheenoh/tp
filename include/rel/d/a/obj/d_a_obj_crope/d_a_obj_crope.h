#ifndef D_A_OBJ_CROPE_H
#define D_A_OBJ_CROPE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjCrope_c : public fopAc_ac_c {
    /* 80BCCCD8 */ void createHeap();
    /* 80BCCD64 */ void create();
    /* 80BCD524 */ ~daObjCrope_c();
    /* 80BCD6C4 */ void setNormalRopePos();
    /* 80BCD9EC */ void setRideRopePos();
    /* 80BCE4FC */ void execute();
    /* 80BCE9BC */ void draw();
};

#endif /* D_A_OBJ_CROPE_H */
