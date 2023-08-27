#ifndef D_A_OBJ_KAG_H
#define D_A_OBJ_KAG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_boomerangMove_c : public fopAc_ac_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

class daObj_KagHIO_c {
    /* 80C2E40C */ daObj_KagHIO_c();
    /* 80C31060 */ ~daObj_KagHIO_c();
};

class daObjKAG_c : public fopAc_ac_c {
    /* 80C2E434 */ void setAction(void (daObjKAG_c::*)());
    /* 80C2E7A0 */ void Kag_Bgcheck(cXyz*, csXyz*, cXyz*);
    /* 80C2EA40 */ void fly();
    /* 80C2F764 */ void wait();
    /* 80C2F8C4 */ void walk();
    /* 80C2FD94 */ void bin_wait();
    /* 80C2FF10 */ void bin_action();
    /* 80C30070 */ void hook();
    /* 80C30274 */ void boomerang();
    /* 80C303C4 */ void action();
    /* 80C30424 */ void checkGroundPos();
    /* 80C30498 */ void hit_check();
    /* 80C3054C */ void execute();
    /* 80C306EC */ void _delete();
    /* 80C30754 */ void setBaseMtx();
    /* 80C308F0 */ void create();
    /* 80C30E54 */ void kag_setParticle();
};

#endif /* D_A_OBJ_KAG_H */
