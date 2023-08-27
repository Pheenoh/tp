#ifndef D_A_TAG_MYNA_LIGHT_H
#define D_A_TAG_MYNA_LIGHT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_MynaLight_c : public fopAc_ac_c {
    /* 80D5CB38 */ void create();
    /* 80D5CB9C */ void Delete();
    /* 80D5CBF4 */ void Execute();
    /* 80D5CD94 */ void Draw();
    /* 80D5CE40 */ void setTurnOnOffChange();
    /* 80D5D148 */ void getTurnOnTime();
    /* 80D5D154 */ void getTurnOffTime();
    /* 80D5D160 */ void initialize();
    /* 80D5D298 */ ~daTag_MynaLight_c();
};

#endif /* D_A_TAG_MYNA_LIGHT_H */
