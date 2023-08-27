#ifndef D_A_OBJ_WSWORD_H
#define D_A_OBJ_WSWORD_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjWSword_c : public fopAc_ac_c {
    /* 80D3B998 */ void initBaseMtx();
    /* 80D3B9D4 */ void setBaseMtx();
    /* 80D3BA40 */ void Create();
    /* 80D3BAB8 */ void CreateHeap();
    /* 80D3BB28 */ void create();
    /* 80D3BDA0 */ void execute();
    /* 80D3BDF0 */ void draw();
    /* 80D3BE54 */ void _delete();
};

#endif /* D_A_OBJ_WSWORD_H */
