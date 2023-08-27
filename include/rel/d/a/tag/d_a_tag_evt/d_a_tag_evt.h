#ifndef D_A_TAG_EVT_H
#define D_A_TAG_EVT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_Evt_c : public fopAc_ac_c {
    /* 8048B918 */ void create();
    /* 8048B9D8 */ void destroy();
    /* 8048BA0C */ void execute();
    /* 8048BE44 */ bool draw();
    /* 8048BE4C */ void getParam();
    /* 8048BF64 */ void isDelete();
    /* 8048C090 */ void doEvtCutWait(int);
    /* 8048C124 */ void doEvtCutTalk(int);
    /* 8048C1C8 */ void doEvtCutNext(int);
    /* 8048C304 */ ~daTag_Evt_c();

    static void* mEvtCutList[3];
};

#endif /* D_A_TAG_EVT_H */
