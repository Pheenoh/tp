#ifndef D_A_OBJ_TIMER_H
#define D_A_OBJ_TIMER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjTimer : public fopAc_ac_c {
    struct Act_c {
        struct Prm_e {};

        /* 80485198 */ void _create();
        /* 8048526C */ bool _delete();
        /* 80485274 */ void mode_wait_init();
        /* 80485284 */ void mode_wait();
        /* 804852E0 */ void mode_count_init();
        /* 80485324 */ void mode_count();
        /* 804854BC */ void _execute();
    };
};

#endif /* D_A_OBJ_TIMER_H */
