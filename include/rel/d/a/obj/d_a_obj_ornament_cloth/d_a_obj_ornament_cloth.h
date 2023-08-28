#ifndef D_A_OBJ_ORNAMENT_CLOTH_H
#define D_A_OBJ_ORNAMENT_CLOTH_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class ClothJoint_c {
    /* 80595B9C */ ~ClothJoint_c();
    /* 80595CA8 */ ClothJoint_c();
};

class daObjOnCloth_c : public fopAc_ac_c {
    /* 80595038 */ void create_init();
    /* 80595158 */ void initBaseMtx();
    /* 80595178 */ void setBaseMtx();
    /* 805951DC */ void setNormalClothPos();
    /* 805954B0 */ void calcJointAngle();
    /* 80595638 */ void checkPlayerMove();

    static u8 const M_attr[48];
};

#endif /* D_A_OBJ_ORNAMENT_CLOTH_H */
