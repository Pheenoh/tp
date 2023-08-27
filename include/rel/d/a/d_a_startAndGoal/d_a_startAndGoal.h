#ifndef D_A_STARTANDGOAL_H
#define D_A_STARTANDGOAL_H

#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"
#include "d/d_path.h"

class daStartAndGoal_c : public fopAc_ac_c {
    /* 80D4D84C */ void getType();
    /* 80D4D884 */ void Create();
    /* 80D4D998 */ void init();
    /* 80D4DA68 */ void actorPosCheck();
    /* 80D4DB30 */ void readyStartTimer();
    /* 80D4DBAC */ void isStartCheck();
    /* 80D4DBD0 */ void isReadyCheck();
    /* 80D4DC50 */ void Execute();
    /* 80D4DCF4 */ bool Draw();
    /* 80D4DCFC */ void Delete();
};

class daStartAndGoal_Path_c : public fopAc_ac_c {
    /* 80D4D7B8 */ void chkPassed2(cXyz);
    /* 80D4D928 */ ~daStartAndGoal_Path_c();
};

class daNpcF_SPCurve_c : public fopAc_ac_c {
    /* 80150870 */ void initialize(dPath*, int);
    /* 80D4DE68 */ ~daNpcF_SPCurve_c();
};

class daNpcF_Path_c : public fopAc_ac_c {
    /* 80150900 */ void initialize();
    /* 8015095C */ void setPathInfo(u8, s8, u8);
    /* 80150A24 */ void chkPassed(cXyz);
    /* 80150BE0 */ void setNextIdx();
    /* 80150C18 */ void getNextIdx();
    /* 80D4DE08 */ ~daNpcF_Path_c();
};

#endif /* D_A_STARTANDGOAL_H */
