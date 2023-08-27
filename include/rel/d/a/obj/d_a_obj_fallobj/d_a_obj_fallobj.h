#ifndef D_A_OBJ_FALLOBJ_H
#define D_A_OBJ_FALLOBJ_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjFallObj_c : public fopAc_ac_c {
    /* 80BE39B8 */ void initBaseMtx();
    /* 80BE3A24 */ void setBaseMtx();
    /* 80BE3A88 */ void Create();
    /* 80BE3BA8 */ void getFallTime();
    /* 80BE3BD4 */ void getFallHeight();
    /* 80BE3C28 */ void CreateHeap();
    /* 80BE3C98 */ void create1st();
    /* 80BE3D24 */ void Execute(f32 (**)[3][4]);
    /* 80BE4138 */ void action();
    /* 80BE4228 */ void action_wait(bool);
    /* 80BE42C0 */ void action_fallStart();
    /* 80BE43E4 */ void action_countdown();
    /* 80BE45F4 */ void action_fall();
    /* 80BE466C */ void action_end();
    /* 80BE4670 */ void action_follow_fall();
    /* 80BE4700 */ void checkHang();
    /* 80BE47A0 */ void checkHang2();
    /* 80BE48A4 */ void Draw();
    /* 80BE4948 */ void Delete();
};

#endif /* D_A_OBJ_FALLOBJ_H */
