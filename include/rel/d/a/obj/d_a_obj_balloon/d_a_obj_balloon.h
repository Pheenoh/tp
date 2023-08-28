#ifndef D_A_OBJ_BALLOON_H
#define D_A_OBJ_BALLOON_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Balloon_c : public fopAc_ac_c {
    /* 80BA7FF4 */ void draw();
    /* 80BA80F4 */ void saveBestScore();
    /* 80BA810C */ void cc_set();
    /* 80BA81B8 */ void action();
    /* 80BA865C */ void mtx_set();
    /* 80BA86CC */ void execute();
    /* 80BA8734 */ void _delete();
    /* 80BA87CC */ void CreateHeap();
    /* 80BA88C4 */ void create();
};

class daObj_Balloon_HIO_c {
    /* 80BA7FAC */ daObj_Balloon_HIO_c();
    /* 80BA8D64 */ ~daObj_Balloon_HIO_c();
};

#endif /* D_A_OBJ_BALLOON_H */
