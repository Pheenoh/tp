#ifndef D_A_TAG_EVENT_H
#define D_A_TAG_EVENT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_Event_c : public fopAc_ac_c {
    /* 8048AD68 */ void getEventNo();
    /* 8048AD74 */ void getSwbit();
    /* 8048AD80 */ void getSwbit2();
    /* 8048AD8C */ void getType();
    /* 8048AD98 */ void getInvalidEventFlag();
    /* 8048ADA4 */ void getAreaType();
    /* 8048ADB0 */ void getValidEventFlag();
    /* 8048ADBC */ void horseRodeo();
    /* 8048ADEC */ void arrivalTerms();
    /* 8048AEEC */ void demoInitProc();
    /* 8048AEF8 */ void demoEndProc();
    /* 8048AEFC */ void demoProc();
    /* 8048AF00 */ void create();
    /* 8048B0E4 */ void actionNext();
    /* 8048B1B0 */ void actionEvent();
    /* 8048B268 */ void actionReady();
    /* 8048B378 */ void checkArea();
    /* 8048B514 */ void actionHunt();
    /* 8048B5C8 */ void actionArrival();
    /* 8048B5F4 */ bool actionWait();
    /* 8048B5FC */ void actionHunt2();
    /* 8048B6D4 */ void execute();
    /* 8048B784 */ bool draw();
};

#endif /* D_A_TAG_EVENT_H */
