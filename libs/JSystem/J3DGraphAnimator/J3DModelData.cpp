//
// Generated By: dol2asm
// Translation Unit: J3DModelData
//

#include "JSystem/J3DGraphAnimator/J3DModelData.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J3DVertexData {
    /* 80310EF8 */ J3DVertexData();
};

struct J3DShapeTable {
    /* 80326134 */ ~J3DShapeTable();
};

struct J3DMaterialTable {
    /* 8032F5D0 */ J3DMaterialTable();
    /* 8032F604 */ ~J3DMaterialTable();
};

struct J3DMaterial {
    /* 80316290 */ void countDLSize();
    /* 80316E90 */ void newSharedDisplayList(u32);
    /* 80316F24 */ void newSingleSharedDisplayList(u32);
};

struct J3DJointTree {
    /* 80325A18 */ J3DJointTree();
};

struct J3DDrawMtxData {
    /* 803115F4 */ ~J3DDrawMtxData();
};

//
// Forward References:
//

extern "C" void clear__12J3DModelDataFv();
extern "C" void __ct__12J3DModelDataFv();
extern "C" void newSharedDisplayList__12J3DModelDataFUl();
extern "C" void indexToPtr__12J3DModelDataFv();
extern "C" void makeSharedDL__12J3DModelDataFv();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void syncJ3DSysPointers__12J3DModelDataCFv();
extern "C" void syncJ3DSysFlags__12J3DModelDataCFv();
extern "C" void __dt__13J3DShapeTableFv();
extern "C" void __dt__12J3DModelDataFv();

//
// External References:
//

extern "C" void __dl__FPv();
extern "C" void __ct__13J3DVertexDataFv();
extern "C" void __dt__14J3DDrawMtxDataFv();
extern "C" void countDLSize__11J3DMaterialFv();
extern "C" void newSharedDisplayList__11J3DMaterialFUl();
extern "C" void newSingleSharedDisplayList__11J3DMaterialFUl();
extern "C" void __ct__12J3DJointTreeFv();
extern "C" void __ct__16J3DMaterialTableFv();
extern "C" void __dt__16J3DMaterialTableFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSDisableScheduler();
extern "C" void OSEnableScheduler();
extern "C" void GDInitGDLObj();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__12J3DJointTree[4 + 1 /* padding */];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 __GDCurrentDL[4];

//
// Declarations:
//

/* 80325D88-80325DA0 3206C8 0018+00 1/1 2/2 0/0 .text            clear__12J3DModelDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::clear() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/clear__12J3DModelDataFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CED08-803CED14 02BE28 000C+00 3/3 0/0 0/0 .data            __vt__13J3DShapeTable */
SECTION_DATA extern void* __vt__13J3DShapeTable[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13J3DShapeTableFv,
};

/* 803CED14-803CED20 02BE34 000C+00 2/2 0/0 0/0 .data            __vt__12J3DModelData */
SECTION_DATA extern void* __vt__12J3DModelData[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DModelDataFv,
};

/* 80325DA0-80325E14 3206E0 0074+00 0/0 2/2 0/0 .text            __ct__12J3DModelDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DModelData::J3DModelData() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/__ct__12J3DModelDataFv.s"
}
#pragma pop

/* 80325E14-80325EC8 320754 00B4+00 0/0 2/2 0/0 .text newSharedDisplayList__12J3DModelDataFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::newSharedDisplayList(u32 param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/newSharedDisplayList__12J3DModelDataFUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804515E8-804515EC 000AE8 0004+00 1/1 0/0 0/0 .sbss            sInterruptFlag$965 */
static u8 sInterruptFlag[4];

/* 804515EC-804515F0 000AEC 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_804515EC[4];

/* 80325EC8-80325F94 320808 00CC+00 0/0 1/1 0/0 .text            indexToPtr__12J3DModelDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::indexToPtr() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/indexToPtr__12J3DModelDataFv.s"
}
#pragma pop

/* 80325F94-8032600C 3208D4 0078+00 0/0 2/2 0/0 .text            makeSharedDL__12J3DModelDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::makeSharedDL() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/makeSharedDL__12J3DModelDataFv.s"
}
#pragma pop

/* 8032600C-803260CC 32094C 00C0+00 0/0 3/3 7/7 .text simpleCalcMaterial__12J3DModelDataFUsPA4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::simpleCalcMaterial(u16 param_0, f32 (*param_1)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/simpleCalcMaterial__12J3DModelDataFUsPA4_f.s"
}
#pragma pop

/* 803260CC-803260F8 320A0C 002C+00 0/0 1/1 0/0 .text syncJ3DSysPointers__12J3DModelDataCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::syncJ3DSysPointers() const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/syncJ3DSysPointers__12J3DModelDataCFv.s"
}
#pragma pop

/* 803260F8-80326134 320A38 003C+00 1/1 5/5 0/0 .text            syncJ3DSysFlags__12J3DModelDataCFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelData::syncJ3DSysFlags() const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/syncJ3DSysFlags__12J3DModelDataCFv.s"
}
#pragma pop

/* 80326134-8032617C 320A74 0048+00 1/0 0/0 0/0 .text            __dt__13J3DShapeTableFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeTable::~J3DShapeTable() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/__dt__13J3DShapeTableFv.s"
}
#pragma pop

/* 8032617C-80326214 320ABC 0098+00 1/0 0/0 0/0 .text            __dt__12J3DModelDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DModelData::~J3DModelData() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModelData/__dt__12J3DModelDataFv.s"
}
#pragma pop
