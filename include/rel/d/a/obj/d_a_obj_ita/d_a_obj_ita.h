#ifndef D_A_OBJ_ITA_H
#define D_A_OBJ_ITA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_ITA_HIO_c {
    /* 80C2836C */ daObj_ITA_HIO_c();
    /* 80C29184 */ ~daObj_ITA_HIO_c();
};

class daObjIta_c : public fopAc_ac_c {
    /* 80C283AC */ void Search_Ymb();
    /* 80C28674 */ void Check_RideOn();
    /* 80C28788 */ void initBaseMtx();
    /* 80C287B4 */ void setBaseMtx();
    /* 80C28928 */ void create();
    /* 80C28BB0 */ void CreateHeap();
    /* 80C28C28 */ void Create();
    /* 80C28C70 */ void Execute(f32 (**)[3][4]);
    /* 80C290AC */ void Draw();
    /* 80C29150 */ void Delete();
};

#endif /* D_A_OBJ_ITA_H */