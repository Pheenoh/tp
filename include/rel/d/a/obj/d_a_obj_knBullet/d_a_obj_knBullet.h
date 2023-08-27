#ifndef D_A_OBJ_KNBULLET_H
#define D_A_OBJ_KNBULLET_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjKnBullet_c : public fopAc_ac_c {
    /* 80C47118 */ void Create();
    /* 80C47300 */ void Execute();
    /* 80C47480 */ bool Draw();
    /* 80C47488 */ bool Delete();
    /* 80C47490 */ void setBaseMtx();
    /* 80C474E8 */ void col_init();
    /* 80C47558 */ void col_chk();
    /* 80C477B4 */ void hitPrtclSet();
};

#endif /* D_A_OBJ_KNBULLET_H */
