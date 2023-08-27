#ifndef D_A_E_RD_H
#define D_A_E_RD_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_rd_class : public fopEn_enemy_c {
    /* 80517AE0 */ e_rd_class();
};

class daPy_py_c : public fopEn_enemy_c {
    static u8 m_midnaActor[4];
};

class daObjH_Saku_c : public fopEn_enemy_c {
    /* 80C1552C */ void BreakSet();
};

class daE_RD_HIO_c : public fopEn_enemy_c {
    /* 80504A6C */ daE_RD_HIO_c();
    /* 8051801C */ ~daE_RD_HIO_c();
};

#endif /* D_A_E_RD_H */
