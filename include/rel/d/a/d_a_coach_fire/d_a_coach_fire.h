#ifndef D_A_COACH_FIRE_H
#define D_A_COACH_FIRE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daNpcCoach_c : public fopAc_ac_c {
    /* 8099DBA4 */ void deleteFireArrow(unsigned int);
    /* 8099DCE8 */ void deleteFireArrowFromList(unsigned int);
};

class daCoachFire_c : public fopAc_ac_c {
    /* 80657B78 */ void create_init();
    /* 80657C48 */ void initBaseMtx();
    /* 80657CA8 */ void setBaseMtx();
    /* 80657D2C */ void initCcSphere();

    static u8 const M_attr[16];
};

#endif /* D_A_COACH_FIRE_H */
