#ifndef D_A_B_DR_H
#define D_A_B_DR_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class daB_DR_c : public fopEn_enemy_c {
    /* 805BAF80 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 805BB120 */ void JointCallBack(J3DJoint*, int);
    /* 805BB16C */ void draw();
    /* 805BB408 */ void setBck(int, u8, f32, f32);
    /* 805BB4B4 */ void setActionMode(int, int);
    /* 805BB4CC */ void mGlider_WindPosSet();
    /* 805BB540 */ void mBoot_c_tranceSet(bool);
    /* 805BB64C */ void mStatusONOFF(int);
    /* 805BB6E8 */ void setSe();
    /* 805BBFC0 */ void setDeathLightEffect();
    /* 805BC0B8 */ void chkPartCreate(bool);
    /* 805BC248 */ void mHabatakiAnmSet(int);
    /* 805BC57C */ void mGlider_AniSet(bool);
    /* 805BC8B4 */ void mGliderAtAniSet();
    /* 805BCA10 */ void tail_hit_check();
    /* 805BCAD4 */ void week_hit_check();
    /* 805BCBD0 */ void mTimerClr();
    /* 805BCBF4 */ void mCountClr();
    /* 805BCC18 */ void mAllClr();
    /* 805BCC4C */ void mHeadAngleSet();
    /* 805BCD7C */ void flapMove(bool);
    /* 805BCEA4 */ void revolutionMove();
    /* 805BD05C */ void mPlayerHighCheck();
    /* 805BD15C */ void mBgFallGroundCheck();
    /* 805BD3E4 */ void normalHoverMove();
    /* 805BD5FC */ void executeWait();
    /* 805BD98C */ void executeFlyWait();
    /* 805BDBC4 */ void executeTailHit();
    /* 805BE9B4 */ void executeWeekHit();
    /* 805BF4C8 */ void mBreathSet();
    /* 805BF768 */ void mBreathHighSet(bool);
    /* 805BFA6C */ void mFeintBreath();
    /* 805BFD88 */ void executeBreathAttack();
    /* 805C062C */ void executeWindAttack();
    /* 805C0CAC */ void mGliderMoveSub(f32);
    /* 805C0EF8 */ void executeGliderAttack();
    /* 805C1E0C */ void executePillarSearch();
    /* 805C24BC */ void executePillarWait();
    /* 805C2BE8 */ void startDemoCheck();
    /* 805C2CD0 */ void executeDamageDemo();
    /* 805C3558 */ void executeMiddleDemo();
    /* 805C36A4 */ void executeDead();
    /* 805C382C */ void executeBullet();
    /* 805C39D8 */ void executeParts();
    /* 805C3CB0 */ void action();
    /* 805C40E0 */ void action_fire();
    /* 805C4130 */ void action_parts();
    /* 805C41A4 */ void mtx_set();
    /* 805C4684 */ void parts_mtx_set();
    /* 805C46E0 */ void cc_set();
    /* 805C4E14 */ void down_cc_set();
    /* 805C4FB4 */ void demo_skip(int);
    /* 805C50BC */ void DemoSkipCallBack(void*, int);
    /* 805C50F0 */ void execute();
    /* 805C55B0 */ void _delete();
    /* 805C56A4 */ void CreateHeap();
    /* 805C5974 */ void create();
    /* 805C62B0 */ daB_DR_c();
};

class daB_DR_HIO_c {
    /* 805BAE6C */ daB_DR_HIO_c();
    /* 805C6B94 */ ~daB_DR_HIO_c();
};

#endif /* D_A_B_DR_H */
