#ifndef D_A_OBJ_KTONFIRE_H
#define D_A_OBJ_KTONFIRE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daKtOnFire_c : public fopAc_ac_c {
    /* 8058C678 */ void setBaseMtx();
    /* 8058C6D0 */ void create();
    /* 8058C960 */ void lightInit();
    /* 8058C9D4 */ void setLight();
    /* 8058C9F8 */ void cutLight();
    /* 8058CA1C */ void Execute();
    /* 8058CDF8 */ bool Draw();
    /* 8058CE00 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daKtOnFire_HIO_c {
    /* 8058C60C */ daKtOnFire_HIO_c();
    /* 8058CEA8 */ ~daKtOnFire_HIO_c();
};

#endif /* D_A_OBJ_KTONFIRE_H */