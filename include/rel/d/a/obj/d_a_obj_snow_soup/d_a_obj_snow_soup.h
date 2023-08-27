#ifndef D_A_OBJ_SNOW_SOUP_H
#define D_A_OBJ_SNOW_SOUP_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjSnowSoup_c : public fopAc_ac_c {
    /* 80CDF878 */ daObjSnowSoup_c();
    /* 80CDF910 */ ~daObjSnowSoup_c();
    /* 80CDF990 */ void createHeap();
    /* 80CDFA3C */ void create();
    /* 80CDFB70 */ void Delete();
    /* 80CDFBC4 */ void draw();
    /* 80CDFC40 */ void execute();
    /* 80CDFE14 */ void init();
    /* 80CDFEA4 */ void setModelMtx();
    /* 80CDFF14 */ void createSmkEmtCommon();
    /* 80CDFFF8 */ void deleteSmkEmtCommon();
    /* 80CE003C */ void createSmkEmtChange(int);
    /* 80CE0134 */ void deleteSmkEmtChange(int);
};

#endif /* D_A_OBJ_SNOW_SOUP_H */
