#ifndef D_A_OBJ_LV4PRELVTR_H
#define D_A_OBJ_LV4PRELVTR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjPRElvtr_c : public fopAc_ac_c {
    /* 80C685F8 */ void create1st();
    /* 80C68688 */ void setMtx();
    /* 80C686F8 */ void CreateHeap();
    /* 80C68768 */ void Create();
    /* 80C68844 */ void Execute(f32 (**)[3][4]);
    /* 80C68944 */ void Draw();
    /* 80C689E8 */ void Delete();
    /* 80C68AF0 */ ~daObjPRElvtr_c();
};

#endif /* D_A_OBJ_LV4PRELVTR_H */