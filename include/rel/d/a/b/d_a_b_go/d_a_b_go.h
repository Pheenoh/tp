#ifndef D_A_B_GO_H
#define D_A_B_GO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "Z2AudioLib/Z2Creature.h"
#include "d/com/d_com_inf_game.h"

enum daB_GO_ANM {
    /* 0x04 */ ANM_ATTACK = 4,
    /* 0x05 */ ANM_DAMAGE_01,
    /* 0x06 */ ANM_DAMAGE_02,
    /* 0x07 */ ANM_DEAD_01,
    /* 0x08 */ ANM_DEAD_02,
    /* 0x09 */ ANM_FALL,
    /* 0x0A */ ANM_START_L,
    /* 0x0B */ ANM_START_R,
    /* 0x0C */ ANM_STEP,
    /* 0x0D */ ANM_TRAP,
    /* 0x0E */ ANM_WAIT_02,
    /* 0x0F */ ANM_WAIT_03,
    /* 0x10 */ ANM_WALK,
};

enum daB_GO_Action {
    /* 0x0 */ ACT_WAIT,
    /* 0x1 */ ACT_WALK,
    /* 0x2 */ ACT_ATTACK,
};

#define RES_IS_MODEL 0x13

class daB_GO_HIO_c {
public:
    /* 806031AC */ daB_GO_HIO_c();
    /* 80603F9C */ ~daB_GO_HIO_c();

    /* 0x00 */ u8 field_0x0[4];
    /* 0x04 */ s8 field_0x4;
    /* 0x08 */ f32 mSmallSize;
    /* 0x0C */ f32 mNormalSpeed;
    /* 0x10 */ f32 mAttackInitRange;
    /* 0x14 */ bool mDisplayModelImage;
};

class b_go_class : public fopAc_ac_c {
public:
    /* 80603CA0 */ b_go_class();

    // private:
    /* 0x568 */ u8 field_0x568[0x5ac - 0x568];
    /* 0x5AC */ request_of_phase_process_class mPhase;
    /* 0x5B4 */ mDoExt_McaMorfSO* mpMorf;
    /* 0x5B8 */ Z2CreatureEnemy mZ2Enemy;
    /* 0x65C */ int field_0x65c;
    /* 0x660 */ u8 field_0x660;
    /* 0x661 */ u8 field_0x661[0x668 - 0x661];
    /* 0x668 */ s16 field_0x668;
    /* 0x66A */ s16 mActionID;
    /* 0x66C */ s16 field_0x66c;
    /* 0x66E */ u8 field_0x66e[0x67e - 0x66e];
    /* 0x67E */ s16 mAngleToPlayer;
    /* 0x680 */ f32 mDistToPlayer;
    /* 0x684 */ u8 field_0x684[4];
    /* 0x688 */ s16 field_0x688[4];
    /* 0x690 */ s16 field_0x690;
    /* 0x692 */ s16 field_0x692;
    /* 0x694 */ dBgS_AcchCir mAcchCir;
    /* 0x6D4 */ dBgS_Acch mAcch;
    /* 0x8AC */ dCcD_Stts mStts;
    /* 0x8E8 */ dCcD_Sph field_0x8e8;
    /* 0xA20 */ dCcD_Sph field_0xa20;
    /* 0xB58 */ dCcD_Cyl field_0xb58;
    /* 0xC94 */ u8 field_0xc94[0xc9c - 0xc94];
    /* 0xC9C */ Z2CreatureEnemy* field_0xc9c;
    /* 0xCA0 */ u8 field_0xca0[0xcb8 - 0xca0];
    /* 0xCB8 */ u32 mGoronAcID[31];
    /* 0xD34 */ u8 field_0xd34;
};

#endif /* D_A_B_GO_H */
