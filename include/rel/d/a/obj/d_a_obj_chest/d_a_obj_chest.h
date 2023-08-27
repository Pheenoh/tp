#ifndef D_A_OBJ_CHEST_H
#define D_A_OBJ_CHEST_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjChest_c : public fopAc_ac_c {
    /* 80BC8EF8 */ void initBaseMtx();
    /* 80BC8F34 */ void setBaseMtx();
    /* 80BC9088 */ void Create();
    /* 80BC9240 */ void CreateHeap();
    /* 80BC92B0 */ void create();
    /* 80BC970C */ void Execute(f32 (**)[3][4]);
    /* 80BC9764 */ void action();
    /* 80BC9808 */ void actionWait();
    /* 80BC9BF0 */ void actionMove();
    /* 80BC9DFC */ void actionEnd();
    /* 80BC9E00 */ void Draw();
    /* 80BC9EA4 */ void Delete();
};

#endif /* D_A_OBJ_CHEST_H */
