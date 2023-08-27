#ifndef D_A_OBJ_NAMEPLATE_H
#define D_A_OBJ_NAMEPLATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjNameplate_c : public fopAc_ac_c {
    /* 80594098 */ void create_init();
    /* 8059415C */ void initBaseMtx();
    /* 8059417C */ void setBaseMtx();
    /* 80594248 */ void initCcSphere();
    /* 805942B8 */ void setCcSphere();
    /* 8059434C */ void calcAngle();
    /* 805945CC */ void calcSpring();
    /* 80594754 */ void checkHitAngle();
    /* 805947F8 */ void messageProc();

    static u8 const M_attr[32];
};

#endif /* D_A_OBJ_NAMEPLATE_H */
