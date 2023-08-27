#ifndef D_A_OBJ_STICK_H
#define D_A_OBJ_STICK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Stick_c : public fopAc_ac_c {
    /* 8059922C */ ~daObj_Stick_c();
    /* 805993E8 */ void create();
    /* 80599888 */ void CreateHeap();
    /* 80599900 */ void Delete();
    /* 80599934 */ void Execute();
    /* 80599A78 */ void Draw();
    /* 80599B3C */ void createHeapCallBack(fopAc_ac_c*);
    /* 80599B5C */ void getResName();
    /* 80599B6C */ void isDelete();
    /* 80599B8C */ void setEnvTevColor();
    /* 80599BE8 */ void setRoomNo();
    /* 80599C28 */ void setMtx();

    static u8 mCcDSph[64];
};

class daObj_Stick_Param_c {
    /* 80599DD0 */ ~daObj_Stick_Param_c();

    static u8 const m[16];
};

class daNpcT_c : public fopAc_ac_c {
    static u8 const mCcDObjData[48];
};

#endif /* D_A_OBJ_STICK_H */
