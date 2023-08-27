#ifndef D_A_MANT_H
#define D_A_MANT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class mant_class : public fopAc_ac_c {};

class daMant_packet_c : public fopAc_ac_c {
    /* 80861298 */ void draw();
    /* 80862BA4 */ ~daMant_packet_c();
};

#endif /* D_A_MANT_H */
