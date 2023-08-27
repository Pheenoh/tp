#ifndef D_A_MIDNA_H
#define D_A_MIDNA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopAc_ac_c {
    static u8 m_midnaActor[4];
};

class daPy_anmHeap_c : public fopAc_ac_c {
    struct daAlinkHEAP_TYPE {};

    /* 8015ED10 */ daPy_anmHeap_c(u32);
    /* 8015ED50 */ ~daPy_anmHeap_c();
    /* 8015EDAC */ void initData();
    /* 8015EDC4 */ void mallocBuffer();
    /* 8015EE00 */ void createHeap(daPy_anmHeap_c::daAlinkHEAP_TYPE);
    /* 8015F068 */ void loadDataIdx(u16);
    /* 8015F118 */ void loadDataDemoRID(u16, u16);
    /* 804BD8F8 */ void __defctor();
};

class daMidna_matAnm_c : public fopAc_ac_c {
    /* 804BC218 */ void init();
    /* 804BC248 */ void calc(J3DMaterial*) const;
    /* 804C63E0 */ ~daMidna_matAnm_c();
};

class daMidna_c : public fopAc_ac_c {
    struct daMidna_ANM {};

    /* 804BC3E0 */ void modelCallBack(int);
    /* 804BC5C4 */ void changeUpperBck();
    /* 804BC614 */ void changeFaceBck();
    /* 804BC670 */ void baseModelCallBack(int);
    /* 804BC740 */ void initInvModel(u16, J3DModel**, mDoExt_invisibleModel*, u32);
    /* 804BC7D4 */ void initDemoModel(J3DModel**, char const*, u32);
    /* 804BC868 */ void createHeap();
    /* 804BD274 */ void create();
    /* 804BD93C */ void allAnimePlay();
    /* 804BDE04 */ void setMatrix();
    /* 804BE470 */ void setBodyPartMatrix();
    /* 804BED1C */ void setRoomInfo();
    /* 804BEDB8 */ void setBodyPartPos();
    /* 804BEFA0 */ void checkAppear();
    /* 804BF070 */ void checkMidnaPosState();
    /* 804BFF80 */ void setUpperAnime(u16, u16);
    /* 804C0020 */ void setUpperAnimeAndSe(daMidna_c::daMidna_ANM);
    /* 804C0094 */ void setFaceAnime(u16, u16);
    /* 804C0134 */ void endHighModel();
    /* 804C0238 */ void setDemoAnm();
    /* 804C0BAC */ void setFaceBtp(u16, int);
    /* 804C0C6C */ void setFaceBtk(u16, int);
    /* 804C0D2C */ void setLeftHandShape(u16);
    /* 804C0E18 */ void setRightHandShape(u16);
    /* 804C0F04 */ void checkHairOnlyAnime(int) const;
    /* 804C0F24 */ void setBckAnime(J3DAnmTransform*, int, f32);
    /* 804C103C */ void setAnm();
    /* 804C287C */ void getNeckAimAngle(cXyz const*, s16*, s16*, s16*, s16*);
    /* 804C2A68 */ void clearEyeMove();
    /* 804C2AB8 */ void setEyeMove(cXyz const*, s16, s16);
    /* 804C2EBC */ void setNeckAngle();
    /* 804C3168 */ void initHairAngle();
    /* 804C3298 */ void setHairAngle();
    /* 804C3F04 */ void setDemoData();
    /* 804C4394 */ void setSimpleBrk(J3DModelData*, u16);
    /* 804C4444 */ void setSimpleBtk(J3DModelData*, u16);
    /* 804C44CC */ void initMidnaModel();
    /* 804C49B8 */ void setMidnaNoDrawFlg();
    /* 804C4AE8 */ void checkMetamorphoseEnableBase();
    /* 804C4B68 */ void checkNoDrawState();
    /* 804C4BC0 */ void setSound();
    /* 804C4FDC */ void execute();
    /* 804C5A08 */ void draw();
    /* 804C61A4 */ ~daMidna_c();

    static u8 const m_texDataTable[84];
    static u8 const m_anmDataTable[636];
};

class daMidna_McaMorfCB1_c : public fopAc_ac_c {
    /* 804BC36C */ void execute(u16, J3DTransformInfo*);
    /* 804C6398 */ ~daMidna_McaMorfCB1_c();
};

class daAlink_c : public fopAc_ac_c {
    /* 800A3F98 */ void initDemoBck(mDoExt_bckAnm**, char const*);
    /* 800A9248 */ void simpleAnmPlay(J3DAnmBase*);
    /* 800B4908 */ void getMetamorphoseNearDis() const;
    /* 800B4918 */ void getMetamorphoseFarDis() const;
    /* 800B4928 */ void getMetamorphoseFarAngle() const;
    /* 800C03A0 */ void checkCloudSea();
    /* 800CB694 */ void initShadowScaleLight();
    /* 800CBA38 */ void moveShadowScaleLight();
    /* 80129958 */ void checkMidnaUseAbility() const;
    /* 80133D6C */ void getWolfTagJumpTime() const;
    /* 80133EF0 */ void checkMidnaLockJumpPoint() const;
    /* 801371A0 */ void checkMidnaDisappearMode() const;
    /* 801391DC */ void getWolfLockActorEnd();
};

#endif /* D_A_MIDNA_H */
