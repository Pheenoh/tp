#ifndef D_A_OBJ_STOPPER2_H
#define D_A_OBJ_STOPPER2_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjStopper2_c : public fopAc_ac_c {
    /* 80CEF368 */ void getStopModelData();
    /* 80CEF38C */ void initBaseMtx();
    /* 80CEF3C8 */ void setBaseMtx();
    /* 80CEF434 */ void getMaxOffsetY();
    /* 80CEF44C */ void Create();
    /* 80CEF57C */ void CreateHeap();
    /* 80CEF5C8 */ void create();
    /* 80CEF66C */ void execute();
    /* 80CEF6A4 */ void event_proc_call();
    /* 80CEF760 */ void actionWait();
    /* 80CEF98C */ void actionOrderEvent();
    /* 80CEFA60 */ void actionEvent();
    /* 80CEFAD4 */ void actionDead();
    /* 80CEFAD8 */ void demoProc();
    /* 80CEFD40 */ void draw();
    /* 80CEFDB8 */ void _delete();
};

#endif /* D_A_OBJ_STOPPER2_H */
