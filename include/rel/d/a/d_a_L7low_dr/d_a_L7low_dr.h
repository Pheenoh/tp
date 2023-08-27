#ifndef D_A_L7LOW_DR_H
#define D_A_L7LOW_DR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daL7lowDr_c : public fopAc_ac_c {
    /* 805AA5F8 */ void setAction(void (daL7lowDr_c::*)());
    /* 805AA69C */ void action();
    /* 805AA748 */ void _delete();
    /* 805AA7B8 */ void mtx_set();
    /* 805AA828 */ void fly();
    /* 805AABF8 */ void execute();
    /* 805AAC5C */ void CreateHeap();
    /* 805AAD58 */ void create();
    /* 805AAEA8 */ void draw();
};

#endif /* D_A_L7LOW_DR_H */
