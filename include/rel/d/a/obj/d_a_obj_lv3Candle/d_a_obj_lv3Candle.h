#ifndef D_A_OBJ_LV3CANDLE_H
#define D_A_OBJ_LV3CANDLE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daLv3Candle_c : public fopAc_ac_c {
    /* 80C57B38 */ void setBaseMtx();
    /* 80C57BC0 */ void CreateHeap();
    /* 80C57C40 */ void create();
    /* 80C57F6C */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C57F8C */ void lightInit();
    /* 80C58018 */ void pointLightProc();
    /* 80C580A0 */ void Execute();
    /* 80C582FC */ void Draw();
    /* 80C583A0 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDSph[64];
};

class daLv3Candle_HIO_c {
    /* 80C57ACC */ daLv3Candle_HIO_c();
    /* 80C58484 */ ~daLv3Candle_HIO_c();
};

#endif /* D_A_OBJ_LV3CANDLE_H */
