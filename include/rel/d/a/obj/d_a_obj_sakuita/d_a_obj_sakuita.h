#ifndef D_A_OBJ_SAKUITA_H
#define D_A_OBJ_SAKUITA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjSakuita_c : public fopAc_ac_c {
    /* 80CC46F8 */ void create_init();
    /* 80CC47F8 */ void initBaseMtx();
    /* 80CC4818 */ void setBaseMtx();
    /* 80CC489C */ void setPlatePos();
    /* 80CC4A98 */ void calcAngle();
    /* 80CC4C9C */ ~daObjSakuita_c();

    static u8 const M_attr[44];
};

#endif /* D_A_OBJ_SAKUITA_H */