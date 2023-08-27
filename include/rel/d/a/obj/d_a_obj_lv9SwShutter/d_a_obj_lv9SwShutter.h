#ifndef D_A_OBJ_LV9SWSHUTTER_H
#define D_A_OBJ_LV9SWSHUTTER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daLv9SwShutter_c : public fopAc_ac_c {
    /* 80C8CF38 */ void setBaseMtx();
    /* 80C8CFD4 */ void CreateHeap();
    /* 80C8D040 */ void create();
    /* 80C8D168 */ void Execute(f32 (**)[3][4]);
    /* 80C8D1B8 */ void moveShutter();
    /* 80C8D2BC */ void init_modeWait();
    /* 80C8D2C8 */ void modeWait();
    /* 80C8D2CC */ void init_modeOpen();
    /* 80C8D2D8 */ void modeOpen();
    /* 80C8D440 */ void init_modeClose();
    /* 80C8D458 */ void modeClose();
    /* 80C8D5D0 */ void Draw();
    /* 80C8D674 */ void Delete();
};

class daLv9SwShutter_HIO_c {
    /* 80C8CEAC */ daLv9SwShutter_HIO_c();
    /* 80C8D730 */ ~daLv9SwShutter_HIO_c();
};

#endif /* D_A_OBJ_LV9SWSHUTTER_H */
