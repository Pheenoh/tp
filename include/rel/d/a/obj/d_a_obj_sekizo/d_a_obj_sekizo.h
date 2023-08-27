#ifndef D_A_OBJ_SEKIZO_H
#define D_A_OBJ_SEKIZO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_Sekizo_c : public fopAc_ac_c {
    /* 80CCDC0C */ void create();
    /* 80CCDD00 */ void CreateHeap();
    /* 80CCDD8C */ void Create();
    /* 80CCDDE8 */ void Delete();
    /* 80CCDE3C */ void Execute(f32 (**)[3][4]);
    /* 80CCDEF4 */ void Draw();
    /* 80CCDFA4 */ void initBaseMtx();
    /* 80CCDFE0 */ void setBaseMtx();
};

class daObj_Sekizo_Param_c : public fopAc_ac_c {
    /* 80CCE118 */ ~daObj_Sekizo_Param_c();
};

#endif /* D_A_OBJ_SEKIZO_H */
