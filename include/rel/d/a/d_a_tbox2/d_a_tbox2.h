#ifndef D_A_TBOX2_H
#define D_A_TBOX2_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"

class daTbox2_c : public fopAc_ac_c {
    /* 80496A18 */ void initBaseMtx();
    /* 80496A54 */ void setBaseMtx();
    /* 80496AB8 */ void Create();
    /* 80496C20 */ void CreateHeap();
    /* 80496E3C */ void create1st();
    /* 8049724C */ void demoProc();
    /* 80497478 */ void openInit();
    /* 80497500 */ void Execute(f32 (**)[3][4]);
    /* 804975EC */ void mode_proc_call();
    /* 80497678 */ void mode_exec_wait();
    /* 80497790 */ void mode_exec();
    /* 8049780C */ void action();
    /* 804978C8 */ void init_actionWait();
    /* 804978D4 */ void actionWait();
    /* 804978D8 */ void init_actionNotOpenDemo();
    /* 804978E4 */ void actionNotOpenDemo();
    /* 8049794C */ void init_actionOpenDemo();
    /* 80497958 */ void actionOpenDemo();
    /* 80497A0C */ void init_actionOpenWait();
    /* 80497A18 */ void actionOpenWait();
    /* 80497BD0 */ void setGetDemoItem();
    /* 80497C60 */ void boxCheck();
    /* 80497DA0 */ void Draw();
    /* 80497E6C */ void Delete();
    /* 80498140 */ bool checkSmallTbox();
};

#endif /* D_A_TBOX2_H */
