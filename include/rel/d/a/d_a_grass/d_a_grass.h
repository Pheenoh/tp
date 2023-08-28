#ifndef D_A_GRASS_H
#define D_A_GRASS_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"
#include "d/cc/d_cc_mass_s.h"

class dGrass_data_c {
    /* 8051D88C */ void WorkCo(fopAc_ac_c*, u32, int);
    /* 8051DA20 */ void WorkAt_NoCutAnim(fopAc_ac_c*, u32, int, dCcMassS_HitInf*, cCcD_Obj*);
    /* 8051DF54 */ void Direction_Set(fopAc_ac_c*, u32, int, dCcMassS_HitInf*, cCcD_Obj*, csXyz*);
    /* 8051E1C8 */ void WorkAt(fopAc_ac_c*, u32, int, dCcMassS_HitInf*, u16);
    /* 8051EB88 */ void hitCheck(int, u16);
    /* 80520940 */ ~dGrass_data_c();
    /* 8052097C */ dGrass_data_c();
};

class dGrass_room_c {
    /* 8051EDE0 */ void newData(dGrass_data_c*);
    /* 8051EDF0 */ void deleteData();
    /* 80520928 */ dGrass_room_c();
};

class dGrass_packet_c {
    /* 8051BFBC */ ~dGrass_packet_c();
    /* 8051EE8C */ dGrass_packet_c();
    /* 8051F03C */ void draw();
    /* 8051FABC */ void calc();
    /* 80520030 */ void update();
    /* 8052067C */ void setData(dGrass_data_c*, int, cXyz&, int, u8, u8, s16, u8);
    /* 80520770 */ void newData(cXyz&, int, u8, u8, s16, u8);
    /* 80520864 */ void deleteRoom(int);
    /* 80520898 */ void newAnm();
    /* 805208E4 */ void setAnm(int, s16);

    static u8 m_deleteRoom[12];
};

class dGrass_anm_c {
    /* 80520934 */ dGrass_anm_c();
};

class dFlower_data_c {
    /* 80520988 */ void WorkCo(fopAc_ac_c*, u32, int);
    /* 80520AD8 */ void deleteAnm();
    /* 80520B34 */ void WorkAt_NoCutAnim(fopAc_ac_c*, u32, int, dCcMassS_HitInf*, cCcD_Obj*);
    /* 80520CFC */ void WorkAt(fopAc_ac_c*, u32, int, dCcMassS_HitInf*);
    /* 80521A3C */ void hitCheck(fopAc_ac_c*, int);
    /* 80522FCC */ ~dFlower_data_c();
    /* 80523008 */ dFlower_data_c();
};

class dFlower_room_c {
    /* 80521BF8 */ void newData(dFlower_data_c*);
    /* 80521C08 */ void deleteData();
    /* 80522FB4 */ dFlower_room_c();
};

class dFlower_packet_c {
    /* 8051C194 */ ~dFlower_packet_c();
    /* 80521C64 */ dFlower_packet_c();
    /* 80521DAC */ void draw();
    /* 80522774 */ void calc();
    /* 80522A64 */ void update();
    /* 80522CBC */ void setData(dFlower_data_c*, int, s8, cXyz&, int, s8, s16);
    /* 80522E28 */ void newData(s8, cXyz&, int, s8, s16);
    /* 80522F0C */ void deleteRoom(int);
    /* 80522F40 */ void newAnm();
    /* 80522F8C */ void setAnm(int, s16);

    static u8 m_deleteRoom[12];
};

class dFlower_anm_c {
    /* 80522FC0 */ dFlower_anm_c();
};

class daGrass_c : public fopAc_ac_c {
public:
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

    static void deleteRoomGrass(u8);
    static void deleteRoomFlower(u8);

    static u8 m_myObj[4];
    static u8 m_grass[4];
    static u8 m_flower[4];
};

#endif /* D_A_GRASS_H */
