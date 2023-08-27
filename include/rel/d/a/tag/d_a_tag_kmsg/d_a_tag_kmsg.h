#ifndef D_A_TAG_KMSG_H
#define D_A_TAG_KMSG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_KMsg_c : public fopAc_ac_c {
    /* 8048DE78 */ void create();
    /* 8048DFDC */ void Delete();
    /* 8048E010 */ void Execute();
    /* 8048E8B8 */ bool Draw();
    /* 8048E8C0 */ void isDelete();
    /* 8048EA30 */ ~daTag_KMsg_c();
};

#endif /* D_A_TAG_KMSG_H */
