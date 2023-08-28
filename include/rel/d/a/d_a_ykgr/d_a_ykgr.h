#ifndef D_A_YKGR_H
#define D_A_YKGR_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "JSystem/JParticle/JPAEmitter.h"

struct dPa_YkgrPcallBack {
    /* 805A848C */ void draw(JPABaseEmitter*, JPABaseParticle*);
    /* 805A84D4 */ void setParam(f32);
    /* 805A8E3C */ ~dPa_YkgrPcallBack();
};

class daYkgr_c : public fopAc_ac_c {
    /* 805A85D4 */ void getPosRate();

    static u8 m_aim_rate[4];
    static u8 m_path[4];
    static u8 m_emitter[4];
};

class daYkgr_HIO_c {
    /* 805A8D98 */ ~daYkgr_HIO_c();
};

#endif /* D_A_YKGR_H */
