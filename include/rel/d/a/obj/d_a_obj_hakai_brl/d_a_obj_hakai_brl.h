#ifndef D_A_OBJ_HAKAI_BRL_H
#define D_A_OBJ_HAKAI_BRL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjHBarrel_c : public fopAc_ac_c {
    /* 80C16758 */ daObjHBarrel_c();
    /* 80C16918 */ ~daObjHBarrel_c();
    /* 80C16A98 */ void createHeap();
    /* 80C16B08 */ void create();
    /* 80C16BF8 */ void Delete();
    /* 80C16C44 */ void draw();
    /* 80C16CA8 */ void execute();
    /* 80C16D50 */ void init();
    /* 80C16DEC */ void setModelMtx();
    /* 80C16E50 */ void hitAction();
    /* 80C17090 */ void callEmt();

    static u8 const s_CcDCyl[68];
};

#endif /* D_A_OBJ_HAKAI_BRL_H */
