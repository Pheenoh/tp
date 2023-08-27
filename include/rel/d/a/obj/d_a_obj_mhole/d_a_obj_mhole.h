#ifndef D_A_OBJ_MHOLE_H
#define D_A_OBJ_MHOLE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjMHole_c : public fopAc_ac_c {
    /* 80C92FD8 */ void initBaseMtx();
    /* 80C93014 */ void setBaseMtx();
    /* 80C9307C */ void Create();
    /* 80C93198 */ void checkParent();
    /* 80C93204 */ void CreateHeap();
    /* 80C934E0 */ void create();
    /* 80C936A8 */ void execute();
    /* 80C93928 */ void effectSet();
    /* 80C93A88 */ void effectEnd();
    /* 80C93ADC */ void draw();
    /* 80C93CAC */ void _delete();
};

#endif /* D_A_OBJ_MHOLE_H */
