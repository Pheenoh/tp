#ifndef D_A_OBJ_LV8KEKKAITRAP_H
#define D_A_OBJ_LV8KEKKAITRAP_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daKekaiTrap_c : public fopAc_ac_c {
    /* 80C87D40 */ void setBaseMtx();
    /* 80C87DC8 */ void CreateHeap();
    /* 80C87E48 */ void create();
    /* 80C87FB0 */ void Execute(f32 (**)[3][4]);
    /* 80C88000 */ void moveMain();
    /* 80C88104 */ void init_modeWait();
    /* 80C88110 */ void modeWait();
    /* 80C88114 */ void init_modeMoveUp();
    /* 80C88138 */ void modeMoveUp();
    /* 80C881F0 */ void init_modeMoveDown();
    /* 80C88214 */ void modeMoveDown();
    /* 80C882C8 */ void Draw();
    /* 80C8836C */ void Delete();
};

class daKekaiTrap_HIO_c {
    /* 80C87CAC */ daKekaiTrap_HIO_c();
    /* 80C88438 */ ~daKekaiTrap_HIO_c();
};

#endif /* D_A_OBJ_LV8KEKKAITRAP_H */