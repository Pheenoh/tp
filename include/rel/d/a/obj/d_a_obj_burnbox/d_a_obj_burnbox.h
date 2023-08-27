#ifndef D_A_OBJ_BURNBOX_H
#define D_A_OBJ_BURNBOX_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjBurnBox_c : public fopAc_ac_c {
    /* 8046E698 */ void initBaseMtx();
    /* 8046E6D4 */ void setBaseMtx();
    /* 8046E738 */ void Create();
    /* 8046E8BC */ void CreateHeap();
    /* 8046E93C */ void create1st();
    /* 8046E9EC */ void Execute(f32 (**)[3][4]);
    /* 8046EABC */ void Draw();
    /* 8046EC10 */ void Delete();
};

#endif /* D_A_OBJ_BURNBOX_H */
