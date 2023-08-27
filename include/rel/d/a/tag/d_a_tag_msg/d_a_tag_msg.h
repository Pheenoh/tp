#ifndef D_A_TAG_MSG_H
#define D_A_TAG_MSG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_Msg_c : public fopAc_ac_c {
    /* 8048F7F8 */ ~daTag_Msg_c();
    /* 8048F878 */ void create();
    /* 8048F954 */ void createHeap();
    /* 8048F9B4 */ void destroy();
    /* 8048F9E8 */ void execute();
    /* 8048FC68 */ bool draw();
    /* 8048FC70 */ void rangeCheck();
    /* 8048FE18 */ void otherCheck();
    /* 8048FF8C */ void getResName();
    /* 8048FF9C */ void getParam();
    /* 8049004C */ void cut_speak(int, int);

    static void* mEvtCutTBL[2];
};

class daTag_Msg_Param_c : public fopAc_ac_c {
    /* 80490128 */ ~daTag_Msg_Param_c();

    static u8 const m[1 + 3 /* padding */];
};

#endif /* D_A_TAG_MSG_H */
