#ifndef D_A_B_DS_H
#define D_A_B_DS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopEn_enemy_c {
    /* 805DC9A4 */ void changeDemoPos0(cXyz const*);
    /* 805DC9DC */ void changeDemoMode(u32, int, int, s16);
};

class daB_DS_c : public fopEn_enemy_c {
    /* 805CB314 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 805CB4A4 */ void JointCallBack(J3DJoint*, int);
    /* 805CB4F0 */ void draw();
    /* 805CBAC8 */ void setBck(int, u8, f32, f32);
    /* 805CBB74 */ void setActionMode(int, int);
    /* 805CBB80 */ void mSmokeSet();
    /* 805CBD00 */ void mHeadAngle_Clear();
    /* 805CBD64 */ void HandHitSoundSet(bool);
    /* 805CBED0 */ void handSPosSet(int);
    /* 805CC158 */ void hand_smokeSet(u8);
    /* 805CC1C4 */ void mZsMoveChk();
    /* 805CC454 */ void mZsMoveChk_Guard();
    /* 805CC6F4 */ void mTrapScale();
    /* 805CC80C */ void mClearTrap(bool);
    /* 805CC8A4 */ void mCreateTrap(bool);
    /* 805CCEB4 */ void mChangeVer2();
    /* 805CD074 */ void damage_check();
    /* 805CD628 */ void neck_set();
    /* 805CD844 */ void mCutTypeCheck();
    /* 805CD8D8 */ void startDemoCheck();
    /* 805CDA08 */ void setYoMessage(int);
    /* 805CDA44 */ void doYoMessage();
    /* 805CDAC0 */ void executeOpeningDemo();
    /* 805CFC8C */ void mHandBreathChk();
    /* 805D002C */ void executeWait();
    /* 805D0194 */ void executeCircle();
    /* 805D02F8 */ void mBreakBoneSUB();
    /* 805D0374 */ void damageSet();
    /* 805D03EC */ void damageHitCamera();
    /* 805D0584 */ void damageDownCheck();
    /* 805D074C */ void executeDamage();
    /* 805D1E30 */ void executeEtcDamage();
    /* 805D203C */ void breath_smokeSet();
    /* 805D226C */ void executeBreathAttack();
    /* 805D2520 */ void executeHandAttack();
    /* 805D272C */ void executeBreathSearch();
    /* 805D28D0 */ void executeBattle2OpeningDemo();
    /* 805D3900 */ void mFlyBMove(f32);
    /* 805D39A4 */ void mFuwafuwaSet(bool);
    /* 805D3D14 */ void mBattle2BreathFireSet(u32);
    /* 805D3D80 */ void mNeckAngleSet();
    /* 805D3EA0 */ void mSetFirstPos();
    /* 805D3F90 */ void mChkScreenIn();
    /* 805D4054 */ void mRailInOutCheck();
    /* 805D41CC */ void executeBattle2Wait();
    /* 805D429C */ void mBattle2MoveFSet();
    /* 805D497C */ void executeBattle2FMove();
    /* 805D5040 */ void executeBattle2Tired();
    /* 805D52D4 */ void executeBattle2Damage();
    /* 805D60BC */ void mDeadMove();
    /* 805D6534 */ void executeBattle2Dead();
    /* 805D7C10 */ void executeBullet();
    /* 805D8078 */ void mBulletAction();
    /* 805D80F0 */ void mSoundSE_Set();
    /* 805D8D04 */ void action();
    /* 805D91A4 */ void mtx_set();
    /* 805D951C */ void cc_set();
    /* 805D9A40 */ void cc_etc_set();
    /* 805D9B74 */ void mBattle2Action();
    /* 805D9CFC */ void mBattle2_spinner_damage_check();
    /* 805D9FF4 */ void mBattle2_damage_check();
    /* 805DA584 */ void mBattle2_mtx_set();
    /* 805DA9A4 */ void mBattle2_cc_etc_set();
    /* 805DAA98 */ void mBattle2_cc_set();
    /* 805DADC4 */ void execute();
    /* 805DB1AC */ void _delete();
    /* 805DB264 */ void CreateHeap();
    /* 805DB974 */ void create();
    /* 805DC1E8 */ daB_DS_c();
};

class daB_DS_HIO_c {
    /* 805CB22C */ daB_DS_HIO_c();
    /* 805DC89C */ ~daB_DS_HIO_c();
};

#endif /* D_A_B_DS_H */
