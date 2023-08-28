#ifndef D_A_OBJ_SHIELD_H
#define D_A_OBJ_SHIELD_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class daItemShield_c : public fopAc_ac_c {
    /* 80CD6D9C */ void initBaseMtx();
    /* 80CD6DD8 */ void setBaseMtx();
    /* 80CD7094 */ void Create();
    /* 80CD724C */ bool __CreateHeap();
    /* 80CD7254 */ void create();
    /* 80CD75EC */ void bg_check();
    /* 80CD7734 */ void action_proc_call();
    /* 80CD77F0 */ void actionInit();
    /* 80CD7828 */ void actionWaitInit();
    /* 80CD7890 */ void actionWait();
    /* 80CD7C68 */ void initActionOrderGetDemo();
    /* 80CD7D04 */ void actionOrderGetDemo();
    /* 80CD7D80 */ void actionGetDemo();
    /* 80CD7E00 */ void event_proc_call();
    /* 80CD7EBC */ void actionWaitCamDemo();
    /* 80CD7F20 */ void actionOrderCamDemo();
    /* 80CD7F88 */ void actionCamDemo();
    /* 80CD7FE4 */ void actionCamDemoEnd();
    /* 80CD7FE8 */ void execute();
    /* 80CD80EC */ void draw();
    /* 80CD8140 */ void _delete();
};

#endif /* D_A_OBJ_SHIELD_H */
