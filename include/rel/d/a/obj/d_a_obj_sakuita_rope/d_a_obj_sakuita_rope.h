#ifndef D_A_OBJ_SAKUITA_ROPE_H
#define D_A_OBJ_SAKUITA_ROPE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjItaRope_c : public fopAc_ac_c {
    /* 80CC57E4 */ void create_init();
    /* 80CC5E48 */ void initBaseMtx();
    /* 80CC5E7C */ void setBaseMtx();
    /* 80CC5ECC */ void setNormalRopePos();

    static u8 const M_attr[20];
};

#endif /* D_A_OBJ_SAKUITA_ROPE_H */
