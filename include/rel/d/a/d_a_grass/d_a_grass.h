#ifndef D_A_GRASS_H
#define D_A_GRASS_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPy_py_c : public fopAc_ac_c {
    /* 8015F424 */ void checkNowWolfEyeUp();
    /* 8052090C */ void getSwordTopPos() const;
};

class daGrass_c : public fopAc_ac_c {
    /* 8051BEFC */ void createGrass();
    /* 8051BF68 */ void deleteGrass();
    /* 8051C040 */ void executeGrass();
    /* 8051C074 */ void drawGrass();
    /* 8051C0A8 */ void newGrassData(cXyz&, int, u8, u8, s16, u8);
    /* 8051C0D4 */ void createFlower();
    /* 8051C140 */ void deleteFlower();
    /* 8051C218 */ void executeFlower();
    /* 8051C24C */ void drawFlower();
    /* 8051C280 */ void newFlowerData(s8, cXyz&, int, s8, s16);
    /* 8051C304 */ void create();

    static u8 m_myObj[4];
    static u8 m_grass[4];
    static u8 m_flower[4];
};

#endif /* D_A_GRASS_H */
