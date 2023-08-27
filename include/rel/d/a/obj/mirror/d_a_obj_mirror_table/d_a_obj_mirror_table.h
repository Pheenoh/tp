#ifndef D_A_OBJ_MIRROR_TABLE_H
#define D_A_OBJ_MIRROR_TABLE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjMirrorTable_c : public fopAc_ac_c {
    /* 80C99938 */ void createHeap();
    /* 80C99F7C */ void isSwitch();
    /* 80C9A298 */ void draw();
    /* 80C9A4D0 */ void execute();
    /* 80C9AB30 */ void create();
    /* 80C9ABFC */ void create_init();
    /* 80C9AFD0 */ void initBaseMtx();
};

#endif /* D_A_OBJ_MIRROR_TABLE_H */
