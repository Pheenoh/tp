#ifndef D_A_OBJ_KATATSUMURI_H
#define D_A_OBJ_KATATSUMURI_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_boomerangMove_c : public fopAc_ac_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

class daObj_KatHIO_c {
    /* 80C3996C */ daObj_KatHIO_c();
    /* 80C3C5CC */ ~daObj_KatHIO_c();
};

class daObjKAT_c : public fopAc_ac_c {
    /* 80C39994 */ void InitCcSph();
    /* 80C39A00 */ void SetCcSph();
    /* 80C39A58 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 80C39B98 */ void CreateHeap();
    /* 80C39F0C */ void WallWalk();
    /* 80C3A4D8 */ void MoveAction();
    /* 80C3A628 */ void Action();
    /* 80C3A680 */ void Insect_Release();
    /* 80C3A698 */ void checkGround();
    /* 80C3A8C8 */ void F_MoveAction();
    /* 80C3A95C */ void FallAction();
    /* 80C3A990 */ void ParticleSet();
    /* 80C3AAB4 */ void BoomChk();
    /* 80C3ADC8 */ void ObjHit();
    /* 80C3AEC8 */ void Execute();
    /* 80C3B754 */ void Z_BufferChk();
    /* 80C3B8D0 */ void Delete();
    /* 80C3B938 */ void setBaseMtx();
    /* 80C3BAAC */ void CreateChk();
    /* 80C3BC58 */ void create();
};

#endif /* D_A_OBJ_KATATSUMURI_H */
