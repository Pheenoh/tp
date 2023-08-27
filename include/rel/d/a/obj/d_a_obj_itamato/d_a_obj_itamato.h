#ifndef D_A_OBJ_ITAMATO_H
#define D_A_OBJ_ITAMATO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/cc/d_cc_d.h"

class daObj_ItaMato_c : public fopAc_ac_c {
    /* 80C294EC */ ~daObj_ItaMato_c();
    /* 80C2971C */ void create();
    /* 80C29CD8 */ void CreateHeap();
    /* 80C29DAC */ void Delete();
    /* 80C29DE0 */ void Execute();
    /* 80C2A44C */ void Draw();
    /* 80C2A5D0 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C2A5F0 */ void tgHitCallBack(fopAc_ac_c*, dCcD_GObjInf*, fopAc_ac_c*, dCcD_GObjInf*);
    /* 80C2A620 */ void getResName();
    /* 80C2A630 */ void setSwayParam(fopAc_ac_c*);
    /* 80C2A7C4 */ void setPrtcls();
    /* 80C2A890 */ void setEnvTevColor();
    /* 80C2A8EC */ void setRoomNo();
    /* 80C2A930 */ void setMtx();
};

class daObj_ItaMato_Param_c : public fopAc_ac_c {
    /* 80C2AB04 */ ~daObj_ItaMato_Param_c();

    static u8 const m[20];
};

#endif /* D_A_OBJ_ITAMATO_H */
