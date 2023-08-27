#ifndef D_A_OBJ_FLAG2_H
#define D_A_OBJ_FLAG2_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daSetBgObj_c : public fopAc_ac_c {
    /* 80031870 */ void getArcName(fopAc_ac_c*);
};

class daObjFlag2_c : public fopAc_ac_c {
    /* 80BED22C */ void create_init();
    /* 80BED368 */ void initBaseMtx();
    /* 80BED3B8 */ void initCollision();
    /* 80BED44C */ void setCollision();
    /* 80BED480 */ void createHeap();
    /* 80BED6A0 */ void create();
    /* 80BED7A4 */ daObjFlag2_c();
    /* 80BEDCE0 */ void draw();
    /* 80BEDEE0 */ ~daObjFlag2_c();

    static u8 const M_attr[20];
};

#endif /* D_A_OBJ_FLAG2_H */
