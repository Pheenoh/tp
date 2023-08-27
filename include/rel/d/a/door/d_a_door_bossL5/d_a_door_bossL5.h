#ifndef D_A_DOOR_BOSSL5_H
#define D_A_DOOR_BOSSL5_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBdoorL5_c : public fopAc_ac_c {
    /* 80670C38 */ void getArcName();
    /* 80670C44 */ void getAlwaysArcName();
    /* 80670C54 */ void getBmd();
    /* 80670C64 */ void getDzb();
    /* 80670C74 */ void getAnmArcName();
    /* 80670C84 */ s32 getOpenAnm();
    /* 80670C8C */ s32 getCloseAnm();
    /* 80670C94 */ void getDoorModelData();
    /* 80670D10 */ void CreateHeap();
    /* 80670F08 */ void calcMtx();
    /* 80670F5C */ void CreateInit();
    /* 8067106C */ void create();
    /* 806712DC */ void getDemoAction();
    /* 80671324 */ void demoProc();
    /* 806715D0 */ void openInit();
    /* 80671670 */ void openProc();
    /* 80671718 */ bool openEnd();
    /* 80671720 */ void closeInit();
    /* 806717FC */ void closeProc();
    /* 80671820 */ void closeEnd();
    /* 80671878 */ void unlockInit();
    /* 80671954 */ void calcGoal(cXyz*, int);
    /* 80671A7C */ void smokeInit();
    /* 80671B14 */ void createKey();
    /* 80671C14 */ void checkArea();
    /* 80671D44 */ void checkFront();
    /* 80671DE4 */ void checkOpen();
    /* 80671E70 */ bool actionWait();
    /* 80671E78 */ void actionCloseWait();
    /* 80671F58 */ void actionOpen();
    /* 80672004 */ void actionEnd();
    /* 80672164 */ void execute();
    /* 8067228C */ void draw();
    /* 80672374 */ void Delete();
};

#endif /* D_A_DOOR_BOSSL5_H */
