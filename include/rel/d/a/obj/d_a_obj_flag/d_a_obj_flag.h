#ifndef D_A_OBJ_FLAG_H
#define D_A_OBJ_FLAG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class FlagJoint_c {
    /* 80BEC3BC */ ~FlagJoint_c();
    /* 80BEC4E0 */ FlagJoint_c();
};

class daSetBgObj_c : public fopAc_ac_c {
    /* 80031870 */ void getArcName(fopAc_ac_c*);
};

class daObjFlag_c : public fopAc_ac_c {
    /* 80BEB778 */ void create_init();
    /* 80BEB8F0 */ void initBaseMtx();
    /* 80BEB984 */ void getJointAngle(csXyz*, int);
    /* 80BEB9AC */ void calcJointAngle();
    /* 80BEBC58 */ void calcAngleSwingZ(FlagJoint_c*, f32);
    /* 80BEBDAC */ void calcAngleSwingX(FlagJoint_c*, f32);
    /* 80BEBE64 */ void getSwingY(f32);

    static u8 const M_attr[52];
};

#endif /* D_A_OBJ_FLAG_H */
