#ifndef D_A_OBJ_TAFENCE_H
#define D_A_OBJ_TAFENCE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTaFence_c : public fopAc_ac_c {
    /* 80D04F8C */ void setBaseMtx();
    /* 80D0503C */ void CreateHeap();
    /* 80D050A8 */ void create();
    /* 80D05550 */ void Execute(f32 (**)[3][4]);
    /* 80D055A0 */ void fenceProc();
    /* 80D057C4 */ void init_modeWait();
    /* 80D057D0 */ void modeWait();
    /* 80D05A54 */ void init_modeMoveInit();
    /* 80D05B5C */ void modeMoveInit();
    /* 80D05B94 */ void init_modeMove();
    /* 80D05CAC */ void modeMove();
    /* 80D05D2C */ void init_modeMoveEnd();
    /* 80D05E54 */ void modeMoveEnd();
    /* 80D05E58 */ void Draw();
    /* 80D05EFC */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daTaFence_HIO_c {
    /* 80D04E6C */ daTaFence_HIO_c();
    /* 80D06000 */ ~daTaFence_HIO_c();
};

#endif /* D_A_OBJ_TAFENCE_H */