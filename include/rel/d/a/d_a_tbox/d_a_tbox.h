#ifndef D_A_TBOX_H
#define D_A_TBOX_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

class daTbox_c : public fopAc_ac_c {
    /* 80490E50 */ void getModelInfo();
    /* 80490E6C */ void commonShapeSet();
    /* 804911B8 */ s32 effectShapeSet();
    /* 804911C0 */ s32 envShapeSet();
    /* 804911C8 */ void bgCheckSet();
    /* 8049129C */ void lightReady();
    /* 804912EC */ void setLightPos();
    /* 8049135C */ bool checkEnv();
    /* 80491364 */ void checkAppear();
    /* 8049139C */ void checkOpen();
    /* 804913D0 */ void clrDzb();
    /* 8049141C */ void setDzb();
    /* 80491484 */ void surfaceProc();
    /* 80491544 */ void checkNormal();
    /* 804915BC */ void checkEnvEffectTbox();
    /* 80491624 */ void calcHeapSize();
    /* 804916A4 */ void CreateHeap();
    /* 80491744 */ void CreateInit();
    /* 804919B0 */ void initPos();
    /* 80491BB0 */ void initAnm();
    /* 80491F68 */ void boxCheck();
    /* 804920A8 */ void demoProcOpen();
    /* 8049216C */ void lightColorProc();
    /* 8049233C */ void environmentProc();
    /* 80492398 */ void lightUpProc();
    /* 804923D4 */ void lightDownProc();
    /* 80492408 */ void dropProcInitCall();
    /* 80492450 */ void dropProcInit();
    /* 804928DC */ void calcJumpGoalAndAngle(cXyz*, s16*);
    /* 80492B10 */ void getDropSAngle(s16*);
    /* 80492BC8 */ void getDir();
    /* 80492C84 */ void setRotAxis(cXyz const*, cXyz const*);
    /* 80492D08 */ void dropProcInit2();
    /* 80492F50 */ void dropProc();
    /* 80493338 */ void demoInitAppear();
    /* 80493484 */ void demoProcAppear();
    /* 80493518 */ void demoProc();
    /* 80493838 */ void OpenInit_com();
    /* 804939A4 */ void OpenInit();
    /* 804939F4 */ bool actionWait();
    /* 804939FC */ void actionDemo();
    /* 80493CC8 */ void actionDemo2();
    /* 80493D90 */ void actionDropDemo();
    /* 80493ED8 */ void getBombItemNo(u8, u8);
    /* 80493FE8 */ void getBombItemNo2(u8, u8, u8);
    /* 80494144 */ void getBombItemNo3(u8, u8, u8, u8);
    /* 804942CC */ void getBombItemNoMain(u8);
    /* 804945C8 */ void setGetDemoItem();
    /* 804946A4 */ void actionOpenWait();
    /* 804948CC */ void actionNotOpenDemo();
    /* 80494950 */ void checkDrop();
    /* 80494A0C */ void settingDropDemoCamera();
    /* 80494D88 */ void actionSwOnWait();
    /* 80494E98 */ void actionSwOnWait2();
    /* 80494F44 */ void actionDropWait();
    /* 80495058 */ void actionGenocide();
    /* 8049518C */ void actionDropWaitForWeb();
    /* 80495250 */ void actionDropForWeb();
    /* 804953D4 */ void initBaseMtx();
    /* 80495490 */ void setBaseMtx();
    /* 80495660 */ void mode_proc_call();
    /* 804956EC */ void mode_exec_wait();
    /* 80495818 */ void mode_exec();
    /* 80495910 */ void create1st();
    /* 804959EC */ void Execute(f32 (**)[3][4]);
    /* 80495AF0 */ void Draw();
    /* 80495C9C */ void Delete();
    /* 804961B0 */ bool Create();
    /* 804961B8 */ bool checkSmallTbox();
};

class daTbox_HIO_c {
    /* 80490D2C */ daTbox_HIO_c();
    /* 804960B8 */ ~daTbox_HIO_c();
};

class daPy_py_c : public fopAc_ac_c {
    static u8 m_midnaActor[4];
};

#endif /* D_A_TBOX_H */
