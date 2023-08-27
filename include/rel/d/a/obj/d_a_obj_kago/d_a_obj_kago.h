#ifndef D_A_OBJ_KAGO_H
#define D_A_OBJ_KAGO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Kago_c : public fopAc_ac_c {
    /* 80C31AEC */ ~daObj_Kago_c();
    /* 80C31D5C */ void create();
    /* 80C323D0 */ void CreateHeap();
    /* 80C324B0 */ void Delete();
    /* 80C324E4 */ void Execute();
    /* 80C332D0 */ void Draw();
    /* 80C333F0 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C33410 */ void isDelete();
    /* 80C334B4 */ void setEnvTevColor();
    /* 80C33510 */ void setRoomNo();
    /* 80C33554 */ void reset();
    /* 80C3359C */ void setMtx();
    /* 80C33620 */ void getWallAngle(s16, s16*);
    /* 80C337B0 */ void setGoalPosAndAngle();
    /* 80C338D0 */ void setSmokePrtcl();
    /* 80C33958 */ void setWaterPrtcl();
    /* 80C33A58 */ void setHamonPrtcl();
};

class daObj_Kago_Param_c : public fopAc_ac_c {
    /* 80C33C14 */ ~daObj_Kago_Param_c();

    static u8 const m[44];
};

class daNpcT_c : public fopAc_ac_c {
    static u8 const mCcDObjData[48];
};

#endif /* D_A_OBJ_KAGO_H */
