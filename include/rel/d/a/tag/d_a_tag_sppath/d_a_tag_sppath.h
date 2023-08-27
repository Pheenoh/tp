#ifndef D_A_TAG_SPPATH_H
#define D_A_TAG_SPPATH_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/d_path.h"

class daTagSppath_c : public fopAc_ac_c {
    /* 80D61C18 */ void create();
    /* 80D61EC4 */ ~daTagSppath_c();
    /* 80D62024 */ void getNearPathPos(cXyz*, dPath*);
    /* 80D629C0 */ void execute();
};

#endif /* D_A_TAG_SPPATH_H */
