#ifndef D_A_MIDNA_H
#define D_A_MIDNA_H

#include "dolphin/types.h"
#include "d/a/d_a_alink.h"

class daMidna_matAnm_c : public J3DMaterialAnm {
    /* 804BC218 */ void init();
    /* 804BC248 */ void calc(J3DMaterial*) const;
    /* 804C63E0 */ ~daMidna_matAnm_c();
};

class daMidna_McaMorfCB1_c {
    /* 804BC36C */ void execute(u16, J3DTransformInfo*);
    /* 804C6398 */ ~daMidna_McaMorfCB1_c();
};

struct daMidna_hio_c0 {
    static u8 const m[32];
};

#endif /* D_A_MIDNA_H */
