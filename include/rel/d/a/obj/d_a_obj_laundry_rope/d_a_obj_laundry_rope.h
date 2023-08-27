#ifndef D_A_OBJ_LAUNDRY_ROPE_H
#define D_A_OBJ_LAUNDRY_ROPE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjLndRope_c : public fopAc_ac_c {
    /* 80C521F8 */ void create_init();
    /* 80C5285C */ void initBaseMtx();
    /* 80C52890 */ void setBaseMtx();
    /* 80C528E0 */ void setNormalRopePos();

    static u8 const M_attr[20];
};

#endif /* D_A_OBJ_LAUNDRY_ROPE_H */
