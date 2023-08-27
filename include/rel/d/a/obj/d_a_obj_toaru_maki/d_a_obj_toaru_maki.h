#ifndef D_A_OBJ_TOARU_MAKI_H
#define D_A_OBJ_TOARU_MAKI_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjToaruMaki_c : public fopAc_ac_c {
    /* 80D13098 */ daObjToaruMaki_c();
    /* 80D130E0 */ ~daObjToaruMaki_c();
    /* 80D1316C */ void createHeap();
    /* 80D132B4 */ void create();
    /* 80D133C0 */ void Delete();
    /* 80D1343C */ void setModelMtx();
    /* 80D134A0 */ void draw();
    /* 80D13524 */ void execute();
};

#endif /* D_A_OBJ_TOARU_MAKI_H */
