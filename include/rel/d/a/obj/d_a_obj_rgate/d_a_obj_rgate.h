#ifndef D_A_OBJ_RGATE_H
#define D_A_OBJ_RGATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjRgate_c : public fopAc_ac_c {
    /* 80CB9DF8 */ void initBaseMtx();
    /* 80CB9F4C */ void setBaseMtx();
    /* 80CBA468 */ void Create();
    /* 80CBA654 */ void CreateHeap();
    /* 80CBA828 */ void create1st();
    /* 80CBA8A8 */ void checkAreaL(cXyz const*, cXyz const*);
    /* 80CBAC38 */ void checkAreaR(cXyz const*, cXyz const*);
    /* 80CBAFC4 */ void checkOpen();
    /* 80CBB0F0 */ void checkDirL(fopAc_ac_c*);
    /* 80CBB180 */ void checkDirR(fopAc_ac_c*);
    /* 80CBB210 */ void setAtkSE();
    /* 80CBB28C */ void setCrkSE();
    /* 80CBB308 */ void action();
    /* 80CBB370 */ void action_typeA();
    /* 80CBBA10 */ void actionWaitEvent();
    /* 80CBBAF4 */ void actionEvent();
    /* 80CBBB5C */ void actionDead();
    /* 80CBBB60 */ void event_proc_call();
    /* 80CBBC04 */ void demoProc();
    /* 80CBBD68 */ void getDemoAction();
    /* 80CBBDB0 */ void Execute(f32 (**)[3][4]);
    /* 80CBBE18 */ void Draw();
    /* 80CBBF34 */ void Delete();
};

#endif /* D_A_OBJ_RGATE_H */
