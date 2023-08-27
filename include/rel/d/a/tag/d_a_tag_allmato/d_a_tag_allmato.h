#ifndef D_A_TAG_ALLMATO_H
#define D_A_TAG_ALLMATO_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_AllMato_c : public fopAc_ac_c {
    /* 80487538 */ void create();
    /* 804876B0 */ bool Delete();
    /* 804876B8 */ void Execute();
    /* 80487C5C */ bool Draw();
    /* 80487C64 */ void srchBouMato(void*, void*);
    /* 80487D00 */ void srchItaMato(void*, void*);
    /* 80487D9C */ void srchTaro(void*, void*);
    /* 80487E38 */ void srchArrow(void*, void*);
    /* 80487ED4 */ void isDelete();
    /* 80487F80 */ void entryBouMatoActors();
    /* 80488034 */ void entryItaMatoActors();
    /* 80488104 */ void getTaroActorP();
    /* 804881C0 */ void getArrowActorP();
    /* 80488238 */ void checkCrsMato();
    /* 80488994 */ void checkCrsMato2();
    /* 80488F40 */ void checkBrkMato();
    /* 80488FD8 */ void evtChange(u16);
    /* 80489608 */ ~daTag_AllMato_c();
};

class daNpcT_ActorMngr_c {
    /* 801456D4 */ void initialize();
    /* 801456E0 */ void entry(fopAc_ac_c*);
    /* 801456FC */ void remove();
    /* 80145708 */ void getActorP();
    /* 80489138 */ ~daNpcT_ActorMngr_c();
    /* 80489180 */ daNpcT_ActorMngr_c();
};

#endif /* D_A_TAG_ALLMATO_H */
