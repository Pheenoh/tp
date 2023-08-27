#ifndef D_A_TAG_CAMERA_H
#define D_A_TAG_CAMERA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_Cam_c : public fopAc_ac_c {
    /* 80489F14 */ void getSwType();
    /* 80489F20 */ void getPrio();
    /* 80489F2C */ void getSwBit();
    /* 80489F38 */ void getCondition();
    /* 80489F44 */ void getCameraId();
    /* 80489F50 */ void getRailID();
    /* 80489F5C */ void getAreaType();
    /* 80489F68 */ void getAreaNoChk();
    /* 80489F74 */ void execute();
};

class daAlink_c : public fopAc_ac_c {
    /* 800E1390 */ void getCopyRodCameraActor();
};

#endif /* D_A_TAG_CAMERA_H */
