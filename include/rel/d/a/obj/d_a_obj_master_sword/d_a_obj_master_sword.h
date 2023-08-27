#ifndef D_A_OBJ_MASTER_SWORD_H
#define D_A_OBJ_MASTER_SWORD_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjMasterSword_c : public fopAc_ac_c {
    /* 80C90AF8 */ void initWait();
    /* 80C90B50 */ void executeWait();
    /* 80C90C50 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C90C70 */ void CreateHeap();
    /* 80C90DB8 */ void create();
    /* 80C90F6C */ void create_init();
    /* 80C91448 */ ~daObjMasterSword_c();
    /* 80C91714 */ void draw();

    static f32 const mAttr;
    static u8 ActionTable[24];
};

#endif /* D_A_OBJ_MASTER_SWORD_H */
