#ifndef D_A_OBJ_LV1CANDLE00_H
#define D_A_OBJ_LV1CANDLE00_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daLv1Cdl00_c : public fopAc_ac_c {
    /* 80C55D80 */ void setBaseMtx();
    /* 80C55E08 */ void CreateHeap();
    /* 80C55E74 */ void create();
    /* 80C561A0 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C561C0 */ void lightInit();
    /* 80C56268 */ void setLight();
    /* 80C562A0 */ void cutLight();
    /* 80C562D8 */ void pointLightProc();
    /* 80C56388 */ void Execute();
    /* 80C567EC */ void Draw();
    /* 80C56890 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daLv1Cdl00_HIO_c {
    /* 80C55D0C */ daLv1Cdl00_HIO_c();
    /* 80C56970 */ ~daLv1Cdl00_HIO_c();
};

#endif /* D_A_OBJ_LV1CANDLE00_H */
