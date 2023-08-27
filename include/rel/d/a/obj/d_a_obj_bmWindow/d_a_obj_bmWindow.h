#ifndef D_A_OBJ_BMWINDOW_H
#define D_A_OBJ_BMWINDOW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daBmWindow_c : public fopAc_ac_c {
    /* 80BB8350 */ void setBaseMtx();
    /* 80BB8400 */ void CreateHeap();
    /* 80BB846C */ void create();
    /* 80BB88D8 */ void Execute(f32 (**)[3][4]);
    /* 80BB8930 */ void windowProc();
    /* 80BB8B3C */ void init_modeWait();
    /* 80BB8B48 */ void modeWait();
    /* 80BB8FDC */ void checkActorInRectangle(fopAc_ac_c*, cXyz const*, cXyz const*);
    /* 80BB90E0 */ void init_modeBreak();
    /* 80BB920C */ void modeBreak();
    /* 80BB922C */ void init_modeBreakEff();
    /* 80BB9304 */ void modeBreakEff();
    /* 80BB9324 */ void setBreakEffect(int);
    /* 80BB9494 */ void Draw();
    /* 80BB9548 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

class daBmWindow_HIO_c {
    /* 80BB820C */ daBmWindow_HIO_c();
    /* 80BB964C */ ~daBmWindow_HIO_c();
};

#endif /* D_A_OBJ_BMWINDOW_H */
