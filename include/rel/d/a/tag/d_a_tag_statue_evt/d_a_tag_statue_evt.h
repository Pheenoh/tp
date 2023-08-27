#ifndef D_A_TAG_STATUE_EVT_H
#define D_A_TAG_STATUE_EVT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagStatue_c : public fopAc_ac_c {
    /* 805A6FC4 */ void initBaseMtx();
    /* 805A7000 */ void setBaseMtx();
    /* 805A7068 */ void Create();
    /* 805A7230 */ void CreateHeap();
    /* 805A7424 */ void create();
    /* 805A7514 */ void execute();
    /* 805A759C */ void event_proc_call();
    /* 805A76AC */ void actionWait();
    /* 805A7714 */ void actionOrderEvent();
    /* 805A77A0 */ void actionEvent();
    /* 805A7848 */ void actionDead();
    /* 805A784C */ void demoProc();
    /* 805A7A68 */ void setParticle();
    /* 805A7B24 */ void endParticle();
    /* 805A7B78 */ void checkStartDemo();
    /* 805A7CD0 */ void checkOnEffect();
    /* 805A7E94 */ void getLetterCount();
    /* 805A7F0C */ void draw();
    /* 805A7FF8 */ void _delete();
};

#endif /* D_A_TAG_STATUE_EVT_H */
