#ifndef D_A_OBJ_SPINLIFT_H
#define D_A_OBJ_SPINLIFT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daSpinLift_c : public fopAc_ac_c {
    /* 80CE3E2C */ void setBaseMtx();
    /* 80CE3E9C */ void CreateHeap();
    /* 80CE3F1C */ void create();
    /* 80CE40FC */ void Execute(f32 (**)[3][4]);
    /* 80CE414C */ void moveLift();
    /* 80CE4290 */ void init_modeWait();
    /* 80CE429C */ void modeWait();
    /* 80CE42A0 */ void init_modeUpMove();
    /* 80CE42C4 */ void modeUpMove();
    /* 80CE468C */ void init_modeDownMove();
    /* 80CE4698 */ void modeDownMove();
    /* 80CE4790 */ void init_modeMoveEnd();
    /* 80CE4A9C */ void modeMoveEnd();
    /* 80CE4AA0 */ void Draw();
    /* 80CE4B44 */ void Delete();
};

class daSpinLift_HIO_c {
    /* 80CE3DAC */ daSpinLift_HIO_c();
    /* 80CE4C10 */ ~daSpinLift_HIO_c();
};

#endif /* D_A_OBJ_SPINLIFT_H */