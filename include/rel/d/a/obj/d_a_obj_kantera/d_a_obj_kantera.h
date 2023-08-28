#ifndef D_A_OBJ_KANTERA_H
#define D_A_OBJ_KANTERA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daItemKantera_c : public fopAc_ac_c {
    /* 80C389BC */ void initBaseMtx();
    /* 80C389F8 */ void setBaseMtx();
    /* 80C38A64 */ void Create();
    /* 80C38BA8 */ bool __CreateHeap();
    /* 80C38BB0 */ void create();
    /* 80C38F78 */ void bg_check();
    /* 80C39068 */ void actionInit();
    /* 80C390A0 */ void actionWaitInit();
    /* 80C3911C */ void actionWait();
    /* 80C39234 */ void initActionOrderGetDemo();
    /* 80C392D0 */ void actionOrderGetDemo();
    /* 80C3934C */ void actionGetDemo();
    /* 80C393B0 */ void execute();
    /* 80C394DC */ void draw();
    /* 80C39530 */ void _delete();
};

#endif /* D_A_OBJ_KANTERA_H */
