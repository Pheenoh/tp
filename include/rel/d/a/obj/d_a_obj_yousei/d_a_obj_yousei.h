#ifndef D_A_OBJ_YOUSEI_H
#define D_A_OBJ_YOUSEI_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class daObjYOUSEI_c : public fopAc_ac_c {
    /* 804CE738 */ void InitCcSph();
    /* 804CE7A4 */ void SetCcSph();
    /* 804CE920 */ void SpeedSet();
    /* 804CE9D0 */ void MoveAction();
    /* 804CEE50 */ void BinAction();
    /* 804CF098 */ void LinkChk();
    /* 804CF6C4 */ void WaitAction();
    /* 804CFCE8 */ void LinkAction();
    /* 804D057C */ void LinkSearch();
    /* 804D065C */ void WayBgCheck(f32, f32, s16);
    /* 804D0780 */ void CareAction();
    /* 804D080C */ void CheckGround();
    /* 804D0988 */ void CheckWater();
    /* 804D0AD0 */ void Action();
    /* 804D0CCC */ void ObjHit();
    /* 804D0DF0 */ void Execute();
    /* 804D0F98 */ void Delete();
    /* 804D0FCC */ void setBaseMtx();
    /* 804D111C */ void create();
};

#endif /* D_A_OBJ_YOUSEI_H */