#ifndef D_A_OBJ_FLAG3_H
#define D_A_OBJ_FLAG3_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class FlagCloth2_c {
    /* 80BEEDE4 */ void execute();
    /* 80BEEF74 */ void calcFlagNormal(cXyz*, int);
    /* 80BEF278 */ void calcFlagFactor(cXyz*, cXyz*, cXyz*, int);
    /* 80BEF790 */ ~FlagCloth2_c();
    /* 80BEFD08 */ void initFlagPos(cXyz*, fopAc_ac_c*);
    /* 80BF00A0 */ void draw();
    /* 80BF0434 */ void getTargetPos();
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