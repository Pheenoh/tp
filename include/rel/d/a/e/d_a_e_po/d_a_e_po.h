#ifndef D_A_E_PO_H
#define D_A_E_PO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class e_po_class : public fopEn_enemy_c {
    /* 80756900 */ e_po_class();
};

class daPy_py_c : public fopEn_enemy_c {
    /* 8015F424 */ void checkNowWolfEyeUp();
    /* 80757308 */ void cancelOriginalDemo();
    /* 80757574 */ void changeDemoPos0(cXyz const*);
    /* 807575BC */ void changeDemoMode(u32, int, int, s16);
    /* 807575D0 */ void changeOriginalDemo();

    static u8 m_midnaActor[4];
};

class daE_PO_HIO_c {
    /* 8074C54C */ daE_PO_HIO_c();
    /* 80756DE8 */ ~daE_PO_HIO_c();
};

#endif /* D_A_E_PO_H */
