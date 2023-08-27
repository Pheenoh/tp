#ifndef D_A_OBJ_SEKIZOA_H
#define D_A_OBJ_SEKIZOA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/cc/d_cc_d.h"

class daTag_EvtArea_c : public fopAc_ac_c {
    /* 80CD5C88 */ void chkPointInArea(cXyz);
    /* 8048C94C */ void chkPointInArea(cXyz, cXyz);
};

class daNpcT_faceMotionAnmData_c : public fopAc_ac_c {};

class daNpcT_MotionSeqMngr_c : public fopAc_ac_c {
    struct sequenceStepData_c {};

    /* 80145898 */ void initialize();
    /* 80145A24 */ void checkEndSequence();
    /* 80CD52AC */ ~daNpcT_MotionSeqMngr_c();
};

class daNpcT_evtData_c : public fopAc_ac_c {};

class daNpcT_motionAnmData_c : public fopAc_ac_c {};

class daObj_Sekizoa_c : public fopAc_ac_c {
    /* 80CCE34C */ ~daObj_Sekizoa_c();
    /* 80CCE570 */ void create();
    /* 80CCE8B0 */ void CreateHeap();
    /* 80CCEC54 */ void Delete();
    /* 80CCEC88 */ void Execute();
    /* 80CCECA8 */ void Draw();
    /* 80CCED74 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CCED94 */ void srchSekizoa(void*, void*);
    /* 80CCEE30 */ void getSekizoaP(int);
    /* 80CCEFA4 */ void getKMsgTagP();
    /* 80CCF03C */ void isDelete();
    /* 80CCF138 */ void reset();
    /* 80CCF358 */ void afterJntAnm(int);
    /* 80CCF3E4 */ void setParam();
    /* 80CCF6BC */ void checkChangeEvt();
    /* 80CCF704 */ void setAfterTalkMotion();
    /* 80CCF708 */ void srchActors();
    /* 80CCF9A8 */ void evtTalk();
    /* 80CCFAA8 */ void evtCutProc();
    /* 80CCFBA0 */ void action();
    /* 80CCFD08 */ void beforeMove();
    /* 80CCFD80 */ void setAttnPos();
    /* 80CD009C */ void setCollision();
    /* 80CD03C0 */ bool drawDbgInfo();
    /* 80CD03C8 */ void drawOtherMdl();
    /* 80CD04FC */ void setYariAnm(int, int, f32);
    /* 80CD05D0 */ void drawGhost();
    /* 80CD06BC */ void afterSetMotionAnm(int, int, f32, int);
    /* 80CD0A84 */ void selectAction();
    /* 80CD0B08 */ void chkAction(int (daObj_Sekizoa_c::*)(void*));
    /* 80CD0B34 */ void setAction(int (daObj_Sekizoa_c::*)(void*));
    /* 80CD0BDC */ void checkMoveDirection();
    /* 80CD0DE8 */ void getWaitMotionNo();
    /* 80CD0E30 */ void getGameMotionNo();
    /* 80CD0E78 */ void getNoJumpMotionNo();
    /* 80CD0EAC */ void getHitMotionNo();
    /* 80CD0EE0 */ void getStepMotionNo();
    /* 80CD0F14 */ void jump();
    /* 80CD14D8 */ void landing();
    /* 80CD1688 */ void cutStart(int);
    /* 80CD2708 */ void cutTurn(int);
    /* 80CD2908 */ void cutJump(int);
    /* 80CD2B64 */ void cutGoal(int);
    /* 80CD376C */ void cutExit(int);
    /* 80CD38F0 */ void cutFree(int);
    /* 80CD3BD8 */ void cutExtinction(int);
    /* 80CD3F08 */ void wait(void*);
    /* 80CD425C */ void puzzle(void*);
    /* 80CD45B0 */ void talk(void*);
    /* 80CD5A40 */ daObj_Sekizoa_c(daNpcT_faceMotionAnmData_c const*, daNpcT_motionAnmData_c const*,
                                   daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                                   daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                                   daNpcT_evtData_c const*, char**);
    /* 80CD5B74 */ s32 getHeadJointNo();
    /* 80CD5B7C */ bool getBackboneJointNo();
    /* 80CD5B84 */ void chkGoal();

    static void* mCutNameList[9];
    static u8 mCutList[108];
};

class daObj_Sekizoa_Param_c {
    /* 80CD5C30 */ ~daObj_Sekizoa_Param_c();

    static u8 const m[156];
};

class daObj_SekiDoor_c : public fopAc_ac_c {
    /* 80CCD5DC */ void evtSkip();
};

