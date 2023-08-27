#ifndef D_A_OBJ_KGATE_H
#define D_A_OBJ_KGATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjKGate_c : public fopAc_ac_c {
    /* 805880C8 */ void initBaseMtx();
    /* 8058827C */ void setBaseMtx();
    /* 805887A0 */ void Create();
    /* 805889A4 */ void CreateHeap();
    /* 80588BF8 */ void create1st();
    /* 80588D00 */ void checkAreaL(cXyz const*, cXyz const*);
    /* 805890D4 */ void checkAreaR(cXyz const*, cXyz const*);
    /* 805894A4 */ void checkOpen();
    /* 805895D0 */ void checkDirL(fopAc_ac_c*);
    /* 80589664 */ void checkDirR(fopAc_ac_c*);
    /* 805896F8 */ void setAtkSE();
    /* 80589774 */ void setCrkSE();
    /* 805897F0 */ void action();
    /* 805898A0 */ void action_typeA();
    /* 80589F40 */ void action_typeB();
    /* 8058A1B0 */ void actionWaitEvent();
    /* 8058A294 */ void actionEvent();
    /* 8058A2FC */ void actionDead();
    /* 8058A300 */ void event_proc_call();
    /* 8058A3A4 */ void demoProc();
    /* 8058A508 */ void getDemoAction();
    /* 8058A550 */ void Execute(f32 (**)[3][4]);
    /* 8058A5B8 */ void Draw();
    /* 8058A6F4 */ void Delete();
};

#endif /* D_A_OBJ_KGATE_H */
