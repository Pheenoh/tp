#ifndef D_A_OBJ_ZRA_FREEZE_H
#define D_A_OBJ_ZRA_FREEZE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daZraFreeze_c : public fopAc_ac_c {
    /* 80D440B8 */ void setBaseMtx();
    /* 80D44124 */ void chkActorInScreen();
    /* 80D442BC */ void Create();
    /* 80D4443C */ void CreateHeap();
    /* 80D444C0 */ void setHitodamaPrtcl();
    /* 80D44698 */ void Execute();
    /* 80D449E0 */ void Draw();
    /* 80D44A84 */ void Delete();
};

class daPy_py_c : public fopAc_ac_c {
    /* 8015F424 */ void checkNowWolfEyeUp();
};

#endif /* D_A_OBJ_ZRA_FREEZE_H */
