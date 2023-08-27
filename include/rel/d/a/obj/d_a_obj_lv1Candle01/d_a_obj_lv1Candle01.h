#ifndef D_A_OBJ_LV1CANDLE01_H
#define D_A_OBJ_LV1CANDLE01_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daLv1Cdl01_c : public fopAc_ac_c {
    /* 80C56D20 */ void setBaseMtx();
    /* 80C56DA8 */ void CreateHeap();
    /* 80C56E14 */ void create();
    /* 80C570D8 */ void lightInit();
    /* 80C57164 */ void setLight();
    /* 80C57194 */ void cutLight();
    /* 80C571C4 */ void pointLightProc();
    /* 80C57274 */ void Execute(f32 (**)[3][4]);
    /* 80C575F4 */ void Draw();
    /* 80C57698 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daLv1Cdl01_HIO_c {
    /* 80C56CAC */ daLv1Cdl01_HIO_c();
    /* 80C5777C */ ~daLv1Cdl01_HIO_c();
};

#endif /* D_A_OBJ_LV1CANDLE01_H */
