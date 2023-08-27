#ifndef D_A_OBJ_OILTUBO_H
#define D_A_OBJ_OILTUBO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Oiltubo_c : public fopAc_ac_c {
    /* 80CA6718 */ void create();
    /* 80CA6B28 */ void CreateHeap();
    /* 80CA6C5C */ void Delete();
    /* 80CA6CA0 */ void Execute();
    /* 80CA6EDC */ void Draw();
    /* 80CA6FC8 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CA6FE8 */ void getResName();
    /* 80CA6FF8 */ void restart();
    /* 80CA7068 */ void initialize();
    /* 80CA720C */ void setProcess(int (daObj_Oiltubo_c::*)(void*));
    /* 80CA72BC */ void setParam();
    /* 80CA7318 */ void setEnvTevColor();
    /* 80CA7374 */ void setRoomNo();
    /* 80CA73B8 */ void setMtx();
    /* 80CA7430 */ void setAttnPos();
    /* 80CA7478 */ void chkEvent();
    /* 80CA74C8 */ void wait(void*);
    /* 80CA7628 */ ~daObj_Oiltubo_c();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

#endif /* D_A_OBJ_OILTUBO_H */
