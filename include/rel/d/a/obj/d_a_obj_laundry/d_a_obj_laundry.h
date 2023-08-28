#ifndef D_A_OBJ_LAUNDRY_H
#define D_A_OBJ_LAUNDRY_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class LaundJoint_c {
    /* 80C51D2C */ ~LaundJoint_c();
    /* 80C51EC0 */ LaundJoint_c();
};

class daObjLdy_c : public fopAc_ac_c {
    /* 80C50F98 */ void create_init();
    /* 80C51088 */ void initBaseMtx();
    /* 80C510F8 */ void setBaseMtx();
    /* 80C5116C */ void getJointAngle(csXyz*, int);
    /* 80C51194 */ void setNormalClothPos();
    /* 80C51644 */ void calcJointAngle();
    /* 80C5183C */ bool divorceParent();

    static u8 const M_attr[52];
};

#endif /* D_A_OBJ_LAUNDRY_H */
