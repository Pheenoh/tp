#ifndef D_A_OBJ_KIPOT_H
#define D_A_OBJ_KIPOT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daKiPot_c : public fopAc_ac_c {
    /* 80C44D78 */ void setBaseMtx();
    /* 80C44DD0 */ void create();
    /* 80C44E7C */ void Execute();
    /* 80C44EF8 */ void procMain();
    /* 80C44F74 */ void init_modeWait();
    /* 80C44F80 */ void modeWait();
    /* 80C45008 */ void chkEvent();
    /* 80C45058 */ bool Draw();
    /* 80C45060 */ bool Delete();
};

class daKiPot_HIO_c {
    /* 80C44D0C */ daKiPot_HIO_c();
    /* 80C450E8 */ ~daKiPot_HIO_c();
};

#endif /* D_A_OBJ_KIPOT_H */