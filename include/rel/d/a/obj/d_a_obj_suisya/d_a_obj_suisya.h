#ifndef D_A_OBJ_SUISYA_H
#define D_A_OBJ_SUISYA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Suisya_c : public fopAc_ac_c {
    /* 80CF0078 */ void draw();
    /* 80CF0168 */ void execute();
    /* 80CF0234 */ void _delete();
    /* 80CF0284 */ void CreateHeap();
    /* 80CF0310 */ void create();
};

#endif /* D_A_OBJ_SUISYA_H */
