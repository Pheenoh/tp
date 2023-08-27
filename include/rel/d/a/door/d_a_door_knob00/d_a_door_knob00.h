#ifndef D_A_DOOR_KNOB00_H
#define D_A_DOOR_KNOB00_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daKnob20_c : public fopAc_ac_c {
    /* 8045E888 */ void getAlwaysArcName();
    /* 8045E898 */ void getEvArcName();
    /* 8045E8A8 */ void getDzb();
    /* 8045E8B8 */ void getDummyBmd();
    /* 8045E8C8 */ void getBmd();
    /* 8045E91C */ void getDoorModelData();
    /* 8045E960 */ void CreateHeap();
    /* 8045EBA0 */ void calcMtx();
    /* 8045EC44 */ void CreateInit();
    /* 8045ED1C */ void create();
    /* 8045EE5C */ void checkOpenDoor(int*);
    /* 8045EEE4 */ void setActionFromFlow();
    /* 8045EFCC */ void setEventId();
    /* 8045F058 */ void checkArea(f32, f32, f32);
    /* 8045F29C */ void setEventPrm();
    /* 8045F428 */ void releaseBG();
    /* 8045F478 */ void frontCheck();
    /* 8045F520 */ void getDemoAction();
    /* 8045F568 */ void demoProc();
    /* 8045F8A4 */ void setStart(f32, f32);
    /* 8045F94C */ void setAngle();
    /* 8045F968 */ void adjustmentProc();
    /* 8045FA98 */ void openInit(int);
    /* 8045FBF8 */ void openProc(int);
    /* 8045FCA4 */ void openEnd(int);
    /* 8045FDF8 */ void initOpenDemo();
    /* 8045FE68 */ void startDemoProc();
    /* 8045FF08 */ void actionWait();
    /* 8045FFB0 */ void actionSpecialDemo();
    /* 8046002C */ void actionDemo();
    /* 804600C0 */ void actionTalk();
    /* 8046012C */ void actionTalkWait();
    /* 804601D4 */ void actionTalkOpen();
    /* 8046027C */ void actionInit();
    /* 804602D8 */ bool actionDead();
    /* 804602E0 */ void execute();
    /* 8046045C */ void draw();
    /* 80460550 */ void Delete();
};

#endif /* D_A_DOOR_KNOB00_H */
