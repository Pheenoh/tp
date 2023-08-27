#ifndef D_A_TAG_RIVER_BACK_H
#define D_A_TAG_RIVER_BACK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagRiverBack_c : public fopAc_ac_c {
    /* 80D5F2F8 */ void Create();
    /* 80D5F360 */ void create();
    /* 80D5F3F0 */ void execute();
    /* 80D5F48C */ void event_proc_call();
    /* 80D5F548 */ void actionWait();
    /* 80D5F5BC */ void actionOrderEvent();
    /* 80D5F66C */ void actionEvent();
    /* 80D5F70C */ void actionDead();
    /* 80D5F710 */ void demoProc();
    /* 80D5F88C */ void _delete();
};

#endif /* D_A_TAG_RIVER_BACK_H */
