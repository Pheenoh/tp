#ifndef D_A_OBJ_LV5YCHNDLR_H
#define D_A_OBJ_LV5YCHNDLR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjYchndlr_c : public fopAc_ac_c {
    /* 80C6D758 */ void create1st();
    /* 80C6D7E0 */ void setMtx();
    /* 80C6D9A8 */ void rideActor(fopAc_ac_c*);
    /* 80C6DA5C */ void CreateHeap();
    /* 80C6DB5C */ void Create();
    /* 80C6DC64 */ void Execute(f32 (**)[3][4]);
    /* 80C6E300 */ void Draw();
    /* 80C6E3C8 */ void Delete();
    /* 80C6E808 */ ~daObjYchndlr_c();
};

#endif /* D_A_OBJ_LV5YCHNDLR_H */
