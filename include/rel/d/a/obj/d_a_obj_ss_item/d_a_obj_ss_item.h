#ifndef D_A_OBJ_SS_ITEM_H
#define D_A_OBJ_SS_ITEM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_SSItem_c : public fopAc_ac_c {
    /* 80CE6C18 */ ~daObj_SSItem_c();
    /* 80CE6E68 */ void create();
    /* 80CE7298 */ void CreateHeap();
    /* 80CE7358 */ void Delete();
    /* 80CE738C */ void Execute();
    /* 80CE7610 */ void Draw();
    /* 80CE7758 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CE7778 */ void setSoldOut();
    /* 80CE77CC */ void getProcessID();
    /* 80CE77F8 */ void getExchangeItemPtr();
    /* 80CE7838 */ void getResName();
    /* 80CE7850 */ void getTypeFromParam();
    /* 80CE789C */ void getFlowNodeNum();
    /* 80CE78D4 */ void getValue();
    /* 80CE78E0 */ void restart();
    /* 80CE7950 */ void initialize();
    /* 80CE7B04 */ void setProcess(int (daObj_SSItem_c::*)(void*));
    /* 80CE7BB4 */ void setParam();
    /* 80CE7C24 */ void setEnvTevColor();
    /* 80CE7C80 */ void setRoomNo();
    /* 80CE7CC4 */ void setMtx();
    /* 80CE7D28 */ void setAttnPos();
    /* 80CE7D5C */ void wait(void*);

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daObj_SSBase_c : public fopAc_ac_c {
    /* 8015E3F8 */ daObj_SSBase_c();
    /* 8015E450 */ ~daObj_SSBase_c();
};

class daMyna_c : public fopAc_ac_c {
    /* 809487EC */ void soldoutItem(unsigned int);
};

#endif /* D_A_OBJ_SS_ITEM_H */
