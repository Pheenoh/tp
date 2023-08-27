#ifndef D_A_OBJ_TKS_H
#define D_A_OBJ_TKS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjTks_c : public fopAc_ac_c {
    /* 80D0F28C */ daObjTks_c();
    /* 80D0F480 */ ~daObjTks_c();
    /* 80D0F640 */ void Create();
    /* 80D0F904 */ void CreateHeap();
    /* 80D0FD34 */ void Delete();
    /* 80D0FD68 */ void Execute();
    /* 80D0FE60 */ void Draw();
    /* 80D0FED0 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 80D10094 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80D100B4 */ void ctrlJointCallBack(J3DJoint*, int);
    /* 80D10100 */ void setMtx();
    /* 80D10184 */ void setExpressionAnm(int, bool);
    /* 80D102D0 */ void setExpressionBtp(int);
    /* 80D103A4 */ void setMotion(int, f32, int);
    /* 80D103E8 */ void reset();
    /* 80D10578 */ void setAction(void (daObjTks_c::*)());
    /* 80D10618 */ void wait();
    /* 80D106C8 */ void setExpression(int, f32);
    /* 80D106F4 */ void talk();
    /* 80D10A80 */ void demo();
    /* 80D11104 */ void setMotionAnm(int, f32);
    /* 80D11228 */ void warp();
    /* 80D11670 */ void setParam();
    /* 80D116C8 */ void main();
    /* 80D118E8 */ void ctrlBtk();
    /* 80D119BC */ void setAttnPos();
    /* 80D11CB4 */ void lookat();
    /* 80D11E94 */ bool drawDbgInfo();
    /* 80D11E9C */ void drawOtherMdls();
};

class daObjTks_Param_c {
    /* 80D126D0 */ ~daObjTks_Param_c();

    static u8 const m[128];
};

class daNpcF_c : public fopAc_ac_c {
    struct daNpcF_anmPlayData {};

    /* 80152014 */ void execute();
    /* 801522AC */ void draw(int, int, f32, _GXColorS10*, int);
    /* 801527FC */ void setMtx2();
    /* 801528C8 */ void initialize();
    /* 80152B2C */ void getTrnsfrmKeyAnmP(char*, int);
    /* 80152B68 */ void getTexPtrnAnmP(char*, int);
    /* 80152BA4 */ void getTexSRTKeyAnmP(char*, int);
    /* 80152C1C */ void setMcaMorfAnm(J3DAnmTransformKey*, f32, f32, int, int, int);
    /* 80152C80 */ void setBckAnm(J3DAnmTransform*, f32, int, int, int, bool);
    /* 80152CC4 */ void setBtpAnm(J3DAnmTexPattern*, J3DModelData*, f32, int);
    /* 80152D04 */ void setBtkAnm(J3DAnmTextureSRTKey*, J3DModelData*, f32, int);
    /* 80152D84 */ void setEnvTevColor();
    /* 80152DE0 */ void setRoomNo();
    /* 80153150 */ void playExpressionAnm(daNpcF_c::daNpcF_anmPlayData***);
    /* 80153264 */ void playMotionAnm(daNpcF_c::daNpcF_anmPlayData***);
    /* 8015337C */ void setLookatMtx(int, int*, f32);
    /* 80153718 */ void ctrlMsgAnm(int&, int&, fopAc_ac_c*, int);
    /* 80153D1C */ void initTalk(int, fopAc_ac_c**);
    /* 80153D84 */ void talkProc(int*, int, fopAc_ac_c**);
    /* 80154250 */ void setAngle(s16);
    /* 80D1203C */ ~daNpcF_c();
    /* 80D122D0 */ daNpcF_c();
    /* 80D12680 */ void adjustShapeAngle();
    /* 80D12684 */ void setCollisions();

    static u8 mCcDCyl[68];
};

class daNpcF_MatAnm_c : public fopAc_ac_c {
    /* 80150738 */ void initialize();
};

class daNpcF_Lookat_c : public fopAc_ac_c {
    /* 80151038 */ void initialize();
    /* 801510B8 */ void setParam(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s16,
                                 cXyz*);
    /* 80151350 */ void calc(fopAc_ac_c*, f32 (*)[4], csXyz**, int, int, int);
    /* 80D11EEC */ ~daNpcF_Lookat_c();
};

class daNpcF_ActorMngr_c : public fopAc_ac_c {
    /* 801506B0 */ void initialize();
    /* 80D12288 */ ~daNpcF_ActorMngr_c();
    /* 80D124C0 */ daNpcF_ActorMngr_c();
};

#endif /* D_A_OBJ_TKS_H */
