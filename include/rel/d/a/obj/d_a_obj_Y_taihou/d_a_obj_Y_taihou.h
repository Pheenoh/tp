#ifndef D_A_OBJ_Y_TAIHOU_H
#define D_A_OBJ_Y_TAIHOU_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjCarry_c : public fopAc_ac_c {};

class daObjYtaihou_c : public fopAc_ac_c {
    /* 80B9FDE8 */ void create1st();
    /* 80B9FEB0 */ void setIronBall(daObjCarry_c*);
    /* 80B9FF08 */ void getEvent(u8);
    /* 80B9FF1C */ void loadAngle();
    /* 80B9FFAC */ void saveAngle();
    /* 80BA0060 */ void setNextAngle();
    /* 80BA0084 */ void setMtx();
    /* 80BA0208 */ void rotateCheck();
    /* 80BA045C */ void shotCheck();
    /* 80BA0964 */ void eventStart();
    /* 80BA0974 */ void CreateHeap();
    /* 80BA09E4 */ void Create();
    /* 80BA0A94 */ void Execute(f32 (**)[3][4]);
    /* 80BA0B4C */ void Draw();
    /* 80BA0C1C */ void Delete();
    /* 80BA0FA4 */ ~daObjYtaihou_c();
};

#endif /* D_A_OBJ_Y_TAIHOU_H */
