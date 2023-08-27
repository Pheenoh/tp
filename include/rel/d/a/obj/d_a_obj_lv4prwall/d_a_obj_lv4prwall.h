#ifndef D_A_OBJ_LV4PRWALL_H
#define D_A_OBJ_LV4PRWALL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjLv4PRwall_c : public fopAc_ac_c {
    /* 80C68C98 */ void create1st();
    /* 80C68DD8 */ void setMtx();
    /* 80C68F20 */ void CreateHeap();
    /* 80C68FA0 */ void Create();
    /* 80C690D8 */ void Execute(f32 (**)[3][4]);
    /* 80C696BC */ void Draw();
    /* 80C69760 */ void Delete();
    /* 80C69870 */ ~daObjLv4PRwall_c();
};

#endif /* D_A_OBJ_LV4PRWALL_H */
