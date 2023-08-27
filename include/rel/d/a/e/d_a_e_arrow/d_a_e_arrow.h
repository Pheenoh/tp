#ifndef D_A_E_ARROW_H
#define D_A_E_ARROW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_arrow_class : public fopEn_enemy_c {};

class daPy_py_c : public fopEn_enemy_c {
    static u8 m_midnaActor[4];
};

class daAlink_c : public fopEn_enemy_c {
    /* 800DC8C4 */ void setArrowShieldActor(fopAc_ac_c*, int);
    /* 800DCA2C */ void checkWoodShieldEquipNotIronBall() const;
    /* 800DCA80 */ void getArrowShieldOffset(cXyz const*, csXyz const*, cXyz*, cXyz*) const;
    /* 800DCD74 */ void setArrowShieldPos(cXyz*, csXyz*, cXyz const*, cXyz const*) const;
};

#endif /* D_A_E_ARROW_H */
