#ifndef D_A_OBJ_CRVSTEEL_H
#define D_A_OBJ_CRVSTEEL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjCRVSTEEL_c : public fopAc_ac_c {
    /* 80BD5BFC */ void OpenSet(f32, f32);
    /* 80BD5C18 */ void CloseSet(f32);
    /* 80BD5C28 */ void CloseExecute();
    /* 80BD5CA0 */ void OpenExecute();
    /* 80BD5CC8 */ void Action();
    /* 80BD5D10 */ void setBaseMtx();
    /* 80BD5DB8 */ void CreateHeap();
    /* 80BD5E30 */ void create();
    /* 80BD60A8 */ void Create();
    /* 80BD60EC */ void Execute(f32 (**)[3][4]);
    /* 80BD6138 */ void Draw();
    /* 80BD61BC */ void Delete();
};

#endif /* D_A_OBJ_CRVSTEEL_H */