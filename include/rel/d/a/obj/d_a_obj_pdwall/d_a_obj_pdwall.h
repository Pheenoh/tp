#ifndef D_A_OBJ_PDWALL_H
#define D_A_OBJ_PDWALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjPDwall_c : public fopAc_ac_c {
    /* 80CAC7F8 */ void create1st();
    /* 80CAC8DC */ void setMtx();
    /* 80CACA44 */ void CreateHeap();
    /* 80CACBA8 */ void Create();
    /* 80CACCE0 */ void Execute(f32 (**)[3][4]);
    /* 80CACF14 */ void Draw();
    /* 80CACFD4 */ void Delete();
    /* 80CAD140 */ ~daObjPDwall_c();
};

#endif /* D_A_OBJ_PDWALL_H */
