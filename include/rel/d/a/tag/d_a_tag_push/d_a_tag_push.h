#ifndef D_A_TAG_PUSH_H
#define D_A_TAG_PUSH_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_Push_c : public fopAc_ac_c {
    /* 804902B8 */ void srchActor(void*, void*);
    /* 80490418 */ void create();
    /* 804904D4 */ bool Delete();
    /* 804904DC */ void Execute();
    /* 804906BC */ bool Draw();
    /* 804906C4 */ void isDelete();
    /* 80490724 */ void chkPointInArea(cXyz);
    /* 804908CC */ ~daTag_Push_c();
};

class daNpcT_ActorMngr_c {
    /* 801456D4 */ void initialize();
    /* 801456E0 */ void entry(fopAc_ac_c*);
    /* 80145708 */ void getActorP();
    /* 80490884 */ ~daNpcT_ActorMngr_c();
};

#endif /* D_A_TAG_PUSH_H */
