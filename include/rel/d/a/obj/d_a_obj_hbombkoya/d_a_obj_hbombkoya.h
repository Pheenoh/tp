#ifndef D_A_OBJ_HBOMBKOYA_H
#define D_A_OBJ_HBOMBKOYA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjHBombkoya_c : public fopAc_ac_c {
    struct PSetTbl {};

    /* 80C1B878 */ void create1st();
    /* 80C1B938 */ void CreateHeap();
    /* 80C1B9CC */ void Create();
    /* 80C1BB7C */ void setParticle(u16*, int, daObjHBombkoya_c::PSetTbl*, int, int);
    /* 80C1BCA0 */ void Execute(f32 (**)[3][4]);
    /* 80C1C098 */ void Draw();
    /* 80C1C16C */ void Delete();
    /* 80C1C474 */ ~daObjHBombkoya_c();
};

#endif /* D_A_OBJ_HBOMBKOYA_H */
