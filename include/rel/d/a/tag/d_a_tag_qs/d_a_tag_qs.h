#ifndef D_A_TAG_QS_H
#define D_A_TAG_QS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagQs_c : public fopAc_ac_c {
    /* 80D5DE78 */ ~daTagQs_c();
    /* 80D5DFB0 */ void create();
    /* 80D5E1FC */ void getPower();
    /* 80D5E220 */ void getSafeArea();
    /* 80D5E244 */ void getPower80();
    /* 80D5E268 */ void getCenterPower();
    /* 80D5E28C */ void calcPower(f32, f32);
    /* 80D5E9F8 */ void execute();
    /* 80D5EBF8 */ bool draw();
};

#endif /* D_A_TAG_QS_H */
