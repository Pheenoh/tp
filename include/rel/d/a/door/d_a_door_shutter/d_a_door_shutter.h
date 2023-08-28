#ifndef D_A_DOOR_SHUTTER_H
#define D_A_DOOR_SHUTTER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daDoor20_c : public fopAc_ac_c {
    /* 80460B38 */ void getStopBmdName();
    /* 80460B70 */ void getStopModelData();
    /* 80460B94 */ void getAlwaysArcName();
    /* 80460BA4 */ void getArcName();
    /* 80460C40 */ void getBmdName();
    /* 80460CF0 */ void getBtk();
    /* 80460D00 */ void getDzbName();
    /* 80460D5C */ void getModelData();
    /* 80460D80 */ void getSize2X();
    /* 80460DAC */ void CreateHeap();
    /* 8046129C */ void setEventPrm();
    /* 804616EC */ void checkOpenMsgDoor(int*);
    /* 8046178C */ void adjustmentAngle();
    /* 80461874 */ void adjustmentProc();
    /* 80461A44 */ void setAngle();
    /* 80461A60 */ void openInit_0();
    /* 80461D24 */ void openInit_1();
    /* 80461EC4 */ void openInit(int);
    /* 80461F60 */ void openProc(int);
    /* 804622A8 */ void openEnd_0();
    /* 804622AC */ void openEnd_1();
    /* 80462328 */ void openEnd(int);
    /* 80462398 */ void closeInit_0();
    /* 8046266C */ void closeInit_1();
    /* 80462738 */ void closeInit(int);
    /* 804627C4 */ void closeProc(int);
    /* 804627E8 */ void closeEnd_0();
    /* 804627EC */ void closeEnd_1();
    /* 80462868 */ void closeEnd(int);
    /* 80462928 */ void openInit2();
    /* 80462A1C */ void closeEnd2();
    /* 80462A5C */ void calcMtx_2();
    /* 80462B58 */ void calcMtx();
    /* 80462C2C */ void CreateInit();
    /* 80462EB4 */ void setKey();
    /* 80462F2C */ void create();
    /* 80462FE0 */ void demoProc();
    /* 80463E30 */ void orderStopEvent();
    /* 80463FBC */ void actionWait();
    /* 80464118 */ void actionStopClose();
    /* 8046416C */ void actionDemo();
    /* 804641EC */ void actionInit();
    /* 80464240 */ void execute();
    /* 804643B0 */ void draw();
    /* 80464638 */ void setDoorAngleSpec();
    /* 804647BC */ void _delete();
    /* 80464858 */ void createKey();
    /* 80464AE4 */ void deleteKey();
    /* 80464B3C */ void adjoinPlayer();
    /* 80464BD8 */ void frontCheckOld();
    /* 80464C68 */ void frontCheck();
    /* 80464CEC */ void drawCheck(int);
    /* 80464E18 */ void checkExecute();
    /* 80464EC4 */ void startDemoProc();
    /* 80464F64 */ void makeEventId();
    /* 804653B0 */ void initProc();
    /* 80465400 */ void initOpenDemo(int);
    /* 80465490 */ void checkArea(f32, f32, f32);
    /* 80465620 */ void openInitCom(int);
    /* 804656F0 */ void closeEndCom();
    /* 8046581C */ void getRestartPos(cXyz*);
    /* 80465918 */ void getDemoAction();
    /* 80465960 */ void setGoal();
    /* 80465AC0 */ void chkMakeStop();
    /* 80465B34 */ void chkStopF();
    /* 80465C04 */ void chkStopB();
    /* 80465CC0 */ void setStopDemo();
    /* 80465DA8 */ void chkStopClose();
    /* 80465E8C */ void setStop();
    /* 80465F20 */ void chkStopOpen();
    /* 8046609C */ void chkMakeKey();
};

class dDoor_stop_c {
    /* 804660F4 */ void calcMtx(daDoor20_c*);
    /* 804661B0 */ void closeInit(daDoor20_c*);
    /* 804662C0 */ void closeProc(daDoor20_c*);
    /* 8046634C */ void openInit(daDoor20_c*);
    /* 80466458 */ void openProc(daDoor20_c*);
    /* 804664E8 */ void create(daDoor20_c*);
    /* 80466538 */ void draw(daDoor20_c*);
};

#endif /* D_A_DOOR_SHUTTER_H */
