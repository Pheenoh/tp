#ifndef D_A_SWBALL_H
#define D_A_SWBALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daSwBall_c : public fopAc_ac_c {
    /* 80D4E054 */ void checkArea_sub(fopAc_ac_c*);
    /* 80D4E194 */ void checkArea();
    /* 80D4E248 */ void search_ball();
    /* 80D4E374 */ void Create();
    /* 80D4E42C */ void create();
    /* 80D4E494 */ void execute();
    /* 80D4E524 */ void actionRun();
    /* 80D4E6C4 */ void actionStop();
    /* 80D4E6C8 */ void PutCrrPos();
    /* 80D4E90C */ bool _delete();
};

#endif /* D_A_SWBALL_H */
