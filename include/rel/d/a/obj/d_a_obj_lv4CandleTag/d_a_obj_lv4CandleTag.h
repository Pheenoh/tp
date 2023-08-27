#ifndef D_A_OBJ_LV4CANDLETAG_H
#define D_A_OBJ_LV4CANDLETAG_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class dalv4CandleTag_c : public fopAc_ac_c {
    /* 80C5D4B8 */ void setBaseMtx();
    /* 80C5D4F0 */ void create();
    /* 80C5D5D4 */ void Execute();
    /* 80C5D618 */ void procMain();
    /* 80C5D6D4 */ void init_modeWatch();
    /* 80C5D6E0 */ void modeWatch();
    /* 80C5D78C */ void init_modeNG();
    /* 80C5D814 */ void modeNG();
    /* 80C5D8A0 */ void init_modeNGWait();
    /* 80C5D8AC */ void modeNGWait();
    /* 80C5D8FC */ void init_modeEnd();
    /* 80C5D908 */ void modeEnd();
    /* 80C5D90C */ void eventStart();
    /* 80C5D930 */ bool Draw();
    /* 80C5D938 */ bool Delete();
    /* 80C5DAC8 */ ~dalv4CandleTag_c();
};

class dalv4CandleTag_HIO_c {
    /* 80C5D44C */ dalv4CandleTag_HIO_c();
    /* 80C5D9C0 */ ~dalv4CandleTag_HIO_c();
};

#endif /* D_A_OBJ_LV4CANDLETAG_H */
