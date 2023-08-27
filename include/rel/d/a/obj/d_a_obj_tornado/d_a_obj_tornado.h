#ifndef D_A_OBJ_TORNADO_H
#define D_A_OBJ_TORNADO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjTrnd_c : public fopAc_ac_c {
    /* 80D1B998 */ void setPntWind();
    /* 80D1BA0C */ void cutPntWind();
    /* 80D1BA30 */ void movePntWind();
    /* 80D1BC40 */ void setCpsInfo();
    /* 80D1BE04 */ void initBaseMtx();
    /* 80D1BE24 */ void setBaseMtx();
    /* 80D1BE6C */ void Create();
    /* 80D1BFB0 */ void create();
    /* 80D1C0F0 */ void execute();
    /* 80D1C290 */ bool draw();
    /* 80D1C298 */ void _delete();
};

#endif /* D_A_OBJ_TORNADO_H */
