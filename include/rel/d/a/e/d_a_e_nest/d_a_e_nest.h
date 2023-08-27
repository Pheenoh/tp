#ifndef D_A_E_NEST_H
#define D_A_E_NEST_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class e_nest_class : public fopEn_enemy_c {};

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
