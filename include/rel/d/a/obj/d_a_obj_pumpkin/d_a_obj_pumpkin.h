#ifndef D_A_OBJ_PUMPKIN_H
#define D_A_OBJ_PUMPKIN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_boomerangMove_c : public fopAc_ac_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

class daObj_Pumpkin_c : public fopAc_ac_c {
    /* 80CB578C */ ~daObj_Pumpkin_c();
    /* 80CB5A04 */ void create();
    /* 80CB5F88 */ void CreateHeap();
    /* 80CB6018 */ void Delete();
    /* 80CB604C */ void Execute();
    /* 80CB7638 */ void Draw();
    /* 80CB7824 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CB7844 */ void isDelete();
    /* 80CB78C8 */ void setEnvTevColor();
    /* 80CB7924 */ void setRoomNo();
    /* 80CB7968 */ void reset();
    /* 80CB79DC */ void setMtx();
    /* 80CB7AE4 */ void calcRollAngle(s16, int);
    /* 80CB7B84 */ void getWallAngle(s16, s16*);
    /* 80CB7D14 */ void setSmokePrtcl();
    /* 80CB7D98 */ void setWaterPrtcl();
    /* 80CB7E98 */ void setHamonPrtcl();
    /* 80CB7EF4 */ void crash();
};

class daObj_Pumpkin_Param_c : public fopAc_ac_c {
    /* 80CB8304 */ ~daObj_Pumpkin_Param_c();

    static u8 const m[52];
};

class daNpc_Jagar_Param_c : public fopAc_ac_c {
    static u8 const m[160];
};

class daNpcT_c : public fopAc_ac_c {
    /* 8014ACF0 */ void chkPointInArea(cXyz, cXyz, f32, f32, f32, s16);
};

#endif /* D_A_OBJ_PUMPKIN_H */
