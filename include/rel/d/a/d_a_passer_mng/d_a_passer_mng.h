#ifndef D_A_PASSER_MNG_H
#define D_A_PASSER_MNG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPasserMng_c : public fopAc_ac_c {
    /* 80D45738 */ void execute();
    /* 80D4597C */ void getPasserParam();
    /* 80D45E14 */ void getLuggageParamHigh(u32);
    /* 80D46768 */ void create();
    /* 80D467C0 */ void create_init();

    static void* mGroupTbl[4];
};

#endif /* D_A_PASSER_MNG_H */
