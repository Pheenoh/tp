#ifndef D_A_OBJ_LADDER_H
#define D_A_OBJ_LADDER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjLadder : public fopAc_ac_c {
    struct Act_c {
        struct Prm_e {};

        /* 8058D158 */ void CreateHeap();
        /* 8058D1D8 */ void Create();
        /* 8058D378 */ void Mthd_Create();
        /* 8058D4F0 */ bool Delete();
        /* 8058D4F8 */ void Mthd_Delete();
        /* 8058D544 */ void demo_end_reset();
        /* 8058D5AC */ void mode_wait_init();
        /* 8058D5B8 */ void mode_wait();
        /* 8058D614 */ void mode_demoreq_init();
        /* 8058D628 */ void mode_demoreq();
        /* 8058D6E8 */ void mode_vib_init();
        /* 8058D710 */ void mode_vib();
        /* 8058D7A8 */ void mode_drop_init();
        /* 8058D7EC */ void mode_drop();
        /* 8058D9C0 */ void mode_fell_init();
        /* 8058D9CC */ void mode_fell();
        /* 8058D9D0 */ void set_mtx();
        /* 8058DA64 */ void init_mtx();
        /* 8058DAA0 */ void Execute(f32 (**)[3][4]);
        /* 8058DBB8 */ void Draw();

        static u8 const M_arcname[5 + 3 /* padding */];
        static u8 M_tmp_mtx[48];
    };
};

#endif /* D_A_OBJ_LADDER_H */
