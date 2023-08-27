#ifndef D_A_OBJ_CHO_H
#define D_A_OBJ_CHO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_boomerangMove_c : public fopAc_ac_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

class daObj_ChoHIO_c {
    /* 80BCA30C */ daObj_ChoHIO_c();
    /* 80BCC4D0 */ ~daObj_ChoHIO_c();
};

class daObjCHO_c : public fopAc_ac_c {
    /* 80BCA334 */ void InitCcSph();
    /* 80BCA3A0 */ void SetCcSph();
    /* 80BCA418 */ void CreateHeap();
    /* 80BCA78C */ void SpeedSet();
    /* 80BCA88C */ void WallCheck();
    /* 80BCA924 */ void SearchLink();
    /* 80BCAB50 */ void WaitAction();
    /* 80BCAEDC */ void MoveAction();
    /* 80BCB210 */ void Action();
    /* 80BCB268 */ void ShopAction();
    /* 80BCB2AC */ void checkGroundPos();
    /* 80BCB310 */ void Insect_Release();
    /* 80BCB320 */ void Z_BufferChk();
    /* 80BCB49C */ void ParticleSet();
    /* 80BCB5C0 */ void BoomChk();
    /* 80BCB87C */ void Execute();
    /* 80BCBB40 */ void ObjHit();
    /* 80BCBCA8 */ void Delete();
    /* 80BCBD10 */ void setBaseMtx();
    /* 80BCBE70 */ void CreateChk();
    /* 80BCC01C */ void create();
};

#endif /* D_A_OBJ_CHO_H */
