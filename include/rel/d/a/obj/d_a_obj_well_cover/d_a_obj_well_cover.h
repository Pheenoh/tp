#ifndef D_A_OBJ_WELL_COVER_H
#define D_A_OBJ_WELL_COVER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjWCover_c : public fopAc_ac_c {
    /* 80D36298 */ void initBaseMtx();
    /* 80D362D4 */ void setBaseMtx();
    /* 80D36348 */ void Create();
    /* 80D36394 */ void CreateHeap();
    /* 80D36404 */ void create();
    /* 80D364E0 */ void Execute(f32 (**)[3][4]);
    /* 80D3652C */ void action();
    /* 80D365B8 */ void modeWait();
    /* 80D36790 */ void init_modeBreak();
    /* 80D3689C */ void modeBreak();
    /* 80D368A0 */ void Draw();
    /* 80D36944 */ void Delete();
};

#endif /* D_A_OBJ_WELL_COVER_H */
