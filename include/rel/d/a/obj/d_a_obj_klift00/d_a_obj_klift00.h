#ifndef D_A_OBJ_KLIFT00_H
#define D_A_OBJ_KLIFT00_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjKLift00_c : public fopAc_ac_c {
    struct ChainPos {
        /* 8058C338 */ ~ChainPos();
        /* 8058C374 */ ChainPos();
    };

    /* 8058B02C */ void create1st();
    /* 8058B0D0 */ void setMtx();
    /* 8058B4B0 */ void rideActor(fopAc_ac_c*);
    /* 8058B5EC */ void CreateHeap();
    /* 8058B77C */ void Create();
    /* 8058B97C */ void Execute(f32 (**)[3][4]);
    /* 8058BEEC */ void Draw();
    /* 8058C014 */ void Delete();
};

#endif /* D_A_OBJ_KLIFT00_H */
