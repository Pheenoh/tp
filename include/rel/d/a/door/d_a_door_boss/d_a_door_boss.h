#ifndef D_A_DOOR_BOSS_H
#define D_A_DOOR_BOSS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBdoor_c : public fopAc_ac_c {
    /* 8066F418 */ void getArcName();
    /* 8066F424 */ void getBmd();
    /* 8066F434 */ void getDzb();
    /* 8066F444 */ void getBmd2();
    /* 8066F454 */ void getDoorModelData();
    /* 8066F4E4 */ void CreateHeap();
    /* 8066F738 */ void calcMtx();
    /* 8066F7EC */ void CreateInit();
    /* 8066F8E4 */ void create();
    /* 8066FAB8 */ void getDemoAction();
    /* 8066FB00 */ void demoProc();
    /* 8066FF04 */ void calcGoal(cXyz*, int);
    /* 8067002C */ void smokeInit();
    /* 806700C4 */ void checkArea();
    /* 806701F4 */ void checkFront();
    /* 80670294 */ void checkOpen();
    /* 80670320 */ bool actionWait();
    /* 80670328 */ void actionCloseWait();
    /* 806703C0 */ void actionOpen();
    /* 806703E4 */ void actionEnd();
    /* 80670544 */ void execute();
    /* 80670664 */ void checkDraw();
    /* 806706A4 */ void draw();
    /* 80670804 */ void Delete();
};

#endif /* D_A_DOOR_BOSS_H */
