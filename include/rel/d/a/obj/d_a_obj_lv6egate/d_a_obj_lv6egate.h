#ifndef D_A_OBJ_LV6EGATE_H
#define D_A_OBJ_LV6EGATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjLv6EGate_c : public fopAc_ac_c {
    /* 80C82078 */ void create1st();
    /* 80C82108 */ void setMtx();
    /* 80C82178 */ bool CreateHeap();
    /* 80C82180 */ void Create();
    /* 80C822DC */ void offDisp();
    /* 80C82330 */ void onDisp();
    /* 80C82388 */ void Execute(f32 (**)[3][4]);
    /* 80C82690 */ void Draw();
    /* 80C826A0 */ void Delete();
    /* 80C82A80 */ ~daObjLv6EGate_c();
};

#endif /* D_A_OBJ_LV6EGATE_H */
