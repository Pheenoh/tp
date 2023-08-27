#ifndef D_A_E_ST_H
#define D_A_E_ST_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_st_class : public fopEn_enemy_c {
    /* 807A5CF4 */ e_st_class();
};

class daPy_py_c : public fopEn_enemy_c {
    /* 807A67F4 */ void getHeadTopPos() const;

    static u8 m_midnaActor[4];
};

class daE_ST_HIO_c {
    /* 8079DDEC */ daE_ST_HIO_c();
    /* 807A61FC */ ~daE_ST_HIO_c();
};

#endif /* D_A_E_ST_H */
