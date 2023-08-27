#ifndef D_A_E_RDY_H
#define D_A_E_RDY_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_rdy_class : public fopEn_enemy_c {
    /* 80779340 */ e_rdy_class();
};

class daPy_py_c : public fopEn_enemy_c {
    /* 80779DD4 */ void changeDemoMode(u32, int, int, s16);

    static u8 m_midnaActor[4];
};

class daE_RDY_HIO_c {
    /* 8076BDCC */ daE_RDY_HIO_c();
    /* 80779880 */ ~daE_RDY_HIO_c();
};

#endif /* D_A_E_RDY_H */
