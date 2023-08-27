#ifndef D_A_OBJ_STOPPER_H
#define D_A_OBJ_STOPPER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjStopper_c : public fopAc_ac_c {
    /* 80CECF34 */ void initBaseMtx();
    /* 80CED024 */ void setBaseMtx();
    /* 80CED0B8 */ void Create();
    /* 80CED20C */ void CreateHeap();
    /* 80CED258 */ void create();
    /* 80CED6BC */ void Execute(f32 (**)[3][4]);
    /* 80CED708 */ void action();
    /* 80CED824 */ void actionWait();
    /* 80CEDA24 */ void actionWaitOrderEvent();
    /* 80CEDAAC */ void actionOrderEvent();
    /* 80CEDB2C */ void actionEvent();
    /* 80CEE048 */ void actionDead();
    /* 80CEE04C */ void actionWaitClose();
    /* 80CEE05C */ void actionCloseInit();
    /* 80CEE0E0 */ void actionClose();
    /* 80CEE148 */ void hint_action1();
    /* 80CEE5D0 */ void hint_action2();
    /* 80CEEA28 */ void hint_action3();
    /* 80CEECFC */ void Draw();
    /* 80CEED60 */ void Delete();
};

#endif /* D_A_OBJ_STOPPER_H */
