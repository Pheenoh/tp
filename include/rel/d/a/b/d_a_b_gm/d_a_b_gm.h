#ifndef D_A_B_GM_H
#define D_A_B_GM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class obj_ystone_class : public fopEn_enemy_c {
    /* 805F40D0 */ void setCurrentPos(cXyz);
};

class daPy_py_c : public fopEn_enemy_c {
    /* 805F4160 */ void changeDemoMode(u32, int, int, s16);
};

class daB_GM_HIO_c : public fopEn_enemy_c {
    /* 805ED94C */ daB_GM_HIO_c();
    /* 805F3E64 */ ~daB_GM_HIO_c();
};

class b_gm_class : public fopEn_enemy_c {
    /* 805F38E4 */ b_gm_class();
};

#endif /* D_A_B_GM_H */
