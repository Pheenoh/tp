#ifndef D_A_OBJ_SEKIDOOR_H
#define D_A_OBJ_SEKIDOOR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_SekiDoor_c : public fopAc_ac_c {
    /* 80CCD02C */ void create();
    /* 80CCD154 */ void CreateHeap();
    /* 80CCD1F0 */ void Create();
    /* 80CCD23C */ void Delete();
    /* 80CCD290 */ void Execute(f32 (**)[3][4]);
    /* 80CCD538 */ void Draw();
    /* 80CCD5DC */ void evtSkip();
    /* 80CCD64C */ void setPrtcls();
    /* 80CCD810 */ void initBaseMtx();
    /* 80CCD84C */ void setBaseMtx();
};

class daObj_SekiDoor_Param_c : public fopAc_ac_c {
    /* 80CCD9AC */ ~daObj_SekiDoor_Param_c();

    static u8 const m[1 + 3 /* padding */];
};

#endif /* D_A_OBJ_SEKIDOOR_H */
