#ifndef D_A_OBJ_BARDESK_H
#define D_A_OBJ_BARDESK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBarDesk_c : public fopAc_ac_c {
    /* 80BA9200 */ void setBaseMtx();
    /* 80BA9288 */ void CreateHeap();
    /* 80BA92F4 */ void create();
    /* 80BA95A4 */ void Execute(f32 (**)[3][4]);
    /* 80BA95F4 */ void windowProc();
    /* 80BA9680 */ void init_modeWait();
    /* 80BA968C */ void modeWait();
    /* 80BA973C */ void init_modeBreak();
    /* 80BA9824 */ void modeBreak();
    /* 80BA9844 */ void setBreakEffect();
    /* 80BA98E8 */ void Draw();
    /* 80BA998C */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daBarDesk_HIO_c {
    /* 80BA918C */ daBarDesk_HIO_c();
    /* 80BA9A90 */ ~daBarDesk_HIO_c();
};

#endif /* D_A_OBJ_BARDESK_H */
