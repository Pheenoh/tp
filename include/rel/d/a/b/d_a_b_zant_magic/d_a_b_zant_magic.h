#ifndef D_A_B_ZANT_MAGIC_H
#define D_A_B_ZANT_MAGIC_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F398 */ void checkMasterSwordEquip();
};

class daB_ZANT_c : public fopEn_enemy_c {
    /* 80640654 */ void getMagicSpeed();
    /* 80640664 */ void getMagicWaterSpeed();
};

class daB_ZANTM_c : public fopEn_enemy_c {
    /* 8064F778 */ void draw();
    /* 8064F7D4 */ void setMagicEffect();
    /* 8064F938 */ void setMagicHitEffect();
    /* 8064FA50 */ void executeSmall();
    /* 8064FD6C */ void cc_set();
    /* 8064FE6C */ void execute();
    /* 8064FF2C */ bool _delete();
    /* 8064FF54 */ void create();
    /* 806500A8 */ daB_ZANTM_c();
};

#endif /* D_A_B_ZANT_MAGIC_H */
