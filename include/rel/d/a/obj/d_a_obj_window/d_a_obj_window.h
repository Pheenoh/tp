#ifndef D_A_OBJ_WINDOW_H
#define D_A_OBJ_WINDOW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjWindow_c : public fopAc_ac_c {
    /* 80D38758 */ void initBaseMtx();
    /* 80D387B8 */ void setBaseMtx();
    /* 80D38840 */ void Create();
    /* 80D388F0 */ void CreateHeap();
    /* 80D38A68 */ void create1st();
    /* 80D38B04 */ void Execute(f32 (**)[3][4]);
    /* 80D38F28 */ void Draw();
    /* 80D39000 */ void Delete();
};

#endif /* D_A_OBJ_WINDOW_H */
