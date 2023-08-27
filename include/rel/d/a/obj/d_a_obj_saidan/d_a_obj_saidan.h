#ifndef D_A_OBJ_SAIDAN_H
#define D_A_OBJ_SAIDAN_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daSaidan_c : public fopAc_ac_c {
    /* 80CC3E28 */ void setBaseMtx();
    /* 80CC3EB0 */ void CreateHeap();
    /* 80CC3F1C */ void create();
    /* 80CC4054 */ void Execute(f32 (**)[3][4]);
    /* 80CC40A4 */ void moveProc();
    /* 80CC4148 */ void init_modeWait();
    /* 80CC4154 */ void modeWait();
    /* 80CC41B0 */ void init_modeMove();
    /* 80CC41BC */ void modeMove();
    /* 80CC4290 */ void init_modeMoveEnd();
    /* 80CC4314 */ void modeMoveEnd();
    /* 80CC4318 */ void Draw();
    /* 80CC43BC */ void Delete();
};

class daSaidan_HIO_c {
    /* 80CC3DAC */ daSaidan_HIO_c();
    /* 80CC4478 */ ~daSaidan_HIO_c();
};

#endif /* D_A_OBJ_SAIDAN_H */
