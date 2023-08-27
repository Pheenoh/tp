#ifndef D_A_TAG_PACHI_H
#define D_A_TAG_PACHI_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagPati_c : public fopAc_ac_c {
    /* 80D5D438 */ ~daTagPati_c();
    /* 80D5D570 */ void create();
    /* 80D5D78C */ void Execute();
    /* 80D5D7C8 */ void col_set();
    /* 80D5D830 */ void chk_CoHit();
};

#endif /* D_A_TAG_PACHI_H */
