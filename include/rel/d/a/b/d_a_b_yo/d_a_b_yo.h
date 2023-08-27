#ifndef D_A_B_YO_H
#define D_A_B_YO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class obj_ystone_class : public fopEn_enemy_c {
    /* 80639694 */ void setShapeAngle(csXyz);
    /* 806396B0 */ void setCurrentPos(cXyz);
};

class daMirror_c : public fopEn_enemy_c {
    /* 8003194C */ void entry(J3DModel*);
    /* 80031990 */ void remove();
};

class daE_FZ_c : public fopEn_enemy_c {
    /* 806C0B20 */ void demoDelete();
};

class daB_YO_c : public fopEn_enemy_c {
    /* 8062F51C */ void draw();
    /* 8062FBEC */ void onIceBreak(u16);
    /* 8062FC08 */ void setBck(int, u8, f32, f32);
    /* 8062FE0C */ void setActionMode(int, int);
    /* 8062FE18 */ void damage_check();
    /* 806300F4 */ void setBreakFrizad();
    /* 8063022C */ void setIcicleOperate(int);
    /* 806302B4 */ void setIcicleSubNumber();
    /* 80630330 */ void setWindowBreakEffect(int);
    /* 8063040C */ void setHensinEffect();
    /* 806305B8 */ void setLandingEffect(f32);
    /* 806306F0 */ void setBreakIceEffect();
    /* 8063089C */ void setWallHitEffect();
    /* 80630A9C */ void setChillEffect();
    /* 80630BF0 */ void setApperEffect();
    /* 80630CA0 */ void setApperEffect2();
    /* 80630DD8 */ void demo_skip(int);
    /* 80630E3C */ void DemoSkipCallBack(void*, int);
    /* 80630E70 */ void setYoMessage(int);
    /* 80630EAC */ void doYoMessage();
    /* 80630F28 */ void executeOpening();
    /* 80632598 */ void reflectFreeMove();
    /* 80632660 */ void calcFreeMove(f32);
    /* 8063290C */ void setReflectAngle();
    /* 806329CC */ void executeChase();
    /* 806331CC */ void executeSeriousDemo();
    /* 80633EDC */ void checkIcecleRevival();
    /* 80633F50 */ void createIcecleRevival(u8);
    /* 80634040 */ void executeJump();
    /* 80634548 */ void executeAttackIce();
    /* 8063476C */ void executeAttackYose();
    /* 80634CEC */ void checkDamageWithIceBreak();
    /* 80634E04 */ void executeAttackBody();
    /* 806352C8 */ void executeDemoRevival();
    /* 80635798 */ void executeDamage();
    /* 80635ABC */ void executeDeath();
    /* 80636E9C */ void reviseIceCenterPos(cXyz*);
    /* 80637048 */ void calcPlayerBufPos();
    /* 806374BC */ void action();
    /* 80637990 */ void mtx_set();
    /* 80637B30 */ void cc_set();
    /* 80637E10 */ void execute();
    /* 80637FC8 */ void _delete();
    /* 806380F8 */ void CreateHeap();
    /* 806388A0 */ void CreateHeap2();
    /* 806389C0 */ void create();
};

class daB_YO_HIO_c : public fopEn_enemy_c {
    /* 8062F46C */ daB_YO_HIO_c();
    /* 806395E4 */ ~daB_YO_HIO_c();
};

class daB_YOI_c : public fopEn_enemy_c {
    /* 8063A480 */ void setOperate(int);
};

#endif /* D_A_B_YO_H */
