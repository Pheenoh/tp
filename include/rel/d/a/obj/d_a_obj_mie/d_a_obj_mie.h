#ifndef D_A_OBJ_MIE_H
#define D_A_OBJ_MIE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Mie_c : public fopAc_ac_c {
    /* 80C93FCC */ ~daObj_Mie_c();
    /* 80C941C8 */ void create();
    /* 80C945E8 */ void CreateHeap();
    /* 80C94674 */ void Delete();
    /* 80C946A8 */ void Execute();
    /* 80C95140 */ void Draw();
    /* 80C952D8 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C952F8 */ void srchPouyaa(void*, void*);
    /* 80C9536C */ void setEnvTevColor();
    /* 80C953C8 */ void setRoomNo();
    /* 80C9540C */ void setMtx();
    /* 80C954BC */ void calcRollAngle(s16, int);
    /* 80C9555C */ void getWallAngle(s16, s16*);
    /* 80C956EC */ void setSmokePrtcl();
    /* 80C95768 */ void setWaterPrtcl();
    /* 80C95890 */ void setHamonPrtcl();
};

class daObj_Mie_Param_c {
    /* 80C95A40 */ ~daObj_Mie_Param_c();

    static u8 const m[44];
};

#endif /* D_A_OBJ_MIE_H */