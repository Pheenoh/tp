#ifndef D_A_B_GND_H
#define D_A_B_GND_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F398 */ void checkMasterSwordEquip();
    /* 80602338 */ void cancelOriginalDemo();
    /* 80602590 */ void changeDemoMode(u32, int, int, s16);
    /* 806025A4 */ void changeOriginalDemo();

    static u8 m_midnaActor[4];
};

class daHorse_c : public fopEn_enemy_c {
    /* 806025B8 */ void changeDemoMode(u32, int);
    /* 806025F0 */ void changeOriginalDemo();
};

class daB_GND_HIO_c {
    /* 805F4A4C */ daB_GND_HIO_c();
    /* 80602230 */ ~daB_GND_HIO_c();
};

class b_gnd_class : public fopEn_enemy_c {
    /* 80601960 */ b_gnd_class();
};

#endif /* D_A_B_GND_H */
