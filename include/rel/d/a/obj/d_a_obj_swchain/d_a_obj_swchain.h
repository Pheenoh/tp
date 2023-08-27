#ifndef D_A_OBJ_SWCHAIN_H
#define D_A_OBJ_SWCHAIN_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class daObjSwChain_c : public fopAc_ac_c {
    struct chain_s {
        /* 80CF8B00 */ ~chain_s();
        /* 80CF8B3C */ chain_s();
    };

    /* 80CF8768 */ void Create();
    /* 80CF89C0 */ void CreateHeap();
    /* 80CF8B48 */ void create1st();
    /* 80CF8ED0 */ void execute();
    /* 80CF94E4 */ void getChainBasePos(cXyz*);
    /* 80CF9500 */ void chain_control();
    /* 80CF99C0 */ void chain_control2();
    /* 80CFA05C */ void initChainMtx();
    /* 80CFA124 */ void setChainMtx();
    /* 80CFA4A8 */ void chain_count_control();
    /* 80CFAD50 */ void setTension();
    /* 80CFB450 */ void getTopChainNo();
    /* 80CFB464 */ void checkPlayerPull();
    /* 80CFB53C */ void draw();
    /* 80CFB5E8 */ void _delete();
};

#endif /* D_A_OBJ_SWCHAIN_H */
