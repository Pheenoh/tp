#ifndef D_A_OBJ_ZRTURARAROCK_H
#define D_A_OBJ_ZRTURARAROCK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daZrTuraRc_c : public fopAc_ac_c {
    /* 80D41934 */ void setBaseMtx();
    /* 80D419D4 */ void CreateHeap();
    /* 80D41A40 */ void create();
    /* 80D41EF0 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80D41F10 */ void Execute();
    /* 80D41F78 */ void move();
    /* 80D4204C */ void init_modeDrop();
    /* 80D42084 */ void modeDrop();
    /* 80D420FC */ void bgCheck();
    /* 80D42128 */ void init_modeDropEnd();
    /* 80D4215C */ void modeDropEnd();
    /* 80D42160 */ void Draw();
    /* 80D421C4 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDSph[64];
};

class daZrTuraRc_HIO_c {
    /* 80D4188C */ daZrTuraRc_HIO_c();
    /* 80D422D0 */ ~daZrTuraRc_HIO_c();
};

#endif /* D_A_OBJ_ZRTURARAROCK_H */
