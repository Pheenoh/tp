#ifndef D_A_E_RDB_H
#define D_A_E_RDB_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_rdb_class : public fopEn_enemy_c {
    /* 8076AA0C */ e_rdb_class();
};

class daPy_py_c : public fopEn_enemy_c {
    static u8 m_midnaActor[4];
};

class daE_RDB_HIO_c : public fopEn_enemy_c {
    /* 807650CC */ daE_RDB_HIO_c();
    /* 8076AF64 */ ~daE_RDB_HIO_c();
};

#endif /* D_A_E_RDB_H */
