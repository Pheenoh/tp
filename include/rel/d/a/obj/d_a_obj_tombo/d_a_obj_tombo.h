#ifndef D_A_OBJ_TOMBO_H
#define D_A_OBJ_TOMBO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_TomHIO_c {
    /* 80D191CC */ daObj_TomHIO_c();
    /* 80D1B618 */ ~daObj_TomHIO_c();
};

class daObjTOMBO_c : public fopAc_ac_c {
    /* 80D19200 */ void InitCcSph();
    /* 80D1926C */ void SetCcSph();
    /* 80D192E4 */ void CreateHeap();
    /* 80D19658 */ void WaitAction();
    /* 80D19744 */ void SpeedSet();
    /* 80D19834 */ void CheckWater();
    /* 80D199F4 */ void CheckGround();
    /* 80D19B48 */ void CheckWall();
    /* 80D19C34 */ void SearchLink();
    /* 80D19E48 */ void LinkAction();
    /* 80D1A138 */ void MoveAction();
    /* 80D1A280 */ void Action();
    /* 80D1A3EC */ void ShopAction();
    /* 80D1A514 */ void Insect_Release();
    /* 80D1A524 */ void ParticleSet();
    /* 80D1A648 */ void BoomChk();
    /* 80D1A904 */ void Execute();
    /* 80D1AB20 */ void ObjHit();
    /* 80D1AC84 */ void Z_BufferChk();
    /* 80D1AE00 */ void Delete();
    /* 80D1AE68 */ void setBaseMtx();
    /* 80D1AFC8 */ void CreateChk();
    /* 80D1B174 */ void create();
};

#endif /* D_A_OBJ_TOMBO_H */