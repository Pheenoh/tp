#ifndef D_A_E_BS_H
#define D_A_E_BS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_bs_class : public fopEn_enemy_c {};

class daPy_py_c : public fopEn_enemy_c {
    static u8 m_midnaActor[4];
};

class daE_BS_HIO_c : public fopEn_enemy_c {
    /* 8068E12C */ daE_BS_HIO_c();
    /* 8069091C */ ~daE_BS_HIO_c();
};

#endif /* D_A_E_BS_H */
