#ifndef D_A_TAG_EVTMSG_H
#define D_A_TAG_EVTMSG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_EvtMsg_c : public fopAc_ac_c {
    /* 8048CF38 */ void create();
    /* 8048D014 */ bool Delete();
    /* 8048D01C */ void Execute();
    /* 8048D31C */ bool Draw();
    /* 8048D324 */ void getOnEvtBit();
    /* 8048D340 */ void getOffEvtBit();
    /* 8048D35C */ void getOnSwBit();
    /* 8048D368 */ void getOffSwBit();
    /* 8048D374 */ void getProcType();
    /* 8048D384 */ void isDelete();
    /* 8048D428 */ void chkPointInArea(cXyz);
    /* 8048D54C */ void ECut_talk(int);
    /* 8048D5CC */ void ECut_wait(int);
    /* 8048D6F0 */ ~daTag_EvtMsg_c();

    static void* mEvtCutNameList[3];
    static u8 mEvtCutList[36];
};

#endif /* D_A_TAG_EVTMSG_H */
