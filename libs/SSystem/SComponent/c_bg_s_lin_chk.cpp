//
// Generated By: dol2asm
// Translation Unit: c_bg_s_lin_chk
//

#include "SSystem/SComponent/c_bg_s_lin_chk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 80267D5C-80267DBC 26269C 0060+00 0/0 2/2 0/0 .text            __ct__11cBgS_LinChkFv */
cBgS_LinChk::cBgS_LinChk() {
    this->ct();
}

/* 80267DBC-80267E48 2626FC 008C+00 2/1 2/2 0/0 .text            __dt__11cBgS_LinChkFv */
cBgS_LinChk::~cBgS_LinChk() {}

/* 80267E48-80267ED0 262788 0088+00 1/1 0/0 0/0 .text            ct__11cBgS_LinChkFv */
void cBgS_LinChk::ct() {
    cXyz xyz(cXyz::Zero);
    mLin.SetStartEnd(xyz, xyz);
    field_0x40 = xyz;
    setActorPid(0xFFFFFFFF);
    field_0x4c = 0;
    mFrontFlag = 1;
    mBackFlag = 0;
}

/* 80267ED0-80267F40 262810 0070+00 0/0 2/2 0/0 .text Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi */
void cBgS_LinChk::Set2(cXyz const* pStart, cXyz const* pEnd, unsigned int actorPid) {
    mLin.SetStartEnd(*pStart, *pEnd);
    field_0x40 = *pEnd;
    setActorPid(actorPid);
    field_0x4c &= ~0x10;
    ClearPi();
}

/* 80267F40-80267F80 262880 0040+00 0/0 1/1 0/0 .text            PreCalc__11cBgS_LinChkFv */
void cBgS_LinChk::PreCalc() {
    mPreWallChk = !(field_0x4c & 0x40000000);
    mPreGroundChk = !(field_0x4c & 0x80000000);
    mPreRoofChk = !(field_0x4c & 0x20000000);
}