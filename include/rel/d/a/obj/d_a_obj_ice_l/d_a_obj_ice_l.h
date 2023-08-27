#ifndef D_A_OBJ_ICE_L_H
#define D_A_OBJ_ICE_L_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjIce_l_c : public fopAc_ac_c {
    /* 80C1F9F8 */ void RideOn_Angle(s16&, f32, s16, f32);
    /* 80C1FA60 */ void Check_RideOn(cXyz);
    /* 80C1FCCC */ void initBaseMtx();
    /* 80C1FCF8 */ void setBaseMtx();
    /* 80C200CC */ void create();
    /* 80C2030C */ void CreateHeap();
    /* 80C20384 */ void Create();
    /* 80C203C4 */ void Execute(f32 (**)[3][4]);
    /* 80C206AC */ void Draw();
    /* 80C20750 */ void Delete();
};

#endif /* D_A_OBJ_ICE_L_H */
