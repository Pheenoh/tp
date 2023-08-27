#ifndef D_A_TAG_ATTACK_ITEM_H
#define D_A_TAG_ATTACK_ITEM_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagAtkItem_c : public fopAc_ac_c {
    /* 805A2958 */ void setBaseMtx();
    /* 805A2990 */ void Create();
    /* 805A2A34 */ void create();
    /* 805A2C48 */ void execute();
    /* 805A2CA8 */ void action();
    /* 805A2D10 */ void eventStart();
    /* 805A2D34 */ void eventEnd();
    /* 805A2D58 */ void checkHit();
    /* 805A2F54 */ void createItem();
    /* 805A3038 */ bool _delete();
    /* 805A3118 */ ~daTagAtkItem_c();
};

#endif /* D_A_TAG_ATTACK_ITEM_H */
