#ifndef D_A_OBJ_LV3SAKA00_H
#define D_A_OBJ_LV3SAKA00_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjLv3saka_c : public fopAc_ac_c {
    /* 80C5BE58 */ void initBaseMtx();
    /* 80C5BE78 */ void setBaseMtx();
    /* 80C5BED8 */ void Create();
    /* 80C5BFA0 */ void CreateHeap();
    /* 80C5C058 */ void create1st();
    /* 80C5C0FC */ void Execute(f32 (**)[3][4]);
    /* 80C5C17C */ void setNrmDzb();
    /* 80C5C1F8 */ void setWtrDzb();
    /* 80C5C274 */ bool Draw();
    /* 80C5C27C */ void Delete();
};

#endif /* D_A_OBJ_LV3SAKA00_H */
