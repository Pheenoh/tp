#ifndef D_A_OBJ_BSGATE_H
#define D_A_OBJ_BSGATE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBsGate_c : public fopAc_ac_c {
    /* 80BC2910 */ void setBaseMtx();
    /* 80BC29AC */ void CreateHeap();
    /* 80BC2A18 */ void create();
    /* 80BC2B6C */ void Execute(f32 (**)[3][4]);
    /* 80BC2BBC */ void moveGate();
    /* 80BC2CC4 */ void init_modeWait();
    /* 80BC2CD0 */ void modeWait();
    /* 80BC2CD4 */ void init_modeOpen();
    /* 80BC2CE0 */ void modeOpen();
    /* 80BC2E34 */ void init_modeClose();
    /* 80BC2E40 */ void modeClose();
    /* 80BC2F94 */ void Draw();
    /* 80BC3038 */ void Delete();
};

class daBsGate_HIO_c {
    /* 80BC288C */ daBsGate_HIO_c();
    /* 80BC30F4 */ ~daBsGate_HIO_c();
};

#endif /* D_A_OBJ_BSGATE_H */
