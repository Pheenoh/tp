#ifndef D_A_OBJ_THASHI_H
#define D_A_OBJ_THASHI_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjTHASHI_c : public fopAc_ac_c {
    /* 80D0C238 */ void initCcCylinder();
    /* 80D0C354 */ void setBaseMtx();
    /* 80D0C654 */ void CreateHeap();
    /* 80D0C8B4 */ void create();
    /* 80D0CE70 */ void Create();
    /* 80D0CEB4 */ void Execute(f32 (**)[3][4]);
    /* 80D0CEE0 */ void Draw();
    /* 80D0D140 */ void Delete();
};

#endif /* D_A_OBJ_THASHI_H */
