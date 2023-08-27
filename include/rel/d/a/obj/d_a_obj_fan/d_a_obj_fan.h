#ifndef D_A_OBJ_FAN_H
#define D_A_OBJ_FAN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjFan_c : public fopAc_ac_c {
    /* 80BE4D98 */ void search_tornado();
    /* 80BE4E08 */ void initBaseMtx();
    /* 80BE4E44 */ void setBaseMtx();
    /* 80BE4F08 */ void Create();
    /* 80BE4FD4 */ void CreateHeap();
    /* 80BE50EC */ void create1st();
    /* 80BE519C */ void Execute(f32 (**)[3][4]);
    /* 80BE538C */ void action();
    /* 80BE583C */ void setCollision();
    /* 80BE5960 */ void Draw();
    /* 80BE5A04 */ void Delete();
};

#endif /* D_A_OBJ_FAN_H */
