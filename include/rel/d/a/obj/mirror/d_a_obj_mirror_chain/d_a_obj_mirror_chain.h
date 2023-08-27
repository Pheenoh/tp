#ifndef D_A_OBJ_MIRROR_CHAIN_H
#define D_A_OBJ_MIRROR_CHAIN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjMirrorChain_c : public fopAc_ac_c {
    /* 80C96E40 */ void createHeap();
    /* 80C975EC */ void initBaseMtx();
    /* 80C97618 */ void setBaseMtx();
    /* 80C976B8 */ void draw();
    /* 80C97988 */ void execute();
};

#endif /* D_A_OBJ_MIRROR_CHAIN_H */
