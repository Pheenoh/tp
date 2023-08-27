#ifndef D_A_OBJ_GRAVE_STONE_H
#define D_A_OBJ_GRAVE_STONE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daGraveStone_c : public fopAc_ac_c {
    struct daObj_GrvStn_prtclMngr_c {
        /* 80C12EF0 */ ~daObj_GrvStn_prtclMngr_c();
        /* 80C12F2C */ daObj_GrvStn_prtclMngr_c();
    };

    /* 80C125F8 */ void setBaseMtx();
    /* 80C1266C */ void moveCalc();
    /* 80C12918 */ void setPrtcl();
    /* 80C12A38 */ void setEnvTevColor();
    /* 80C12A94 */ void setRoomNo();
    /* 80C12AD8 */ void Create();
    /* 80C12CA4 */ void CreateHeap();
    /* 80C12D1C */ void create();
    /* 80C13030 */ void Execute(f32 (**)[3][4]);
    /* 80C13078 */ void Draw();
    /* 80C1311C */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 const mCcDCyl[68];
};

#endif /* D_A_OBJ_GRAVE_STONE_H */
