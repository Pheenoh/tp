#ifndef D_A_E_NEST_H
#define D_A_E_NEST_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_nest_class : public fopEn_enemy_c {};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);
    /* 8015F89C */ void checkBoomerangCharge();
};

class daNPC_TK_c : public fopEn_enemy_c {
    /* 80B0A444 */ void setHawkSideCamera(cXyz);
    /* 80B0A500 */ void setHawkCamera(fopAc_ac_c*);
    /* 80B0A568 */ void endHawkCamera();
};

class daE_Nest_HIO_c {
    /* 80500F8C */ daE_Nest_HIO_c();
    /* 80504634 */ ~daE_Nest_HIO_c();
};

#endif /* D_A_E_NEST_H */
