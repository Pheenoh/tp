#ifndef D_A_E_FZ_H
#define D_A_E_FZ_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopEn_enemy_c {
    static u8 m_midnaActor[4];
};

class daMirror_c : public fopEn_enemy_c {
    /* 8003194C */ void entry(J3DModel*);
};

class daE_FZ_c : public fopEn_enemy_c {
    /* 806BE9D4 */ void draw();
    /* 806BEAF8 */ void setActionMode(int, int);
    /* 806BEB04 */ void setReflectAngle();
    /* 806BEBA0 */ void mBoundSoundset();
    /* 806BEC08 */ void deadnextSet(bool);
    /* 806BED34 */ void damage_check();
    /* 806BF444 */ void way_gake_check();
    /* 806BF58C */ void executeWait();
    /* 806BF8E8 */ void executeMove();
    /* 806BFA64 */ void executeAttack();
    /* 806BFB60 */ void executeDamage();
    /* 806BFF94 */ void executeRollMove();
    /* 806C0224 */ void action();
    /* 806C06DC */ void mtx_set();
    /* 806C0760 */ void cc_set();
    /* 806C08C4 */ void execute();
    /* 806C0B20 */ void demoDelete();
    /* 806C0B94 */ void _delete();
    /* 806C0C28 */ void CreateHeap();
    /* 806C0CD0 */ void create();
};

class daE_FZ_HIO_c {
    /* 806BE94C */ daE_FZ_HIO_c();
    /* 806C1440 */ ~daE_FZ_HIO_c();
};

#endif /* D_A_E_FZ_H */
