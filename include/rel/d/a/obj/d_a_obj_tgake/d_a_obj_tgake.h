#ifndef D_A_OBJ_TGAKE_H
#define D_A_OBJ_TGAKE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjGake_c : public fopAc_ac_c {
    /* 80D0BC18 */ void initBaseMtx();
    /* 80D0BC54 */ void setBaseMtx();
    /* 80D0BCB8 */ void Create();
    /* 80D0BD30 */ void CreateHeap();
    /* 80D0BDA0 */ void create1st();
    /* 80D0BE24 */ void Execute(f32 (**)[3][4]);
    /* 80D0BF7C */ void Draw();
    /* 80D0C034 */ void Delete();
};

#endif /* D_A_OBJ_TGAKE_H */
