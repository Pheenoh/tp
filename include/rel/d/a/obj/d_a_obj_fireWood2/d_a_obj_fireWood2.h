#ifndef D_A_OBJ_FIREWOOD2_H
#define D_A_OBJ_FIREWOOD2_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daFireWood2_c : public fopAc_ac_c {
    /* 80BE82D0 */ void setBaseMtx();
    /* 80BE8328 */ void create();
    /* 80BE8640 */ void lightInit();
    /* 80BE86CC */ void setLight();
    /* 80BE86FC */ void cutLight();
    /* 80BE872C */ void pointLightProc();
    /* 80BE87DC */ void Execute();
    /* 80BE8D98 */ bool Draw();
    /* 80BE8DA0 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daFireWood2_HIO_c {
    /* 80BE824C */ daFireWood2_HIO_c();
    /* 80BE8E54 */ ~daFireWood2_HIO_c();
};

#endif /* D_A_OBJ_FIREWOOD2_H */
