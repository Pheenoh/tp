//
// Generated By: dol2asm
// Translation Unit: c_tree_iter
//

#include "SSystem/SComponent/c_tree_iter.h"
#include "SSystem/SComponent/c_list.h"
#include "SSystem/SComponent/c_list_iter.h"
#include "SSystem/SComponent/c_tree.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 80266540-802665B4 0074+00 s=0 e=2 z=0  None .text
 * cTrIt_Method__FP21node_lists_tree_classPFP10node_classPv_iPv */
int cTrIt_Method(node_lists_tree_class* pTree, cNdIt_MethodFunc pMethod, void* pUserData) {
    node_list_class* pList = pTree->mpLists;
    int i = pTree->mNumLists;
    int ret = 1;
    while (i-- > 0) {
        int sub = cLsIt_Method(pList++, pMethod, pUserData);
        if (sub == 0)
            ret = 0;
    }
    return ret;
}

/* 802665B4-80266624 0070+00 s=0 e=2 z=0  None .text
 * cTrIt_Judge__FP21node_lists_tree_classPFP10node_classPv_PvPv */
void* cTrIt_Judge(node_lists_tree_class* pTree, cNdIt_JudgeFunc pJudge, void* pUserData) {
    node_list_class* pList = pTree->mpLists;
    int i = pTree->mNumLists;
    while (i-- > 0) {
        void* pJudgeRet = cLsIt_Judge(pList++, pJudge, pUserData);
        if (pJudgeRet != NULL)
            return pJudgeRet;
    }
    return NULL;
}