#ifndef D_A_OBJ_DMELEVATOR_H
#define D_A_OBJ_DMELEVATOR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjDmElevator_c : public fopAc_ac_c {
    /* 80BDDD38 */ void initBaseMtx();
    /* 80BDDD90 */ void setBaseMtx();
    /* 80BDDEFC */ void Create();
    /* 80BDE0A4 */ void init();
    /* 80BDE2F8 */ void CreateHeap();
    /* 80BDE448 */ void create1st();
    /* 80BDE500 */ void Execute(f32 (**)[3][4]);
    /* 80BDE5F8 */ void setting_ride_flag();
    /* 80BDE6FC */ void event_sw_proc_call();
    /* 80BDE7A0 */ void actionSwPauseNoneInit();
    /* 80BDE7AC */ void actionSwPauseNone();
    /* 80BDE7B0 */ void actionSwPauseOrderInit();
    /* 80BDE808 */ void actionSwPauseOrder();
    /* 80BDE83C */ void actionSwPauseInit();
    /* 80BDE868 */ void actionSwPause();
    /* 80BDE8D0 */ void calc_top_pos();
    /* 80BDE960 */ void mode_sw_proc_call();
    /* 80BDEA1C */ void modeSwWaitLowerInit();
    /* 80BDEA44 */ void modeSwWaitLower();
    /* 80BDEB88 */ void modeSwLowerInit();
    /* 80BDEC10 */ void modeSwLower();
    /* 80BDEC94 */ void modeSwWaitUpperInit();
    /* 80BDECB4 */ void modeSwWaitUpper();
    /* 80BDECE0 */ void modeSwUpperInit();
    /* 80BDED64 */ void modeSwUpper();
    /* 80BDEDE0 */ void event_proc_call();
    /* 80BDEECC */ void actionWait();
    /* 80BDEF60 */ void actionOrderEvent();
    /* 80BDF000 */ void actionEvent();
    /* 80BDF068 */ void actionStartEvent();
    /* 80BDF0A0 */ void actionMoveStart();
    /* 80BDF168 */ void actionDead();
    /* 80BDF16C */ void demoProc();
    /* 80BDF320 */ void moveInit();
    /* 80BDF3B8 */ void moveProc();
    /* 80BDF618 */ void Draw();
    /* 80BDF6DC */ void Delete();
};

#endif /* D_A_OBJ_DMELEVATOR_H */
