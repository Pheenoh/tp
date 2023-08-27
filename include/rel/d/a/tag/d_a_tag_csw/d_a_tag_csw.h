#ifndef D_A_TAG_CSW_H
#define D_A_TAG_CSW_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTagCsw_c : public fopAc_ac_c {
    /* 80D56BD8 */ ~daTagCsw_c();
    /* 80D56D98 */ void setMtx();
    /* 80D56EF8 */ void createHeap();
    /* 80D57320 */ void chkInsideStatueStart();
    /* 80D573C0 */ void create();
    /* 80D5789C */ void Delete();
    /* 80D57968 */ void onLight();
    /* 80D579A8 */ void offLight();
    /* 80D579E8 */ void execute();
    /* 80D583B8 */ void draw();
};

#endif /* D_A_TAG_CSW_H */
