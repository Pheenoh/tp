#ifndef D_A_OBJ_TOBY_H
#define D_A_OBJ_TOBY_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class obj_toby_class : public fopAc_ac_c {};

class daPy_py_c : public fopAc_ac_c {
    /* 8015F89C */ void checkBoomerangCharge();
    /* 80D155B8 */ void getLeftHandPos() const;
};

class daObj_Toby_HIO_c {
    /* 80D1378C */ daObj_Toby_HIO_c();
    /* 80D15534 */ ~daObj_Toby_HIO_c();
};

class daE_HZ_c : public fopAc_ac_c {
    /* 806EB0FC */ void isWait();
};

#endif /* D_A_OBJ_TOBY_H */
