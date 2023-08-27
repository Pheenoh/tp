#ifndef D_A_E_OCT_BG_H
#define D_A_E_OCT_BG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daE_OctBg_c : public fopEn_enemy_c {
    /* 8073626C */ void setAction(void (daE_OctBg_c::*)());
    /* 80736310 */ void setSparkEffect();
    /* 80736418 */ void checkExplode();
    /* 8073651C */ void action();
    /* 80736840 */ void _delete();
    /* 807368C8 */ void cc_set();
    /* 80736A78 */ void mtx_set();
    /* 80736BB4 */ void checkNormalAttack();
    /* 80736DAC */ void checkChase();
    /* 80736E30 */ void born_swim();
    /* 80737028 */ void swim();
    /* 80737574 */ void setChasePos(cXyz&, f32);
    /* 8073762C */ void checkCoreFishAttack();
    /* 80737678 */ void chase_core();
    /* 80737C48 */ void normal_attack();
    /* 8073814C */ void core_fish_attack();
    /* 80738714 */ void back_swim();
    /* 80738914 */ void setBombCarry(int);
    /* 807389E8 */ void hook();
    /* 80738A4C */ void damage();
    /* 80738C2C */ void bomb_wait();
    /* 80738E30 */ void damage_check();
    /* 8073905C */ void execute();
    /* 807390E4 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 807391D0 */ void JointCallBack(J3DJoint*, int);
    /* 8073921C */ void CreateHeap();
    /* 80739424 */ void create();
    /* 807399A4 */ void draw();
};

class daE_OctBg_HIO_c {
    /* 8073620C */ daE_OctBg_HIO_c();
    /* 80739CB8 */ ~daE_OctBg_HIO_c();
};

#endif /* D_A_E_OCT_BG_H */
