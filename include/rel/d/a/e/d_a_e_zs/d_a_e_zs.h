#ifndef D_A_E_ZS_H
#define D_A_E_ZS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopEn_enemy_c {
    static u8 m_midnaActor[4];
};

class daE_ZS_c : public fopEn_enemy_c {
    /* 808330DC */ void draw();
    /* 808331E4 */ void setBck(int, u8, f32, f32);
    /* 80833290 */ void setActionMode(int, int);
    /* 8083329C */ void damage_check();
    /* 80833698 */ void mBossHandCheck();
    /* 80833964 */ void executeAppear();
    /* 80833D30 */ void executeWait();
    /* 80833F1C */ void executeDamage();
    /* 80834108 */ void executeDrive();
    /* 808342C8 */ void action();
    /* 80834478 */ void mtx_set();
    /* 80834518 */ void cc_set();
    /* 80834650 */ void execute();
    /* 808346E4 */ void _delete();
    /* 80834778 */ void CreateHeap();
    /* 80834884 */ void create();
};

class daE_ZS_HIO_c : public fopEn_enemy_c {
    /* 808330AC */ daE_ZS_HIO_c();
    /* 80834DDC */ ~daE_ZS_HIO_c();
};

class daB_DS_c : public fopEn_enemy_c {
    /* 80835284 */ void getHandPosR();
    /* 808352A0 */ void getHandPosL();
};

#endif /* D_A_E_ZS_H */
