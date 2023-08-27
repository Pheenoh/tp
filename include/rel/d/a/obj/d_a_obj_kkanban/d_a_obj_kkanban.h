#ifndef D_A_OBJ_KKANBAN_H
#define D_A_OBJ_KKANBAN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjKKanban_c : public fopAc_ac_c {
    /* 80C46768 */ void initBaseMtx();
    /* 80C467A4 */ void setBaseMtx();
    /* 80C46808 */ void Create();
    /* 80C46928 */ void setTG();
    /* 80C469F4 */ void CreateHeap();
    /* 80C46A64 */ void create1st();
    /* 80C46AE4 */ void Execute(f32 (**)[3][4]);
    /* 80C46C1C */ void Draw();
    /* 80C46CC0 */ void Delete();
};

#endif /* D_A_OBJ_KKANBAN_H */
