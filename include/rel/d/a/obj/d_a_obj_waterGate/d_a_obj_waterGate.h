#ifndef D_A_OBJ_WATERGATE_H
#define D_A_OBJ_WATERGATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daWtGate_c : public fopAc_ac_c {
    /* 80D2BC0C */ void setBaseMtx();
    /* 80D2BC94 */ void CreateHeap();
    /* 80D2BD00 */ void create();
    /* 80D2BE7C */ void Execute(f32 (**)[3][4]);
    /* 80D2BECC */ void move();
    /* 80D2BF88 */ void init_modeWait();
    /* 80D2BF94 */ void modeWait();
    /* 80D2C010 */ void init_modeOpen();
    /* 80D2C02C */ void modeOpen();
    /* 80D2C134 */ void init_modeClose();
    /* 80D2C150 */ void modeClose();
    /* 80D2C250 */ void init_modeEnd();
    /* 80D2C25C */ void modeEnd();
    /* 80D2C260 */ void Draw();
    /* 80D2C304 */ void Delete();
};

class daWtGate_HIO_c {
    /* 80D2BB8C */ daWtGate_HIO_c();
    /* 80D2C3C0 */ ~daWtGate_HIO_c();
};

#endif /* D_A_OBJ_WATERGATE_H */