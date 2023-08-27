#ifndef D_A_TAG_SS_DRINK_H
#define D_A_TAG_SS_DRINK_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTag_SSDrink_c : public fopAc_ac_c {
    /* 80D62DB8 */ void create();
    /* 80D62E5C */ bool Delete();
    /* 80D62E64 */ void Execute();
    /* 80D62ED0 */ bool Draw();
    /* 80D62ED8 */ void getTypeFromParam();
    /* 80D62F80 */ void getSwitchFromParam();
    /* 80D62F8C */ void getFlowNodeNum();
    /* 80D62FC8 */ void getValue();
    /* 80D62FD4 */ void restart();
    /* 80D63044 */ void initialize();
    /* 80D630BC */ void checkProcess(int (daTag_SSDrink_c::*)(void*));
    /* 80D630E8 */ void setProcess(int (daTag_SSDrink_c::*)(void*));
    /* 80D631D4 */ void setAttnPos();
    /* 80D63208 */ void chkEvent();
    /* 80D63384 */ void orderEvent();
    /* 80D63490 */ void wait(void*);
    /* 80D635C8 */ void talk(void*);
    /* 80D63724 */ ~daTag_SSDrink_c();
};

#endif /* D_A_TAG_SS_DRINK_H */
