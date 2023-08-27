#ifndef D_A_OBJ_GRAWALL_H
#define D_A_OBJ_GRAWALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjGraWall_c : public fopAc_ac_c {
    /* 80C10BF8 */ void Create();
    /* 80C10DD8 */ void Execute();
    /* 80C10E78 */ bool Delete();
    /* 80C10E80 */ void col_init();
    /* 80C10ED4 */ void col_set();
};

#endif /* D_A_OBJ_GRAWALL_H */
