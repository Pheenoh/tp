#ifndef D_A_OBJ_CATDOOR_H
#define D_A_OBJ_CATDOOR_H

#include "f_op/f_op_actor_mng.h"
#include "d/com/d_com_inf_game.h"
#include "d/bg/d_bg_w.h"
#include "JSystem/JKernel/JKRHeap.h"

extern const char* l_arcName;
static int createSolidHeap(fopAc_ac_c* i_this);

class daObjCatDoor_Door_c {
public:
    /* 0x00 */ J3DModel* pmodel;
    /* 0x04 */ dBgW bgw;
    /* 0xe0 */ Mtx mtx;
    /* 0xf4 */ s16 angle;
};

class daObjCatDoor_c : public fopAc_ac_c {
public:
    daObjCatDoor_c() {}
    ~daObjCatDoor_c() {
        if (mDoor1.bgw.ChkUsed()) {
            dComIfG_Bgsp().Release(&mDoor1.bgw);
        }
        if (mDoor2.bgw.ChkUsed()) {
            dComIfG_Bgsp().Release(&mDoor2.bgw);
        }
        dComIfG_resDelete(&mPhaseReq, l_arcName);
    }

    /* 80BC42B8 */ const s16* attr() const;
    /* 80BC43F4 */ void initBaseMtx();
    /* 80BC4454 */ void setBaseMtx();
    /* 80BC4560 */ void calcOpen();

    u8 getSwitchNo() { return fopAcM_GetParam(this); }

    int createHeap() {
        J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(l_arcName, 4);

        ASSERT(modelData != NULL);
        mDoor1.pmodel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
        mDoor2.pmodel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
        if (mDoor1.pmodel == NULL || mDoor2.pmodel == NULL) {
            return 0;
        }

        cBgD_t* cbgd = (cBgD_t*)dComIfG_getObjectRes(l_arcName, 7);
        if (mDoor1.bgw.Set(cbgd, 1, &mDoor1.mtx)) {
            return 0;
        }

        cBgD_t* cbgd2 = (cBgD_t*)dComIfG_getObjectRes(l_arcName, 7);
        if (mDoor2.bgw.Set(cbgd2, 1, &mDoor2.mtx)) {
            return 0;
        }

        return 1;
    }

    int draw() {
        g_env_light.settingTevStruct(0x10, &current.pos, &mTevStr);

        fopAc_ac_c* p1 = static_cast<fopAc_ac_c*>(this);
        g_env_light.setLightTevColorType_MAJI(mDoor1.pmodel, &p1->mTevStr);
        g_env_light.setLightTevColorType_MAJI(mDoor2.pmodel, &p1->mTevStr);

        dComIfGd_setListBG();
        mDoExt_modelUpdateDL(mDoor1.pmodel);
        mDoExt_modelUpdateDL(mDoor2.pmodel);
        dComIfGd_setList();
        return 1;
    }

    int execute() {
        if (dComIfGs_isSwitch(fopAcM_GetParam(this) & 0xFF, fopAcM_GetHomeRoomNo(this)) ||
        mRotSpeed == 0) {
            return 1;
        }
        calcOpen();
        setBaseMtx();
        return 1;
    }

    int create() {
        fopAcM_SetupActor(this, daObjCatDoor_c);

        int phase_state = dComIfG_resLoad(&mPhaseReq, l_arcName);
        if (phase_state == cPhs_COMPLEATE_e) {
            if (!fopAcM_entrySolidHeap(this, createSolidHeap, 0x2520)) {
                phase_state = cPhs_ERROR_e;
            } else {
                create_init();
            }
        }
        return phase_state;
    }

    void create_init() {
        ASSERT(getSwitchNo() != 0xff);
        fopAcM_setCullSizeBox(this, -200.0f, 0.0f, -20.0f, 200.0f, 260.0f, 100.0f);
        if (i_fopAcM_isSwitch(this, getSwitchNo())) {
            mDoor1.angle = 0x8800;
            mDoor2.angle = 0x7800;
        } else {
            mDoor1.bgw.SetCrrFunc(NULL);
            mDoor1.bgw.SetRoomId(fopAcM_GetRoomNo(this));
            dComIfG_Bgsp().Regist(&mDoor1.bgw, this);
            mDoor2.bgw.SetCrrFunc(NULL);
            mDoor2.bgw.SetRoomId(fopAcM_GetRoomNo(this));
            dComIfG_Bgsp().Regist(&mDoor2.bgw, this);
        }
        initBaseMtx();
    }

private:
    /* 0x568 */ request_of_phase_process_class mPhaseReq;
    /* 0x570 */ daObjCatDoor_Door_c mDoor1;
    /* 0x660 */ daObjCatDoor_Door_c mDoor2;
    /* 0x760 */ Mtx mMtx;
    /* 0x790 */ s16 mRotSpeed;

public:
    static u32 const M_attr;
};

#endif /* D_A_OBJ_CATDOOR_H */
