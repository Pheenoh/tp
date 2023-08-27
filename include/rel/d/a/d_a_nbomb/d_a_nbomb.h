#ifndef D_A_NBOMB_H
#define D_A_NBOMB_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/cc/d_cc_d.h"

class daPy_boomerangMove_c : public fopAc_ac_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

class daNbomb_c : public fopAc_ac_c {
    /* 804C6DCC */ void coHitCallback(fopAc_ac_c*);
    /* 804C6E34 */ void tgHitCallback(dCcD_GObjInf*);
    /* 804C6FD8 */ void searchEnemy(fopAc_ac_c*);
    /* 804C7114 */ void createHeap();
    /* 804C7324 */ void create();
    /* 804C7B44 */ daNbomb_c();
    /* 804C7EB4 */ ~daNbomb_c();
    /* 804C8294 */ void checkTimerStop();
    /* 804C82D8 */ void checkExplode();
    /* 804C8430 */ void setRoomInfo();
    /* 804C84D8 */ void setSmokePos();
    /* 804C8588 */ void setEffect();
    /* 804C87F0 */ void setHookshotOffset();
    /* 804C88CC */ void setFreeze();
    /* 804C88F0 */ void checkWaterIn();
    /* 804C8928 */ void insectLineCheck();
    /* 804C8A88 */ void setHitPolygon(int);
    /* 804C8CF8 */ void procExplodeInit();
    /* 804C9118 */ void procExplode();
    /* 804C93E0 */ void procCarryInit();
    /* 804C955C */ void procCarry();
    /* 804C9930 */ void procWaitInit();
    /* 804C9984 */ void procWait();
    /* 804CA268 */ void procFlowerWaitInit();
    /* 804CA2EC */ void procFlowerWait();
    /* 804CA3B8 */ void procBoomerangMoveInit(dCcD_GObjInf*);
    /* 804CA4E0 */ void procBoomerangMove();
    /* 804CA688 */ void procInsectMoveInit();
    /* 804CA780 */ void procInsectMove();
    /* 804CAEE8 */ void execute();
    /* 804CBC60 */ void draw();
    /* 804CC2C0 */ void checkExplodeNow();
    /* 804CC2D4 */ void deleteBombAndEffect();
    /* 804CC30C */ void setCargoBombExplode();

    static void* m_arcNameList[6];
};

class daMirror_c : public fopAc_ac_c {
    /* 8003194C */ void entry(J3DModel*);
};

class daAlink_c : public fopAc_ac_c {
    /* 8009D884 */ void getAlinkArcName();
    /* 800D6D94 */ void getFreezeR() const;
    /* 800D6DA4 */ void getFreezeG() const;
    /* 800D6DB4 */ void getFreezeB() const;
    /* 800D7768 */ void checkIcePolygonDamage(cBgS_PolyInfo*);
    /* 800E3760 */ void getBombExplodeTime() const;
    /* 800E3770 */ void getBombGravity() const;
    /* 800E3780 */ void getBombMaxFallSpeed() const;
    /* 800E3790 */ void getBombBoundRate() const;
    /* 800E37A0 */ void getBombStopSpeedY() const;
    /* 800E37B0 */ void getBombMaxSpeedY() const;
    /* 800E37C0 */ void getBombEffScale() const;
    /* 800E37D0 */ void getBombAtR() const;
    /* 800E37E0 */ void getEnemyBombColorR() const;
    /* 800E37F0 */ void getBombWaterGravity() const;
    /* 800E3800 */ void getBombWaterMaxFallSpeed() const;
    /* 800E3810 */ void getBombExplodeWaterEffectLimit() const;
    /* 800E3820 */ void getBombInsectLimitAngle() const;
    /* 80105ABC */ void checkSnowCodePolygon(cBgS_PolyInfo&);
    /* 8010871C */ void setEnemyBombHookshot(fopAc_ac_c*);
};

#endif /* D_A_NBOMB_H */
