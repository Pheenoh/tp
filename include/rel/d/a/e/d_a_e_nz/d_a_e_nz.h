#ifndef D_A_E_NZ_H
#define D_A_E_NZ_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_nz_class : public fopEn_enemy_c {};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F424 */ void checkNowWolfEyeUp();

    static u8 m_midnaActor[4];
};

class daE_NZ_HIO_c : public fopEn_enemy_c {
    /* 807299EC */ daE_NZ_HIO_c();
    /* 8072BC88 */ ~daE_NZ_HIO_c();
};

#endif /* D_A_E_NZ_H */
