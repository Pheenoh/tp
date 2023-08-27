#ifndef D_A_OBJ_CDOOR_H
#define D_A_OBJ_CDOOR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjCdoor_c : public fopAc_ac_c {
    /* 80BC6DB8 */ void CreateHeap();
    /* 80BC6F30 */ void create();
    /* 80BC729C */ ~daObjCdoor_c();
    /* 80BC73C0 */ void setMatrix();
    /* 80BC7424 */ void Execute(f32 (**)[3][4]);
    /* 80BC7478 */ void execCdoor();
    /* 80BC7630 */ void execWgate();
    /* 80BC775C */ void init_modeWait();
    /* 80BC7768 */ void modeWait();
    /* 80BC776C */ void init_modeOpen();
    /* 80BC77BC */ void modeOpen();
    /* 80BC78B0 */ void init_modeClose();
    /* 80BC7900 */ void modeClose();
    /* 80BC7A14 */ void event_proc_call();
    /* 80BC7AD0 */ void actionWait();
    /* 80BC7B34 */ void actionOrderEvent();
    /* 80BC7B9C */ void actionEvent();
    /* 80BC7BF8 */ void actionDead();
    /* 80BC7C04 */ void Draw();
};

#endif /* D_A_OBJ_CDOOR_H */
