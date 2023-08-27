#ifndef D_A_DOOR_DBDOOR00_H
#define D_A_DOOR_DBDOOR00_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daDbDoor00_c : public fopAc_ac_c {
    /* 8045D470 */ void getAlwaysArcName();
    /* 8045D480 */ void getDzb();
    /* 8045D490 */ void getDummyBmdName();
    /* 8045D4A0 */ void getBmdArcName();
    /* 8045D4B0 */ void getBmdName();
    /* 8045D504 */ void getDoorModelData();
    /* 8045D594 */ void CreateHeap();
    /* 8045D744 */ void calcMtx();
    /* 8045D8F4 */ void CreateInit();
    /* 8045D9A8 */ void create();
    /* 8045DA68 */ void getDemoAction();
    /* 8045DAB0 */ void demoProc();
    /* 8045DE44 */ void checkArea();
    /* 8045DF70 */ bool checkUnlock();
    /* 8045DF78 */ void actionWait();
    /* 8045DF9C */ void actionLockWait();
    /* 8045E000 */ void actionLockOff();
    /* 8045E094 */ void actionLockDemo();
    /* 8045E108 */ void actionCloseWait();
    /* 8045E1C8 */ void actionOpen();
    /* 8045E1EC */ void execute();
    /* 8045E2DC */ void checkDraw();
    /* 8045E31C */ void draw();
    /* 8045E428 */ void Delete();
};

#endif /* D_A_DOOR_DBDOOR00_H */
