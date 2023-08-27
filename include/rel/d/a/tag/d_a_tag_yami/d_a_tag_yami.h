#ifndef D_A_TAG_YAMI_H
#define D_A_TAG_YAMI_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagYami_c : public fopAc_ac_c {
    /* 80D659F8 */ void create();
    /* 80D65C24 */ void Execute();
    /* 80D65C60 */ void calcCoC(cXyz&);
    /* 80D65D08 */ void col_set();
    /* 80D65D0C */ void chk_CoHit();
    /* 80D65D60 */ void getPlDist();
    /* 80D65EEC */ void onMidnaTagSw();
    /* 80D65F24 */ void offMidnaTagSw2();
    /* 80D66100 */ void setCoC(cXyz);
};

#endif /* D_A_TAG_YAMI_H */
