#ifndef D_A_OBJ_BED_H
#define D_A_OBJ_BED_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Bed_c : public fopAc_ac_c {
    /* 80BAD66C */ ~daObj_Bed_c();
    /* 80BAD790 */ void create();
    /* 80BADB70 */ void CreateHeap();
    /* 80BADC80 */ void Delete();
    /* 80BADCB4 */ void Execute();
    /* 80BADDF4 */ void Draw();
    /* 80BADEB8 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80BADED8 */ bool getType();
    /* 80BADEE0 */ void getResName();
    /* 80BADEF0 */ void isDelete();
    /* 80BADF34 */ void setEnvTevColor();
    /* 80BADF90 */ void setRoomNo();
    /* 80BADFD0 */ void setMtx();
};

class daObj_Bed_Param_c : public fopAc_ac_c {
    /* 80BAE0FC */ ~daObj_Bed_Param_c();

    static u8 const m[16];
};

#endif /* D_A_OBJ_BED_H */
