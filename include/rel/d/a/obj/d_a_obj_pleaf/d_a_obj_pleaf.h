#ifndef D_A_OBJ_PLEAF_H
#define D_A_OBJ_PLEAF_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Pleaf_c : public fopAc_ac_c {
    /* 80CB0D4C */ ~daObj_Pleaf_c();
    /* 80CB0F08 */ void create();
    /* 80CB134C */ void CreateHeap();
    /* 80CB13C4 */ void Delete();
    /* 80CB13F8 */ void Execute();
    /* 80CB14D4 */ void Draw();
    /* 80CB1598 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CB15B8 */ void getResName();
    /* 80CB15C8 */ void isDelete();
    /* 80CB15E8 */ void setEnvTevColor();
    /* 80CB1644 */ void setRoomNo();
    /* 80CB1684 */ void setMtx();
};

class daObj_Pleaf_Param_c {
    /* 80CB17F8 */ ~daObj_Pleaf_Param_c();

    static u8 const m[16];
};

#endif /* D_A_OBJ_PLEAF_H */
