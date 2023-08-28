#ifndef D_A_HOZELDA_H
#define D_A_HOZELDA_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daHoZelda_matAnm_c {
    /* 80845EAC */ void init();
    /* 80845EDC */ void calc(J3DMaterial*) const;
    /* 80848D54 */ ~daHoZelda_matAnm_c();
};

class daHoZelda_hio_c0 {
    static u8 const m[16];
};

class daHoZelda_c : public fopAc_ac_c {
    /* 80846000 */ void createHeap();
    /* 80846718 */ void modelCallBack(u16);
    /* 808469B0 */ void create();
    /* 80846DB0 */ ~daHoZelda_c();
    /* 80846F4C */ void setDoubleAnime(f32, f32, f32, u16, u16, f32);
    /* 8084718C */ void setUpperAnime(u16);
    /* 80847234 */ void resetUpperAnime();
    /* 808472C0 */ void setSingleAnime(u16, f32, f32, s16, f32);
    /* 80847430 */ void animePlay();
    /* 80847574 */ void setEyeBtp(u16);
    /* 808475F0 */ void setEyeBtk(u16, u8);
    /* 80847670 */ void setNormalFace();
    /* 808476B0 */ void setAnm();
    /* 80847E44 */ void setBowModel();
    /* 80847F54 */ void setMatrix();
    /* 80848058 */ void shootArrow();
    /* 80848090 */ void deleteArrow();
    /* 80848118 */ void setBowBck(u16);
    /* 8084819C */ void setRideOffset();
    /* 80848204 */ void clearEyeMove();
    /* 80848254 */ void setEyeMove(cXyz const*, s16, s16);
    /* 808484B8 */ void setNeckAngle();
    /* 80848774 */ void searchBodyAngle();
    /* 808489CC */ void execute();
    /* 80848B64 */ void draw();
};

#endif /* D_A_HOZELDA_H */
