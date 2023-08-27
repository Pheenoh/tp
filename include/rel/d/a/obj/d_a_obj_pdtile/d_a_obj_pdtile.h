#ifndef D_A_OBJ_PDTILE_H
#define D_A_OBJ_PDTILE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjPDtile_c : public fopAc_ac_c {
    /* 80CAACE0 */ void create1st();
    /* 80CAAE80 */ void setMtx();
    /* 80CAAF90 */ void rideActor(fopAc_ac_c*);
    /* 80CAB1F0 */ void CreateHeap();
    /* 80CAB258 */ void Create();
    /* 80CAB374 */ void Execute(f32 (**)[3][4]);
    /* 80CABF50 */ void Draw();
    /* 80CAC094 */ void Delete();
    /* 80CAC374 */ ~daObjPDtile_c();
};

#endif /* D_A_OBJ_PDTILE_H */
