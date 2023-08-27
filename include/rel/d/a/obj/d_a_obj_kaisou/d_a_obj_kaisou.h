#ifndef D_A_OBJ_KAISOU_H
#define D_A_OBJ_KAISOU_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjKaisou_c : public fopAc_ac_c {
    /* 80C34058 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 80C34390 */ void initCcCylinder();
    /* 80C343F0 */ void setCcCylinder();
    /* 80C34438 */ void ObjHit();
    /* 80C34824 */ void Execute();
    /* 80C34A98 */ void Delete();
    /* 80C34ACC */ void setBaseMtx();
    /* 80C34BD8 */ void create();
};

#endif /* D_A_OBJ_KAISOU_H */
