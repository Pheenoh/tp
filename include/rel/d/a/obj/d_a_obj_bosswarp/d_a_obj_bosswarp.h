#ifndef D_A_OBJ_BOSSWARP_H
#define D_A_OBJ_BOSSWARP_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class daObjBossWarp_c : public fopAc_ac_c {
    /* 80579700 */ void initBaseMtx();
    /* 80579748 */ void setBaseMtx();
    /* 805797B8 */ void Create();
    /* 80579934 */ void CreateHeap();
    /* 80579B70 */ void create();
    /* 80579C30 */ void appear(int);
    /* 80579D98 */ void set_appear();
    /* 80579E08 */ void disappear(int);
    /* 80579E5C */ void checkDistance();
    /* 80579FF8 */ void execute();
    /* 8057A390 */ void event_proc_call();
    /* 8057A4F4 */ void actionWait();
    /* 8057A54C */ void actionOrderEvent();
    /* 8057A610 */ void actionEvent();
    /* 8057A678 */ void actionWaitWarp();
    /* 8057A6E0 */ void actionOrderWarpEvent();
    /* 8057A778 */ void actionWarpEvent();
    /* 8057A7C4 */ void actionDead();
    /* 8057A7C8 */ void actionOrderChkEvent();
    /* 8057A8B4 */ void actionChkEvent();
    /* 8057A994 */ void actionOrderCancelEvent();
    /* 8057AA2C */ void actionCancelEvent();
    /* 8057AA94 */ void demoProc();
    /* 8057B0D8 */ void setGoal();
    /* 8057B190 */ void draw();
    /* 8057B23C */ void _delete();
};

#endif /* D_A_OBJ_BOSSWARP_H */
