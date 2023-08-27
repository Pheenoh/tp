#ifndef D_A_DOOR_PUSH_H
#define D_A_DOOR_PUSH_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daDoorPush_c : public fopAc_ac_c {
    /* 80677E08 */ void initBaseMtx();
    /* 80677F38 */ void setBaseMtx();
    /* 8067809C */ void Create();
    /* 806781FC */ void CreateHeap();
    /* 80678318 */ void create1st();
    /* 8067839C */ void Execute(f32 (**)[3][4]);
    /* 8067840C */ void action();
    /* 80678488 */ void init_modeWait();
    /* 806784B4 */ void modeWait();
    /* 80678664 */ void event_proc_call();
    /* 80678708 */ void actionOpenWait();
    /* 8067877C */ void actionOrderEvent();
    /* 806787F8 */ void actionEvent();
    /* 80678818 */ void demoProc();
    /* 80678AEC */ void rotateInit();
    /* 80678B10 */ void rotate();
    /* 80678BC0 */ void setGoal();
    /* 80678C70 */ void Draw();
    /* 80678D2C */ void Delete();
};

#endif /* D_A_DOOR_PUSH_H */
