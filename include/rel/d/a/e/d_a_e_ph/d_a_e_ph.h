#ifndef D_A_E_PH_H
#define D_A_E_PH_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daE_PH_c : public fopEn_enemy_c {
    /* 8073D48C */ void initCcSph();
    /* 8073D5C4 */ void SetStopingCam();
    /* 8073D648 */ void SetStopCam(cXyz, f32, f32, s16);
    /* 8073D768 */ void SetCMoveCam(cXyz, f32, f32);
    /* 8073D7AC */ void SetReleaseCam();
    /* 8073D850 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 8073D950 */ void setCcSph();
    /* 8073DB28 */ void SetAnm(int, int, f32, f32);
    /* 8073DBD4 */ void SearchNearP();
    /* 8073DDF8 */ void FlyAnm();
    /* 8073E068 */ void SetShapeAngle();
    /* 8073E22C */ void GoTarget();
    /* 8073E4A4 */ void SetCheckAngle();
    /* 8073E8B0 */ void C_CheckPoint();
    /* 8073E924 */ void DownBoots();
    /* 8073EA50 */ void UpBoots();
    /* 8073EB64 */ void C_Action();
    /* 8073ED0C */ void SearchNextPos();
    /* 8073ED58 */ void SearchBackPos();
    /* 8073EDA0 */ void S_SetPlaySpeed();
    /* 8073EE68 */ void S_GoTarget();
    /* 8073F250 */ void S_CheckPoint();
    /* 8073F3D4 */ void S_SetAngle();
    /* 8073F8C8 */ void FlyAnm2();
    /* 8073FB70 */ void S_Action();
    /* 8073FBDC */ void StopAction();
    /* 8073FD70 */ void Action();
    /* 80740024 */ void SetHeadAngle(s16);
    /* 80740098 */ void CamAction();
    /* 80740318 */ void DemoAction();
    /* 807408C0 */ void ToumeiAction();
    /* 80740B3C */ void Execute();
    /* 80740C3C */ void AttentionSet();
    /* 80740E70 */ void ObjHit();
    /* 807410B0 */ void BaseSet();
    /* 8074117C */ void De_Timer();
    /* 807411C0 */ void EyeSet();
    /* 80741200 */ void Delete();
    /* 80741268 */ void setBaseMtx();
    /* 80741428 */ void create();
};

class daE_PH_HIO_c {
    /* 8073D44C */ daE_PH_HIO_c();
    /* 80741B4C */ ~daE_PH_HIO_c();
};

#endif /* D_A_E_PH_H */
