#ifndef D_A_PERU_H
#define D_A_PERU_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"
#include "d/cc/d_cc_d.h"

class daTag_EvtArea_c : public fopAc_ac_c {
    /* 80D4BFD4 */ void chkPointInArea(cXyz);
    /* 8048C94C */ void chkPointInArea(cXyz, cXyz);
};

class daNpcT_faceMotionAnmData_c : public fopAc_ac_c {};

class daNpcT_MotionSeqMngr_c : public fopAc_ac_c {
    struct sequenceStepData_c {};

    /* 80145898 */ void initialize();
    /* 80D4B7BC */ ~daNpcT_MotionSeqMngr_c();
};

class daNpcT_evtData_c : public fopAc_ac_c {};

class daNpcT_motionAnmData_c : public fopAc_ac_c {};

class daPeru_c : public fopAc_ac_c {
    /* 80D46EEC */ ~daPeru_c();
    /* 80D46FCC */ void create();
    /* 80D4720C */ void CreateHeap();
    /* 80D4765C */ void typeInitialize();
    /* 80D47750 */ void Delete();
    /* 80D47784 */ void Execute();
    /* 80D477A4 */ void Draw();
    /* 80D47840 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80D47860 */ void ctrlJointCallBack(J3DJoint*, int);
    /* 80D478B8 */ void isDelete();
    /* 80D478EC */ void reset();
    /* 80D47B20 */ void setParam();
    /* 80D47C4C */ void setAfterTalkMotion();
    /* 80D47CAC */ void srchActors();
    /* 80D47D5C */ void evtTalk();
    /* 80D47E48 */ void evtCutProc();
    /* 80D47F10 */ void action();
    /* 80D47F5C */ void setAttnPos();
    /* 80D481A4 */ void setCollision();
    /* 80D4835C */ bool drawDbgInfo();
    /* 80D48364 */ void setAction(int (daPeru_c::*)(int), int);
    /* 80D48414 */ void wait(int);
    /* 80D486A0 */ void is_AppearDemo_start();
    /* 80D48720 */ void _AppearDemoTag_delete();
    /* 80D48750 */ void talk(int);
    /* 80D48A7C */ void jump_st(int);
    /* 80D48C58 */ void jump_ed(int);
    /* 80D48E34 */ void sniff(int);
    /* 80D48FA8 */ void demo_appear(int);
    /* 80D4910C */ void demo_walk_to_link(int);
    /* 80D492A8 */ void demo_walk_circle(int);
    /* 80D49418 */ void demo_walk_to_window(int);
    /* 80D4971C */ void demo_walk_to_pathway(int);
    /* 80D499AC */ void cutAppear(int);
    /* 80D49A40 */ void _cutAppear_Init(int const&);
    /* 80D4A334 */ void _cutAppear_Main(int const&);
    /* 80D4A840 */ void _catdoor_open();
    /* 80D4A920 */ void _catdoor_open_demoskip();
    /* 80D4A984 */ void cutAppear_skip(int);
    /* 80D4AA18 */ void _cutAppear_skip_Init(int const&);
    /* 80D4AAF0 */ void _cutAppear_skip_Main(int const&);
    /* 80D4BE2C */ daPeru_c(daNpcT_faceMotionAnmData_c const*, daNpcT_motionAnmData_c const*,
                            daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                            daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                            daNpcT_evtData_c const*, char**);
    /* 80D4BEC4 */ bool getEyeballMaterialNo();
    /* 80D4BECC */ s32 getHeadJointNo();
    /* 80D4BED4 */ s32 getNeckJointNo();
    /* 80D4BEDC */ bool getBackboneJointNo();
    /* 80D4BEE4 */ void checkChangeJoint(int);
    /* 80D4BEF4 */ void checkRemoveJoint(int);
    /* 80D4BF04 */ void beforeMove();

    static void* mCutNameList[3];
    static u8 mCutList[36];
};

class daPeru_Param_c : public fopAc_ac_c {
    /* 80D4BF7C */ ~daPeru_Param_c();

    static u8 const m[152];
};

class daObjCatDoor_c : public fopAc_ac_c {
    /* 80BC42B8 */ void attr() const;
    /* 80BC4454 */ void setBaseMtx();
};

