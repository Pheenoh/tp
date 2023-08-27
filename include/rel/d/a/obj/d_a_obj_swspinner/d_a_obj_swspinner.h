#ifndef D_A_OBJ_SWSPINNER_H
#define D_A_OBJ_SWSPINNER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjSwSpinner_c : public fopAc_ac_c {
    /* 80D00174 */ void initBaseMtx();
    /* 80D001CC */ void setBaseMtx();
    /* 80D00284 */ void Create();
    /* 80D0035C */ void CreateHeap();
    /* 80D00498 */ void create1st();
    /* 80D00518 */ void Execute(f32 (**)[3][4]);
    /* 80D00890 */ void Draw();
    /* 80D00954 */ void Delete();
};

#endif /* D_A_OBJ_SWSPINNER_H */
