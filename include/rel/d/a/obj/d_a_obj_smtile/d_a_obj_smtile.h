#ifndef D_A_OBJ_SMTILE_H
#define D_A_OBJ_SMTILE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObj_SMTile_c : public fopAc_ac_c {
    /* 80CDD2AC */ ~daObj_SMTile_c();
    /* 80CDD3E8 */ void create();
    /* 80CDD5CC */ void CreateHeap();
    /* 80CDD6E8 */ void Delete();
    /* 80CDD71C */ void Execute();
    /* 80CDDA98 */ void Draw();
    /* 80CDDB28 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CDDB48 */ void setDstPos();
    /* 80CDDD28 */ void setPrtcls(int, int);
    /* 80CDDEFC */ void touchPrtcls(f32);
    /* 80CDE1A8 */ void setMtx();
};

class daObj_SMTile_Param_c {
    /* 80CDE300 */ ~daObj_SMTile_Param_c();

    static u8 const m[8];
};

#endif /* D_A_OBJ_SMTILE_H */