class daNpcT_c : public fopAc_ac_c {
    /* 80147FA4 */ void tgHitCallBack(fopAc_ac_c*, dCcD_GObjInf*, fopAc_ac_c*, dCcD_GObjInf*);
    /* 801483F8 */ void loadRes(s8 const*, char const**);
    /* 801484AC */ void deleteRes(s8 const*, char const**);
    /* 8014852C */ void execute();
    /* 8014886C */ void draw(int, int, f32, _GXColorS10*, f32, int, int, int);
    /* 801490D4 */ void ctrlBtk();
    /* 80149190 */ void setMtx();
    /* 8014951C */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 8014997C */ void evtProc();
    /* 80149BB4 */ void setFootPos();
    /* 80149D7C */ void setFootPrtcl(cXyz*, f32, f32);
    /* 8014A05C */ bool checkCullDraw();
    /* 8014A064 */ void twilight();
    /* 8014A0B0 */ void evtOrder();
    /* 8014A324 */ void clrParam();
    /* 8014A388 */ void setFaceMotionAnm(int, bool);
    /* 8014A628 */ void setMotionAnm(int, f32, int);
    /* 8014AA18 */ void setAngle(s16);
    /* 8014ABD0 */ void chkActorInSight(fopAc_ac_c*, f32, s16);
    /* 8014B338 */ void srchPlayerActor();
    /* 8014B648 */ void step(s16, int, int, int, int);
    /* 8014BBF0 */ void initTalk(int, fopAc_ac_c**);
    /* 8014BC78 */ void talkProc(int*, int, fopAc_ac_c**, int);
    /* 8014BEE4 */ void getEvtAreaTagP(int, int);
    /* 80D4AC08 */ ~daNpcT_c();
    /* 80D4B2B4 */ daNpcT_c(daNpcT_faceMotionAnmData_c const*, daNpcT_motionAnmData_c const*,
                            daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                            daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                            daNpcT_evtData_c const*, char**);
    /* 80D4BCAC */ void ctrlSubFaceMotion(int);
    /* 80D4BCB0 */ s32 getFootLJointNo();
    /* 80D4BCB8 */ s32 getFootRJointNo();
    /* 80D4BCC0 */ bool getEyeballLMaterialNo();
    /* 80D4BCC8 */ bool getEyeballRMaterialNo();
    /* 80D4BCD0 */ void afterJntAnm(int);
    /* 80D4BCD4 */ bool checkChangeEvt();
    /* 80D4BCDC */ bool evtEndProc();
    /* 80D4BCE4 */ void afterMoved();
    /* 80D4BCE8 */ bool chkXYItems();
    /* 80D4BCF0 */ void decTmr();
    /* 80D4BD08 */ void drawOtherMdl();
    /* 80D4BD0C */ void drawGhost();
    /* 80D4BD10 */ bool afterSetFaceMotionAnm(int, int, f32, int);
    /* 80D4BD18 */ bool afterSetMotionAnm(int, int, f32, int);
    /* 80D4BD20 */ void getFaceMotionAnm(daNpcT_faceMotionAnmData_c);
    /* 80D4BD50 */ void getMotionAnm(daNpcT_motionAnmData_c);
    /* 80D4BD80 */ void changeAnm(int*, int*);
    /* 80D4BD84 */ void changeBck(int*, int*);
    /* 80D4BD88 */ void changeBtp(int*, int*);
    /* 80D4BD8C */ void changeBtk(int*, int*);

    static u8 mCcDCyl[68];
};

class daNpcT_Path_c : public fopAc_ac_c {
    /* 80145C40 */ void initialize();
    /* 80D4B11C */ ~daNpcT_Path_c();
};

class daNpcT_MatAnm_c : public fopAc_ac_c {
    /* 80145764 */ void initialize();
};

class daNpcT_JntAnm_c : public fopAc_ac_c {
    /* 80146C98 */ void initialize();
    /* 80146CD8 */ void setParam(fopAc_ac_c*, J3DModel*, cXyz*, int, int, int, f32, f32, f32, f32,
                                 f32, f32, f32, f32, f32, f32, cXyz*);
    /* 80147C38 */ void calcJntRad(f32, f32, f32);
    /* 80D4B6BC */ ~daNpcT_JntAnm_c();
    /* 80D4B988 */ void setEyeAngleY(cXyz, s16, int, f32, s16);
    /* 80D4BAA4 */ void setEyeAngleX(cXyz, f32, s16);
};

class daNpcT_DmgStagger_c : public fopAc_ac_c {
    /* 80147E3C */ void calc(int);
};

class daNpcT_ActorMngr_c : public fopAc_ac_c {
    /* 801456D4 */ void initialize();
    /* 801456E0 */ void entry(fopAc_ac_c*);
    /* 801456FC */ void remove();
    /* 80145708 */ void getActorP();
    /* 80D4B008 */ ~daNpcT_ActorMngr_c();
    /* 80D4B278 */ daNpcT_ActorMngr_c();
};

#endif /* D_A_PERU_H */
