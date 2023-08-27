#ifndef D_A_OBJ_ICE_S_H
#define D_A_OBJ_ICE_S_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjIce_s_c : public fopAc_ac_c {
    /* 80C209DC */ void RideOn_Angle(s16&, f32, s16, f32);
    /* 80C20A44 */ void Check_LinkRideOn(cXyz);
    /* 80C20C98 */ void Check_RideOn(cXyz);
    /* 80C20EC0 */ void initBaseMtx();
    /* 80C20EEC */ void setBaseMtx();
    /* 80C212CC */ void create();
    /* 80C2157C */ void CreateHeap();
    /* 80C215F4 */ void Create();
    /* 80C21634 */ void Execute(f32 (**)[3][4]);
    /* 80C21964 */ void Draw();
    /* 80C21A08 */ void Delete();
};

class daOBJ_ICE_S_HIO_c {
    /* 80C209AC */ daOBJ_ICE_S_HIO_c();
    /* 80C21A60 */ ~daOBJ_ICE_S_HIO_c();
};

#endif /* D_A_OBJ_ICE_S_H */
