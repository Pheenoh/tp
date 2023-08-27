#ifndef D_A_OBJ_FIREWOOD_H
#define D_A_OBJ_FIREWOOD_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daFireWood_c : public fopAc_ac_c {
    /* 80BE76B0 */ void setBaseMtx();
    /* 80BE7708 */ void create();
    /* 80BE79A0 */ void lightInit();
    /* 80BE7A14 */ void setLight();
    /* 80BE7A38 */ void Execute();
    /* 80BE7E74 */ bool Draw();
    /* 80BE7E7C */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daFireWood_HIO_c {
    /* 80BE762C */ daFireWood_HIO_c();
    /* 80BE7F24 */ ~daFireWood_HIO_c();
};

#endif /* D_A_OBJ_FIREWOOD_H */
