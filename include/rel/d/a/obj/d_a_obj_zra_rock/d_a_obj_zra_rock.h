#ifndef D_A_OBJ_ZRA_ROCK_H
#define D_A_OBJ_ZRA_ROCK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjZraRock_c : public fopAc_ac_c {
    /* 80D44CB8 */ void setAttnPos();
    /* 80D44D3C */ void setBaseMtx();
    /* 80D44DCC */ void setEnvTevColor();
    /* 80D44E28 */ void setRoomNo();
    /* 80D44E68 */ void Create();
    /* 80D44FB0 */ void CreateHeap();
    /* 80D450E0 */ void create();
    /* 80D4531C */ void Execute(f32 (**)[3][4]);
    /* 80D45374 */ void Draw();
    /* 80D454AC */ void Delete();
};

#endif /* D_A_OBJ_ZRA_ROCK_H */
