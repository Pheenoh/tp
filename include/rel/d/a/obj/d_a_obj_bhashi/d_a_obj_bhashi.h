#ifndef D_A_OBJ_BHASHI_H
#define D_A_OBJ_BHASHI_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjBHASHI_c : public fopAc_ac_c {
    /* 80576A58 */ void initCcCylinder();
    /* 80576AC4 */ void setCcCylinder();
    /* 80576B78 */ void Set_Hahen();
    /* 80576C50 */ void Set_Speed(s16, s16, f32, f32);
    /* 80577500 */ void Obj_Damage(cXyz);
    /* 805771EC */ void Obj_Damage();
    /* 80577E24 */ void Rolling(cXyz*, f32, f32);
    /* 805781FC */ void setBaseMtx();
    /* 80578330 */ void CreateHeap();
    /* 8057842C */ void create();
    /* 80578788 */ void Create();
    /* 805787CC */ void Execute(f32 (**)[3][4]);
    /* 805788EC */ void Draw();
    /* 805789E8 */ void Delete();
};

#endif /* D_A_OBJ_BHASHI_H */
