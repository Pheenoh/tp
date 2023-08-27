#ifndef D_A_OBJ_ROTBRIDGE_H
#define D_A_OBJ_ROTBRIDGE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/bg/d_bg_w.h"

class daRotBridge_c : public fopAc_ac_c {
    /* 80CBEA24 */ void setBaseMtx();
    /* 80CBEB38 */ void CreateHeap();
    /* 80CBECBC */ void create();
    /* 80CBEF1C */ void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
    /* 80CBEF34 */ void Execute(f32 (**)[3][4]);
    /* 80CBF050 */ void playerAreaCheck();
    /* 80CBF1EC */ void moveBridge();
    /* 80CBF404 */ void Draw();
    /* 80CBF4BC */ void Delete();
};

class daRotBridge_HIO_c {
    /* 80CBE98C */ daRotBridge_HIO_c();
    /* 80CBF5BC */ ~daRotBridge_HIO_c();
};

#endif /* D_A_OBJ_ROTBRIDGE_H */
