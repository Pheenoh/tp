#ifndef D_A_E_GB_H
#define D_A_E_GB_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_gb_class : public fopEn_enemy_c {
    /* 806C6B94 */ e_gb_class();
};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F8C8 */ bool checkBoomerangChargeTime();

    static u8 m_midnaActor[4];
};

class daKey_c : public fopEn_enemy_c {
    /* 806C74B8 */ void setPos(cXyz);
    /* 80CDA9AC */ void actionWaitInit();
};

class daE_GB_HIO_c {
    /* 806C1CEC */ daE_GB_HIO_c();
    /* 806C6F98 */ ~daE_GB_HIO_c();
};

#endif /* D_A_E_GB_H */
