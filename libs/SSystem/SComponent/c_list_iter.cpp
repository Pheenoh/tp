//
// Generated By: dol2asm
// Translation Unit: c_list_iter
//

#include "SSystem/SComponent/c_list_iter.h"
#include "SSystem/SComponent/c_list.h"
#include "dolphin/types.h"

/* 80266060-80266098 0038+00 s=0 e=5 z=0  None .text
 * cLsIt_Method__FP15node_list_classPFP10node_classPv_iPv       */
int cLsIt_Method(node_list_class* pList, cNdIt_MethodFunc pMethod, void* pUserData) {
    if (pList->mSize > 0)
        return cNdIt_Method(pList->mpHead, pMethod, pUserData);
    else
        return 1;
}

/* 80266098-802660D0 0038+00 s=0 e=4 z=0  None .text
 * cLsIt_Judge__FP15node_list_classPFP10node_classPv_PvPv       */
void* cLsIt_Judge(node_list_class* pList, cNdIt_JudgeFunc pJudge, void* pUserData) {
    if (pList->mSize > 0)
        return cNdIt_Judge(pList->mpHead, pJudge, pUserData);
    else
        return NULL;
}