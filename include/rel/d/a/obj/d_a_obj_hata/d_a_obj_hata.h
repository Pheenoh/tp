#ifndef D_A_OBJ_HATA_H
#define D_A_OBJ_HATA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjHata_c : public fopAc_ac_c {
    /* 80C18D08 */ daObjHata_c();
    /* 80C18D68 */ ~daObjHata_c();
    /* 80C18E00 */ void createHeap();
    /* 80C18E70 */ void create();
    /* 80C18F88 */ void Delete();
    /* 80C18FBC */ void draw();
    /* 80C19060 */ void execute();
    /* 80C19098 */ void setModelMtx();
    /* 80C190FC */ void init();
    /* 80C1919C */ void moveSwing();
};

#endif /* D_A_OBJ_HATA_H */
