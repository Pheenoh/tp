#ifndef D_A_OBJ_FLAG3_H
#define D_A_OBJ_FLAG3_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daSetBgObj_c : public fopAc_ac_c {
    /* 80031870 */ void getArcName(fopAc_ac_c*);
};

class daObjFlag3_c : public fopAc_ac_c {
    /* 80BEEA78 */ void createHeap();
    /* 80BEED3C */ void execute();
    /* 80BEF700 */ ~daObjFlag3_c();
    /* 80BEF95C */ void create();
    /* 80BEFBC4 */ void create_init();

    static u8 const M_attr[20];
};

#endif /* D_A_OBJ_FLAG3_H */
