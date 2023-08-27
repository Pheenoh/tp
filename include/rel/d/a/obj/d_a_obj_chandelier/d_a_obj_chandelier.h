#ifndef D_A_OBJ_CHANDELIER_H
#define D_A_OBJ_CHANDELIER_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daObjChandelier_c : public fopAc_ac_c {
    /* 80BC7F38 */ daObjChandelier_c();
    /* 80BC7F74 */ ~daObjChandelier_c();
    /* 80BC8008 */ void CreateHeap();
    /* 80BC8078 */ void create1st();
    /* 80BC8160 */ void Delete();
    /* 80BC8194 */ void Draw();
    /* 80BC8238 */ void Execute(f32 (**)[3][4]);
    /* 80BC82C0 */ void exeModeWait();
    /* 80BC834C */ void exeModeStartSwg();
    /* 80BC83E4 */ void exeModeDown();
    /* 80BC84C0 */ void exeModeEndSwg();
    /* 80BC851C */ void exeModeHookSwg();
    /* 80BC85E4 */ void init();
    /* 80BC86FC */ void setModelMtx();
    /* 80BC8780 */ void moveSwing(f32, f32, f32, f32);
    /* 80BC89B0 */ void moveSwingFall();
    /* 80BC8B20 */ void hookSwingInitParm();

    static u8 s_exeProc[60];
};

#endif /* D_A_OBJ_CHANDELIER_H */
