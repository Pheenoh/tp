#ifndef D_A_OBJ_BKDOOR_H
#define D_A_OBJ_BKDOOR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjBkDoor_c : public fopAc_ac_c {
    /* 80578D4C */ void initBaseMtx();
    /* 80578D88 */ void setBaseMtx();
    /* 80578E14 */ void Create();
    /* 80578EA0 */ void CreateHeap();
    /* 80578F20 */ void create1st();
    /* 80578FC0 */ void openCheck();
    /* 8057902C */ void Execute(f32 (**)[3][4]);
    /* 805792E4 */ void Draw();
    /* 80579388 */ void Delete();
};

#endif /* D_A_OBJ_BKDOOR_H */
