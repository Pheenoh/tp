#ifndef D_A_OBJ_BK_LEAF_H
#define D_A_OBJ_BK_LEAF_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBkLeaf_c : public fopAc_ac_c {
    /* 80BB60F8 */ void setBokkuri();
    /* 80BB618C */ void initBaseMtx();
    /* 80BB61C8 */ void setBaseMtx();
    /* 80BB621C */ void Create();
    /* 80BB629C */ void CreateHeap();
    /* 80BB63F4 */ void create();
    /* 80BB64A8 */ void execute();
    /* 80BB65C4 */ void draw();
    /* 80BB6654 */ void _delete();
};

#endif /* D_A_OBJ_BK_LEAF_H */
