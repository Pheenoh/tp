#ifndef D_A_OBJ_SWBALLC_H
#define D_A_OBJ_SWBALLC_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjSwBallC_c : public fopAc_ac_c {
    /* 80CF5CD4 */ void initBaseMtx();
    /* 80CF5CF4 */ void setBaseMtx();
    /* 80CF5D58 */ void Create();
    /* 80CF5EF8 */ void CreateHeap();
    /* 80CF606C */ void create();
    /* 80CF6120 */ void execute();
    /* 80CF6144 */ void event_proc_call();
    /* 80CF6200 */ void actionWait();
    /* 80CF629C */ void actionOrderEvent();
    /* 80CF6344 */ void actionEvent();
    /* 80CF63F0 */ void actionDead();
    /* 80CF63F4 */ void demoProc();
    /* 80CF6818 */ void setLightOnSwB();
    /* 80CF6888 */ void setLightOffSwB();
    /* 80CF68F8 */ void deleteLightBall();
    /* 80CF692C */ void deleteLightBallA();
    /* 80CF6964 */ void deleteLightBallB();
    /* 80CF699C */ void calcLightBallScale();
    /* 80CF6A74 */ void draw();
    /* 80CF6BFC */ void _delete();
};

#endif /* D_A_OBJ_SWBALLC_H */
