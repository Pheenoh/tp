#ifndef D_A_OBJ_BBOX_H
#define D_A_OBJ_BBOX_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjBBox_c : public fopAc_ac_c {
    /* 80BACD38 */ void initBaseMtx();
    /* 80BACD74 */ void setBaseMtx();
    /* 80BACDD8 */ void Create();
    /* 80BACE50 */ void CreateHeap();
    /* 80BACEC0 */ void create1st();
    /* 80BAD0C0 */ void Execute(f32 (**)[3][4]);
    /* 80BAD234 */ void Draw();
    /* 80BAD2D8 */ void Delete();
};

#endif /* D_A_OBJ_BBOX_H */
