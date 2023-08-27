#ifndef D_A_ANDSW2_H
#define D_A_ANDSW2_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daAndsw2_c : public fopAc_ac_c {
    /* 804D5DF8 */ void getEventNo();
    /* 804D5E04 */ void getSwbit();
    /* 804D5E10 */ void getSwbit2();
    /* 804D5E1C */ void getType();
    /* 804D5E28 */ void getTimer();
    /* 804D5E34 */ void getNum();
    /* 804D5E40 */ void getTopSw();
    /* 804D5EB0 */ void getSwAns();
    /* 804D5EBC */ void chkAllSw2();
    /* 804D5F64 */ void chkSwStatus();
    /* 804D6024 */ void chkSwStatus2();
    /* 804D60CC */ ~daAndsw2_c();
    /* 804D6120 */ void create();
};

#endif /* D_A_ANDSW2_H */
