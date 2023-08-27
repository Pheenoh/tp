#ifndef D_A_OBJ_KABUTO_H
#define D_A_OBJ_KABUTO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_boomerangMove_c : public fopAc_ac_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

class daObj_KabHIO_c {
    /* 80C2AE6C */ daObj_KabHIO_c();
    /* 80C2E068 */ ~daObj_KabHIO_c();
};

class daObjKABUTO_c : public fopAc_ac_c {
    /* 80C2AEA4 */ void InitCcSph();
    /* 80C2AF10 */ void SetCcSph();
    /* 80C2AF88 */ void CreateHeap();
    /* 80C2B36C */ void ShopWaitAction();
    /* 80C2B4D4 */ void WaitAction();
    /* 80C2B618 */ void WallCheck();
    /* 80C2B88C */ void SpeedSet();
    /* 80C2B998 */ void WallWalk();
    /* 80C2BDE8 */ void WalkAction();
    /* 80C2BFE8 */ void MoveAction();
    /* 80C2C7C8 */ void Z_BufferChk();
    /* 80C2C944 */ void Action();
    /* 80C2CA08 */ void ShopAction();
    /* 80C2CAC4 */ void Insect_Release();
    /* 80C2CADC */ void ParticleSet();
    /* 80C2CC18 */ void Execute();
    /* 80C2D21C */ void ObjHit();
    /* 80C2D3A4 */ void Delete();
    /* 80C2D40C */ void setBaseMtx();
    /* 80C2D578 */ void CreateChk();
    /* 80C2D724 */ void create();
};

#endif /* D_A_OBJ_KABUTO_H */
