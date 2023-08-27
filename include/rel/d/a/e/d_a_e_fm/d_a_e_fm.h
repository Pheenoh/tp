#ifndef D_A_E_FM_H
#define D_A_E_FM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class obj_ystone_class : public fopEn_enemy_c {
    /* 804FA488 */ void setCurrentPos(cXyz);
};

class e_fm_class : public fopEn_enemy_c {
    /* 804F9B64 */ e_fm_class();
};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F478 */ void setFmChainPos(fopAc_ac_c*, cXyz*, int);
    /* 8015F4B8 */ void cancelFmChainGrab();
    /* 8015F4F0 */ void setLookPos(cXyz*);
    /* 8015F520 */ void setPlayerSe(u32);
    /* 804FA534 */ void changeDemoPos0(cXyz const*);
    /* 804FA680 */ void changeDemoMode(u32, int, int, s16);
    /* 804FA694 */ void changeOriginalDemo();
};

class daObjHHASHI_c : public fopEn_enemy_c {
    /* 80580854 */ void Rolling(cXyz*, f32, f32, s8);
};

class daE_FM_HIO_c : public fopEn_enemy_c {
    /* 804EF0EC */ daE_FM_HIO_c();
    /* 804FA3D8 */ ~daE_FM_HIO_c();
};

#endif /* D_A_E_FM_H */
