#ifndef D_A_OBJ_ZRTURARA_H
#define D_A_OBJ_ZRTURARA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daZrTurara_c : public fopAc_ac_c {
    /* 80D405E4 */ void setBaseMtx();
    /* 80D40714 */ void CreateHeap();
    /* 80D40844 */ void create();
    /* 80D40C08 */ void Execute(f32 (**)[3][4]);
    /* 80D40C68 */ void move();
    /* 80D40D88 */ void modeWait();
    /* 80D40E0C */ void init_modeBreak();
    /* 80D410E0 */ void modeBreak();
    /* 80D412A0 */ void init_modeEnd();
    /* 80D412AC */ void modeEnd();
    /* 80D412B0 */ void Draw();
    /* 80D41380 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daZrTurara_HIO_c {
    /* 80D4056C */ daZrTurara_HIO_c();
    /* 80D414BC */ ~daZrTurara_HIO_c();
};

#endif /* D_A_OBJ_ZRTURARA_H */
