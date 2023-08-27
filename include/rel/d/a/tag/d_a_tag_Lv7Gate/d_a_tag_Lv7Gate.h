#ifndef D_A_TAG_LV7GATE_H
#define D_A_TAG_LV7GATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagLv7Gate_c : public fopAc_ac_c {
    /* 80D50C64 */ void create();
    /* 80D50D30 */ void create_init();
    /* 80D511C8 */ void execute();
    /* 80D51628 */ void calcFly();
};

#endif /* D_A_TAG_LV7GATE_H */
