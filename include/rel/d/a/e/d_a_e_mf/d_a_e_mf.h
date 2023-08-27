#ifndef D_A_E_MF_H
#define D_A_E_MF_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_mf_class : public fopEn_enemy_c {
    /* 80712F20 */ e_mf_class();
};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F89C */ void checkBoomerangCharge();

    static u8 m_midnaActor[4];
};

class daE_MF_HIO_c : public fopEn_enemy_c {
    /* 8070A70C */ daE_MF_HIO_c();
    /* 80713464 */ ~daE_MF_HIO_c();
};

#endif /* D_A_E_MF_H */
