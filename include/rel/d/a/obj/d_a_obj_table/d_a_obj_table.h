#ifndef D_A_OBJ_TABLE_H
#define D_A_OBJ_TABLE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjTable_c : public fopAc_ac_c {
    /* 80D06560 */ void CreateHeap();
    /* 80D065D0 */ void Create();
    /* 80D0695C */ void Execute(f32 (**)[3][4]);
    /* 80D06AD8 */ void Draw();
    /* 80D06BC8 */ void Delete();
};

#endif /* D_A_OBJ_TABLE_H */
