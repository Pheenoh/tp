#ifndef D_A_OBJ_HASU2_H
#define D_A_OBJ_HASU2_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

namespace nObjMHasu {
class daObjMHasu_c : public fopAc_ac_c {
        /* 80C182DC */ daObjMHasu_c();
        /* 80C18340 */ void create1st();
        /* 80C183D0 */ void setMtx();
        /* 80C18440 */ void CreateHeap();
        /* 80C184B0 */ void Create();
        /* 80C185A4 */ void Execute(f32 (**)[3][4]);
        /* 80C18600 */ void Draw();
        /* 80C186A4 */ void Delete();
        /* 80C186E0 */ void upDownHasu();
        /* 80C18888 */ void updateCount(u8);
        /* 80C188A0 */ void setHasuCount(f32);
        /* 80C189E0 */ ~daObjMHasu_c();
    };
};

#endif /* D_A_OBJ_HASU2_H */
