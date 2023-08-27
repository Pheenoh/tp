#ifndef D_A_OBJ_HEAVYSW_H
#define D_A_OBJ_HEAVYSW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/bg/d_bg_w.h"

class daHeavySw_c : public fopAc_ac_c {
    /* 80C1CBC8 */ void setBaseMtx();
    /* 80C1CC70 */ void CreateHeap();
    /* 80C1CCDC */ void create();
    /* 80C1CF90 */ void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
    /* 80C1CFC0 */ void Execute(f32 (**)[3][4]);
    /* 80C1D02C */ void moveSwitch();
    /* 80C1D274 */ void init_modeWait();
    /* 80C1D280 */ void modeWait();
    /* 80C1D2AC */ void init_modeRide();
    /* 80C1D2D8 */ void modeRide();
    /* 80C1D408 */ void init_modeMoveInit();
    /* 80C1D434 */ void modeMoveInit();
    /* 80C1D54C */ void init_modeMove();
    /* 80C1D588 */ void modeMove();
    /* 80C1D688 */ void init_modeMoveEnd();
    /* 80C1D788 */ void modeMoveEnd();
    /* 80C1D808 */ void Draw();
    /* 80C1D91C */ void Delete();
};

class daHeavySw_HIO_c {
    /* 80C1CAEC */ daHeavySw_HIO_c();
    /* 80C1D9D8 */ ~daHeavySw_HIO_c();
};

#endif /* D_A_OBJ_HEAVYSW_H */
