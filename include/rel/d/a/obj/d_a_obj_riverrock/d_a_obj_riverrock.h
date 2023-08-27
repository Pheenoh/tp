#ifndef D_A_OBJ_RIVERROCK_H
#define D_A_OBJ_RIVERROCK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjRIVERROCK_c : public fopAc_ac_c {
    /* 80CBC6F4 */ void initCcCylinder();
    /* 80CBC754 */ void SetCcCyl();
    /* 80CBC7F8 */ void BreakWaitAction();
    /* 80CBC8BC */ void CheckBG();
    /* 80CBCC3C */ void BreakMoveAction();
    /* 80CBCCC0 */ void BrokenAction();
    /* 80CBCD94 */ void BreakAction();
    /* 80CBCDE8 */ void Action();
    /* 80CBCE2C */ void BreakSet();
    /* 80CBD1C4 */ void WaitAction();
    /* 80CBD204 */ void setBaseMtx();
    /* 80CBD348 */ void CreateHeap();
    /* 80CBD3C0 */ void create();
    /* 80CBD7B4 */ void Create();
    /* 80CBD814 */ void Execute(f32 (**)[3][4]);
    /* 80CBD8E0 */ void Draw();
    /* 80CBD964 */ void Delete();
};

class daObjRIVERROCK_HIO_c {
    /* 80CBC6CC */ daObjRIVERROCK_HIO_c();
    /* 80CBD9C4 */ ~daObjRIVERROCK_HIO_c();
};

#endif /* D_A_OBJ_RIVERROCK_H */
