#ifndef D_A_OBJ_TWGATE_H
#define D_A_OBJ_TWGATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTwGate_c : public fopAc_ac_c {
    /* 80D1FB84 */ void setBaseMtx();
    /* 80D1FC0C */ void CreateHeap();
    /* 80D1FD44 */ void create();
    /* 80D1FFA4 */ void Execute(f32 (**)[3][4]);
    /* 80D200B4 */ void Draw();
    /* 80D20180 */ void Delete();
};

class daTwGate_HIO_c {
    /* 80D1FAAC */ daTwGate_HIO_c();
    /* 80D2024C */ ~daTwGate_HIO_c();
};

#endif /* D_A_OBJ_TWGATE_H */