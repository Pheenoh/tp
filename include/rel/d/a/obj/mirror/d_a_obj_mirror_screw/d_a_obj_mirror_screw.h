#ifndef D_A_OBJ_MIRROR_SCREW_H
#define D_A_OBJ_MIRROR_SCREW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjMirrorScrew_c : public fopAc_ac_c {
    /* 80C98AD8 */ void initWait();
    /* 80C98AE4 */ void executeWait();
    /* 80C98C00 */ void initDown();
    /* 80C98F04 */ void executeDown();
    /* 80C992F4 */ void CreateHeap();
    /* 80C99364 */ void Create();
    /* 80C99490 */ void Execute(f32 (**)[3][4]);
    /* 80C99608 */ void Draw();
    /* 80C996AC */ void Delete();

    static u8 const M_attr[24];
    static u8 ActionTable[48];
};

#endif /* D_A_OBJ_MIRROR_SCREW_H */
