#ifndef D_A_OBJ_POFIRE_H
#define D_A_OBJ_POFIRE_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daPoFire_c : public fopAc_ac_c {
    /* 80CB2A0C */ void setBaseMtx();
    /* 80CB2A74 */ void create();
    /* 80CB2BB8 */ void Execute();
    /* 80CB2BFC */ void procMain();
    /* 80CB2D84 */ void setFire();
    /* 80CB2F68 */ void searchCandle(void*, void*);
    /* 80CB2FD4 */ void searchFireTag(void*, void*);
    /* 80CB3024 */ void init_modeInitMove();
    /* 80CB30FC */ void modeInitMove();
    /* 80CB31FC */ void modeWait();
    /* 80CB32EC */ void init_modeWaitSetEffect();
    /* 80CB3380 */ void modeWaitSetEffect();
    /* 80CB3540 */ void init_modeMoveOut();
    /* 80CB355C */ void modeMoveOut();
    /* 80CB3714 */ void init_modeMove();
    /* 80CB3730 */ void modeMove();
    /* 80CB38EC */ void init_modeMoveWait();
    /* 80CB3918 */ void modeMoveWait();
    /* 80CB3958 */ void modeNoMove();
    /* 80CB39CC */ void init_modeOnFire();
    /* 80CB39E0 */ void modeOnFire();
    /* 80CB3ADC */ void init_modeFireEnd();
    /* 80CB3AE8 */ void modeFireEnd();
    /* 80CB3B70 */ void eventStart();
    /* 80CB3BE0 */ void eventRun();
    /* 80CB3C64 */ bool eventEnd();
    /* 80CB3C6C */ bool Draw();
    /* 80CB3C74 */ void Delete();
    /* 80CB3E58 */ ~daPoFire_c();
};

class daPoFire_HIO_c {
    /* 80CB294C */ daPoFire_HIO_c();
    /* 80CB3D24 */ ~daPoFire_HIO_c();
};

class daPoCandle_c : public fopAc_ac_c {
    /* 80CB3E3C */ void getFirePos();
};

#endif /* D_A_OBJ_POFIRE_H */
