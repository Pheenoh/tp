#ifndef D_A_B_DRE_H
#define D_A_B_DRE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class obj_ystone_class : public fopEn_enemy_c {
    /* 805CAD2C */ void setCurrentPos(cXyz);
};

class daB_DRE_c : public fopEn_enemy_c {
    /* 805C7DD4 */ void SetAnm(mDoExt_McaMorfSO*, int, int, f32, f32);
    /* 805C7EAC */ void CameraSet();
    /* 805C8008 */ void SetStopingCam();
    /* 805C808C */ void SetStopCam(cXyz, f32, f32, s16);
    /* 805C8208 */ void SetCMoveCam(cXyz, f32, f32);
    /* 805C81B8 */ void SetCMoveCam(cXyz, f32);
    /* 805C8348 */ void SetEyeMoveCam(cXyz, f32, f32, s16, f32, f32);
    /* 805C824C */ void SetEyeMoveCam(cXyz, f32, f32, s16, f32);
    /* 805C8458 */ void SetMoveCam(f32, f32);
    /* 805C8544 */ void SetReleaseCam();
    /* 805C85E8 */ void CamAction2();
    /* 805C8BF8 */ void DrAction2();
    /* 805C8EDC */ void CamAction();
    /* 805C9318 */ void Action();
    /* 805C9378 */ void DrAction();
    /* 805C9B40 */ void SoundChk();
    /* 805CA158 */ void Execute();
    /* 805CA49C */ void SpeedSet();
    /* 805CA4FC */ void BreathSet();
    /* 805CA670 */ void Delete();
    /* 805CA6C0 */ void setBaseMtx();
    /* 805CA944 */ void create();
};

#endif /* D_A_B_DRE_H */
