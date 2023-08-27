#ifndef D_A_BG_H
#define D_A_BG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daGrass_c : public fopAc_ac_c {
    /* 800319C8 */ static void deleteRoomGrass(int);
    /* 80031A20 */ static void deleteRoomFlower(int);
};

#endif /* D_A_BG_H */
