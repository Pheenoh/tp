#ifndef D_A_TAG_KAGO_FALL_H
#define D_A_TAG_KAGO_FALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagKagoFall_c : public fopAc_ac_c {
    /* 80D59C58 */ void create();
    /* 80D59DE0 */ void execute();
    /* 80D59E18 */ void setActionMode(u8, u8);
    /* 80D59E24 */ void actionWaitRiver();
    /* 80D5A218 */ void actionWaitFall();
    /* 80D5A67C */ bool _delete();
};

#endif /* D_A_TAG_KAGO_FALL_H */
