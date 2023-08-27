#ifndef D_A_OBJ_MAGLIFTROT_H
#define D_A_OBJ_MAGLIFTROT_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daMagLiftRot_c : public fopAc_ac_c {
    /* 80C8EA28 */ void setBaseMtx();
    /* 80C8EB1C */ void CreateHeap();
    /* 80C8EC64 */ void create();
    /* 80C8EF94 */ void Execute(f32 (**)[3][4]);
    /* 80C8F02C */ void moveLift();
    /* 80C8F264 */ void init_modeMove();
    /* 80C8F4A0 */ void modeMove();
    /* 80C8F538 */ void init_modeWait();
    /* 80C8F7CC */ void modeWait();
    /* 80C8F804 */ void init_modeMoveWait();
    /* 80C8F810 */ void modeMoveWait();
    /* 80C8F86C */ void Draw();
    /* 80C8F970 */ void Delete();
};

class daMagLiftRot_HIO_c {
    /* 80C8E94C */ daMagLiftRot_HIO_c();
    /* 80C8FA3C */ ~daMagLiftRot_HIO_c();
};

#endif /* D_A_OBJ_MAGLIFTROT_H */
