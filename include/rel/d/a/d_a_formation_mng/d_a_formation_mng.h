#ifndef D_A_FORMATION_MNG_H
#define D_A_FORMATION_MNG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

struct FmtPos_c {
    /* 80836C24 */ ~FmtPos_c();
    /* 80836C60 */ FmtPos_c();
};

class daNpcFgd_c : public fopAc_ac_c {
    /* 809BA53C */ void initPosAngle(Vec&, s16);
};

class daNpcCd2_c : public fopAc_ac_c {
    /* 801580F0 */ void getAnmP(int, int);
    /* 80158F00 */ void setAnm(J3DAnmTransformKey*, f32, f32, int, int, int);
};

class daFmtMng_c : public fopAc_ac_c {
    /* 80835558 */ void initWait();
    /* 80835624 */ void initMemberPos();
    /* 80835B24 */ void executeWait();
    /* 80835D28 */ void initWalk();
    /* 80835DEC */ void executeWalk();
    /* 8083622C */ void setMovePath(FmtPos_c*, int);
    /* 80836810 */ void initReverse();
    /* 808368A4 */ void executeReverse();
    /* 80836C64 */ void initMotion();
    /* 80836E20 */ void executeMotion();
    /* 80836F78 */ void initFight();
    /* 80837078 */ void executeFight();
    /* 808374B4 */ void create();
    /* 8083750C */ void create_init();

    static u8 const M_attr[24];
    static u8 ActionTable[120];
};

class daFmtMng_Path_c : public fopAc_ac_c {
    /* 808365B0 */ void checkPathEnd(cXyz, f32);
    /* 8083665C */ void checkPoint(cXyz, f32);
};

#endif /* D_A_FORMATION_MNG_H */
