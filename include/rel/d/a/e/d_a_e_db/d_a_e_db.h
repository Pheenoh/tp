#ifndef D_A_E_DB_H
#define D_A_E_DB_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_db_class : public fopEn_enemy_c {};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);

    static u8 m_midnaActor[4];
};

class daE_DB_HIO_c {
    /* 8069AAEC */ daE_DB_HIO_c();
    /* 806A13D8 */ ~daE_DB_HIO_c();
};

#endif /* D_A_E_DB_H */
