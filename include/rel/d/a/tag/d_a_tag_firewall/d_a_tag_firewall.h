#ifndef D_A_TAG_FIREWALL_H
#define D_A_TAG_FIREWALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_FWall_c : public fopAc_ac_c {
    /* 80D58940 */ void execute();
    /* 80D59078 */ bool _delete();
    /* 80D590A8 */ void create();
};

#endif /* D_A_TAG_FIREWALL_H */
