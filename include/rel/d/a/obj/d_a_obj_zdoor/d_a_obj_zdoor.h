#ifndef D_A_OBJ_ZDOOR_H
#define D_A_OBJ_ZDOOR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daZdoor_c : public fopAc_ac_c {
    /* 80D3F65C */ void init_cyl();
    /* 80D3F740 */ void set_cyl();
    /* 80D3F884 */ void setBaseMtx();
    /* 80D3F8F8 */ void Create();
    /* 80D3F970 */ void CreateHeap();
    /* 80D3F9F0 */ void create1st();
    /* 80D3FACC */ void Execute(f32 (**)[3][4]);
    /* 80D3FCE8 */ void Draw();
    /* 80D3FD8C */ void Delete();
};

#endif /* D_A_OBJ_ZDOOR_H */
