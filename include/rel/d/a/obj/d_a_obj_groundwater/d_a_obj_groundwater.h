#ifndef D_A_OBJ_GROUNDWATER_H
#define D_A_OBJ_GROUNDWATER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daGrdWater_c : public fopAc_ac_c {
    /* 80C13540 */ void setBaseMtx();
    /* 80C13618 */ void CreateHeap();
    /* 80C139E4 */ void create();
    /* 80C13DB0 */ daGrdWater_c();
    /* 80C13FEC */ void Execute(f32 (**)[3][4]);
    /* 80C14194 */ void init_modeWait();
    /* 80C141A0 */ void modeWait();
    /* 80C141A4 */ void init_modeLevelUpA();
    /* 80C1423C */ void modeLevelUpA();
    /* 80C142AC */ void init_modeLevelDownA();
    /* 80C14320 */ void modeLevelDownA();
    /* 80C1437C */ void init_modeLevelUpB();
    /* 80C14414 */ void modeLevelUpB();
    /* 80C14484 */ void init_modeLevelDownB();
    /* 80C144F8 */ void modeLevelDownB();
    /* 80C14554 */ void Draw();
    /* 80C147EC */ void Delete();
};

class daGrdWater_HIO_c {
    /* 80C134AC */ daGrdWater_HIO_c();
    /* 80C148A8 */ ~daGrdWater_HIO_c();
};

#endif /* D_A_OBJ_GROUNDWATER_H */