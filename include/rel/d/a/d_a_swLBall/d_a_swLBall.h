#ifndef D_A_SWLBALL_H
#define D_A_SWLBALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daSwLBall_c : public fopAc_ac_c {
    /* 80D4EB8C */ void checkArea_sub(fopAc_ac_c*);
    /* 80D4ECCC */ void checkArea();
    /* 80D4ED80 */ void search_lb();
    /* 80D4EEAC */ void Create();
    /* 80D4EEF8 */ void create();
    /* 80D4EF60 */ void execute();
    /* 80D4F008 */ void actionInit();
    /* 80D4F080 */ void actionRun();
    /* 80D4F220 */ void actionStop();
    /* 80D4F224 */ void PutCrrPos();
    /* 80D4F444 */ bool _delete();
};

#endif /* D_A_SWLBALL_H */