class daNpcT_c : public fopAc_ac_c {
    /* 80147FA4 */ void tgHitCallBack(fopAc_ac_c*, dCcD_GObjInf*, fopAc_ac_c*, dCcD_GObjInf*);
    /* 80147FD4 */ void srchActor(void*, void*);
    /* 80148094 */ void getTrnsfrmKeyAnmP(char const*, int);
    /* 8014810C */ void getTexSRTKeyAnmP(char const*, int);
    /* 80148148 */ void getTevRegKeyAnmP(char const*, int);
    /* 80148338 */ void setBtkAnm(J3DAnmTextureSRTKey*, J3DModelData*, f32, int);
    /* 80148378 */ void setBrkAnm(J3DAnmTevRegKey*, J3DModelData*, f32, int);
    /* 801483F8 */ void loadRes(s8 const*, char const**);
    /* 801484AC */ void deleteRes(s8 const*, char const**);
    /* 8014852C */ void execute();
    /* 8014886C */ void draw(int, int, f32, _GXColorS10*, f32, int, int, int);
    /* 80148C70 */ void setEnvTevColor();
    /* 80148CCC */ void setRoomNo();
    /* 801490D4 */ void ctrlBtk();
    /* 80149190 */ void setMtx();
    /* 8014951C */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 8014997C */ void evtProc();
    /* 80149BB4 */ void setFootPos();
    /* 80149D7C */ void setFootPrtcl(cXyz*, f32, f32);
    /* 8014A05C */ bool checkCullDraw();
    /* 8014A064 */ void twilight();
    /* 8014A0B0 */ void evtOrder();
    /* 8014A224 */ void evtChange();
    /* 8014A324 */ void clrParam();
    /* 8014A388 */ void setFaceMotionAnm(int, bool);
    /* 8014A628 */ void setMotionAnm(int, f32, int);
    /* 8014A908 */ void setPos(cXyz);
    /* 8014AA18 */ void setAngle(s16);
    /* 8014A99C */ void setAngle(csXyz);
    /* 8014ACF0 */ void chkPointInArea(cXyz, cXyz, f32, f32, f32, s16);
    /* 8014B648 */ void step(s16, int, int, int, int);
    /* 8014BBF0 */ void initTalk(int, fopAc_ac_c**);
    /* 8014BC78 */ void talkProc(int*, int, fopAc_ac_c**, int);
    /* 8014BE2C */ void getNearestActorP(s16);
    /* 8014BEE4 */ void getEvtAreaTagP(int, int);
    /* 80CD4848 */ ~daNpcT_c();
    /* 80CD4DA4 */ daNpcT_c(daNpcT_faceMotionAnmData_c const*, daNpcT_motionAnmData_c const*,
                            daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                            daNpcT_MotionSeqMngr_c::sequenceStepData_c const*, int,
                            daNpcT_evtData_c const*, char**);
    /* 80CD5478 */ bool getEyeballMaterialNo();
    /* 80CD57A4 */ s32 getNeckJointNo();
    /* 80CD57AC */ void ctrlSubFaceMotion(int);
    /* 80CD57B0 */ bool checkChangeJoint(int);
    /* 80CD57B8 */ bool checkRemoveJoint(int);
    /* 80CD57C0 */ s32 getFootLJointNo();
    /* 80CD57C8 */ s32 getFootRJointNo();
    /* 80CD57D0 */ bool getEyeballLMaterialNo();
    /* 80CD57D8 */ bool getEyeballRMaterialNo();
    /* 80CD57E0 */ bool evtEndProc();
    /* 80CD57E8 */ void afterMoved();
    /* 80CD57EC */ bool chkXYItems();
    /* 80CD57F4 */ void decTmr();
    /* 80CD580C */ bool afterSetFaceMotionAnm(int, int, f32, int);
    /* 80CD5814 */ void getFaceMotionAnm(daNpcT_faceMotionAnmData_c);
    /* 80CD5844 */ void getMotionAnm(daNpcT_motionAnmData_c);
    /* 80CD5874 */ void changeAnm(int*, int*);
    /* 80CD5878 */ void changeBck(int*, int*);
    /* 80CD587C */ void changeBtp(int*, int*);
    /* 80CD5880 */ void changeBtk(int*, int*);

    static u8 mCcDCyl[68];
    static u8 mFindActorPtrs[200];
    static u8 mSrchName[2 + 2 /* padding */];
    static u8 mFindCount[4];
};

class daNpcT_Path_c : public fopAc_ac_c {
    /* 80145C40 */ void initialize();
    /* 80CD4C90 */ ~daNpcT_Path_c();
};

class daNpcT_MatAnm_c : public fopAc_ac_c {
    /* 80145764 */ void initialize();
};

class daNpcT_JntAnm_c : public fopAc_ac_c {
    /* 80146C98 */ void initialize();
    /* 80146CD8 */ void setParam(fopAc_ac_c*, J3DModel*, cXyz*, int, int, int, f32, f32, f32, f32,
                                 f32, f32, f32, f32, f32, f32, cXyz*);
    /* 80147C38 */ void calcJntRad(f32, f32, f32);
    /* 80CD51AC */ ~daNpcT_JntAnm_c();
    /* 80CD5480 */ void setEyeAngleY(cXyz, s16, int, f32, s16);
    /* 80CD559C */ void setEyeAngleX(cXyz, f32, s16);
};

class daNpcT_DmgStagger_c : public fopAc_ac_c {
    /* 80147E3C */ void calc(int);
};

class daNpcT_ActorMngr_c : public fopAc_ac_c {
    /* 801456D4 */ void initialize();
    /* 801456E0 */ void entry(fopAc_ac_c*);
    /* 801456FC */ void remove();
    /* 80145708 */ void getActorP();
    /* 80CD4C48 */ ~daNpcT_ActorMngr_c();
    /* 80CD4CD8 */ daNpcT_ActorMngr_c();
};

#endif /* D_A_OBJ_SEKIZOA_H */
