#ifndef D_A_DOOR_BOSSL1_H
#define D_A_DOOR_BOSSL1_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBdoorL1_c : public fopAc_ac_c {
    /* 804E1E2C */ void getDoorEventName();
    /* 804E1EE8 */ void getDoorEventName2();
    /* 804E1FA4 */ void getArcName();
    /* 804E2060 */ void getAnmArcName();
    /* 804E20C4 */ void getDoorType();
    /* 804E2104 */ void getOpenAnm();
    /* 804E2158 */ void getCloseAnm();
    /* 804E21AC */ void getAlwaysArcName();
    /* 804E21BC */ void getBmd();
    /* 804E21CC */ void getDzb();
    /* 804E21DC */ void getDoorModelData();
    /* 804E2258 */ void CreateHeap();
    /* 804E2578 */ void calcMtx();
    /* 804E2754 */ void CreateInit();
    /* 804E28E4 */ void create();
    /* 804E2B78 */ void getDemoAction();
    /* 804E2BC0 */ void demoProc();
    /* 804E3180 */ void openInit();
    /* 804E357C */ void openProc();
    /* 804E3794 */ void openEnd();
    /* 804E3850 */ void closeInit();
    /* 804E3A2C */ void closeProc();
    /* 804E3C0C */ bool closeEnd();
    /* 804E3C14 */ void unlockInit();
    /* 804E3CCC */ void setPos();
    /* 804E3DE8 */ void calcGoal(cXyz*, int);
    /* 804E3F10 */ void setAngle();
    /* 804E3FF8 */ void createKey();
    /* 804E4100 */ void smokeInit();
    /* 804E4104 */ void deleteEmitter();
    /* 804E4158 */ void checkArea();
    /* 804E432C */ void checkFront();
    /* 804E43A0 */ void checkOpen();
    /* 804E4414 */ bool actionWait();
    /* 804E441C */ void actionCloseWait();
    /* 804E44B4 */ void actionOpen();
    /* 804E44EC */ void actionEnd();
    /* 804E464C */ void execute();
    /* 804E476C */ void draw();
    /* 804E48BC */ void Delete();
};

#endif /* D_A_DOOR_BOSSL1_H */
