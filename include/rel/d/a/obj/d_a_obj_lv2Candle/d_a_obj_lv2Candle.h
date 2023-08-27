#ifndef D_A_OBJ_LV2CANDLE_H
#define D_A_OBJ_LV2CANDLE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daLv2Candle_c : public fopAc_ac_c {
    /* 8058E13C */ void setBaseMtx();
    /* 8058E1C4 */ void CreateHeap();
    /* 8058E244 */ void create();
    /* 8058E5BC */ void isSwitch();
    /* 8058E608 */ void createHeapCallBack(fopAc_ac_c*);
    /* 8058E628 */ void searchDemoTagAct(void*, void*);
    /* 8058E678 */ void lightInit();
    /* 8058E720 */ void setLight();
    /* 8058E750 */ void cutLight();
    /* 8058E780 */ void pointLightProc();
    /* 8058E99C */ void Execute();
    /* 8058EEC8 */ void Draw();
    /* 8058EF6C */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daLv2Candle_HIO_c {
    /* 8058E04C */ daLv2Candle_HIO_c();
    /* 8058F050 */ ~daLv2Candle_HIO_c();
};

#endif /* D_A_OBJ_LV2CANDLE_H */
