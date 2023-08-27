#ifndef D_A_DOOR_MBOSSL1_H
#define D_A_DOOR_MBOSSL1_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class dDoor_stop2_c {
    /* 806728B4 */ void calcMtx(fopAc_ac_c*);
    /* 80672970 */ void closeInit(fopAc_ac_c*, u8);
    /* 80672AE4 */ void closeProc(fopAc_ac_c*);
    /* 80672B70 */ void openInit(fopAc_ac_c*, u8);
    /* 80672CD8 */ void openProc(fopAc_ac_c*);
    /* 80672D80 */ void create(J3DModelData*);
    /* 80672DCC */ void draw(fopAc_ac_c*);
    /* 80672E44 */ void getHeight();
};

class daMBdoorL1_c : public fopAc_ac_c {
    /* 80672E70 */ void getAnmArcName();
    /* 80672EE8 */ void getArcName();
    /* 80672F74 */ void getAlwaysArcName();
    /* 80672F84 */ void getDoorType();
    /* 80672FE4 */ void getOpenAnm();
    /* 80673048 */ void getCloseAnm();
    /* 806730AC */ void getBmd();
    /* 80673100 */ void getBtk();
    /* 80673110 */ void getDzb();
    /* 80673140 */ void getDoorModelData();
    /* 80673164 */ void CreateHeap();
    /* 806735F8 */ void calcMtx();
    /* 80673790 */ void createKey();
    /* 806738CC */ void CreateInit();
    /* 80673B9C */ void create();
    /* 80673E78 */ void getDemoAction();
    /* 80673EC0 */ void demoProc();
    /* 80674AF4 */ void openInit();
    /* 80674DA4 */ void openProc();
    /* 80674FDC */ void openEnd();
    /* 80675068 */ void closeInit();
    /* 806752BC */ void closeProc();
    /* 80675304 */ void closeEnd();
    /* 806753CC */ void unlockInit();
    /* 80675414 */ void unlock();
    /* 80675470 */ void openInitKnob(int);
    /* 80675678 */ void openProcKnob(int);
    /* 80675734 */ void openEndKnob(int);
    /* 80675894 */ void calcGoal(cXyz*, int);
    /* 806759E4 */ void setAngle();
    /* 80675ADC */ void setAngleQuickly();
    /* 80675B30 */ void adjustmentProc();
    /* 80675DB0 */ void setPos();
    /* 80675EE4 */ void setStart(f32, f32);
    /* 80676004 */ void smokeInit2();
    /* 806760B4 */ void checkArea();
    /* 806762A4 */ void checkFront();
    /* 80676308 */ void checkOpen();
    /* 806764D0 */ void checkFrontKey();
    /* 80676568 */ bool checkBackKey();
    /* 80676570 */ void checkFrontStop();
    /* 80676610 */ void checkBackStop();
    /* 806766B0 */ void checkFrontSw();
    /* 80676744 */ void checkBackSw();
    /* 806767D8 */ void checkStopOpen();
    /* 8067684C */ void startDemoEnd();
    /* 806769A4 */ void checkMBossRoom();
    /* 806769D0 */ void checkStopClose();
    /* 80676AB4 */ void checkMakeStop();
    /* 80676B64 */ void checkMakeKey();
    /* 80676BE0 */ bool actionWait();
    /* 80676BE8 */ void actionCloseWait();
    /* 80676DEC */ void actionStopClose();
    /* 80676E40 */ void actionDemo();
    /* 80676EB4 */ void actionOpen();
    /* 80676ED8 */ void actionInit();
    /* 80676FE4 */ void actionStartDemo();
    /* 80677050 */ void execute();
    /* 80677158 */ void draw();
    /* 806771B4 */ void draw_sub0();
    /* 806772C4 */ void draw_sub1();
    /* 806773DC */ void Delete();
};

#endif /* D_A_DOOR_MBOSSL1_H */
