//
// Generated By: dol2asm
// Translation Unit: JPAResource
//

#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JParticle/JPABaseShape.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "dol2asm.h"
#include "dolphin/gx/GX.h"
#include "dolphin/mtx/mtxvec.h"
#include "dolphin/types.h"

//
// Types:
//

struct JPAKeyBlock {
    /* 8027D740 */ void calc(f32);
};

struct JPAFieldBlock {};

struct JPAFieldBase {
    /* 80276A8C */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
};

//
// Forward References:
//

extern "C" void __ct__11JPAResourceFv();
extern "C" void init__11JPAResourceFP7JKRHeap();
extern "C" void calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter();
extern "C" void draw__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter();
extern "C" void drawP__11JPAResourceFP18JPAEmitterWorkData();
extern "C" void drawC__11JPAResourceFP18JPAEmitterWorkData();
extern "C" void setPTev__11JPAResourceFv();
extern "C" void setCTev__11JPAResourceFP18JPAEmitterWorkData();
extern "C" void calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calcKey__11JPAResourceFP18JPAEmitterWorkData();
extern "C" void calcWorkData_c__11JPAResourceFP18JPAEmitterWorkData();
extern "C" void calcWorkData_d__11JPAResourceFP18JPAEmitterWorkData();
extern "C" void prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock();

//
// External References:
//

extern "C" void JPASetPointSize__FP18JPAEmitterWorkData();
extern "C" void JPASetLineWidth__FP18JPAEmitterWorkData();
extern "C" void JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPARegistPrm__FP18JPAEmitterWorkData();
extern "C" void JPARegistEnv__FP18JPAEmitterWorkData();
extern "C" void JPARegistPrmEnv__FP18JPAEmitterWorkData();
extern "C" void JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcClrIdxNormal__FP18JPAEmitterWorkData();
extern "C" void JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcClrIdxRepeat__FP18JPAEmitterWorkData();
extern "C" void JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcClrIdxReverse__FP18JPAEmitterWorkData();
extern "C" void JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcClrIdxMerge__FP18JPAEmitterWorkData();
extern "C" void JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcClrIdxRandom__FP18JPAEmitterWorkData();
extern "C" void JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcPrm__FP18JPAEmitterWorkData();
extern "C" void JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcEnv__FP18JPAEmitterWorkData();
extern "C" void JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData();
extern "C" void JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData();
extern "C" void JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData();
extern "C" void JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData();
extern "C" void JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPALoadTex__FP18JPAEmitterWorkData();
extern "C" void JPALoadTexAnm__FP18JPAEmitterWorkData();
extern "C" void JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcTexIdxNormal__FP18JPAEmitterWorkData();
extern "C" void JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcTexIdxRepeat__FP18JPAEmitterWorkData();
extern "C" void JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcTexIdxReverse__FP18JPAEmitterWorkData();
extern "C" void JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcTexIdxMerge__FP18JPAEmitterWorkData();
extern "C" void JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcTexIdxRandom__FP18JPAEmitterWorkData();
extern "C" void JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPALoadPosMtxCam__FP18JPAEmitterWorkData();
extern "C" void JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPADrawStripe__FP18JPAEmitterWorkData();
extern "C" void JPADrawStripeX__FP18JPAEmitterWorkData();
extern "C" void JPADrawEmitterCallBackB__FP18JPAEmitterWorkData();
extern "C" void JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void setGX__12JPABaseShapeCFP18JPAEmitterWorkData();
extern "C" void JPACalcScaleX__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleY__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleCopy__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleAnmRepeatX__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleAnmRepeatY__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleAnmReverseX__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcScaleAnmReverseY__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcAlphaAnm__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcAlphaFlickAnm__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPARegistChildPrmEnv__FP18JPAEmitterWorkData();
extern "C" void JPACalcChildAlphaOut__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPACalcChildScaleOut__FP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void JPALoadExTex__FP18JPAEmitterWorkData();
extern "C" void create__16JPADynamicsBlockFP18JPAEmitterWorkData();
extern "C" void calc__11JPAKeyBlockFf();
extern "C" void processTillStartFrame__14JPABaseEmitterFv();
extern "C" void processTermination__14JPABaseEmitterFv();
extern "C" void calc_p__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void calc_c__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void func_80280588();
extern "C" void JPAGetXYZRotateMtx__FsssPA4_f();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void load__10JUTTextureF11_GXTexMapID();
extern "C" void _savegpr_14();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_14();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 80274010-80274080 26E950 0070+00 0/0 1/1 0/0 .text            __ct__11JPAResourceFv */
JPAResource::JPAResource() {
    mpDrawEmitterChildFuncList = NULL;
    mpDrawEmitterFuncList = NULL;
    mpCalcEmitterFuncList = NULL;
    mpDrawParticleChildFuncList = NULL;
    mpCalcParticleChildFuncList = NULL;
    mpDrawParticleFuncList = NULL;
    mpCalcParticleFuncList = NULL;
    mpBaseShape = NULL;
    mpExtraShape = NULL;
    mpChildShape = NULL;
    mpExTexShape = NULL;
    mpDynamicsBlock = NULL;
    mpFieldBlocks = NULL;
    mpKeyBlocks = NULL;
    mpTDB1 = NULL;
    mpDrawParticleChildFuncListNum = 0;
    mpCalcParticleChildFuncListNum = 0;
    mpDrawParticleFuncListNum = 0;
    mpCalcParticleFuncListNum = 0;
    mpDrawEmitterChildFuncListNum = 0;
    mpDrawEmitterFuncListNum = 0;
    mpCalcEmitterFuncListNum = 0;
    mTDB1Num = 0;
    mKeyBlockNum = 0;
    mFieldBlockNum = 0;
    mUsrIdx = 0;
}

/* ############################################################################################## */
/* 803C40C0-803C4220 0211E0 0144+1C 2/2 0/0 0/0 .data            jpa_pos */
SECTION_DATA static u8 jpa_pos[324 + 28 /* padding */] ALIGN_DECL(32) = {
    0x00,
    0x00,
    0x00,
    0x32,
    0x00,
    0x00,
    0x32,
    0xCE,
    0x00,
    0x00,
    0xCE,
    0x00,
    0xE7,
    0x00,
    0x00,
    0x19,
    0x00,
    0x00,
    0x19,
    0xCE,
    0x00,
    0xE7,
    0xCE,
    0x00,
    0xCE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xCE,
    0x00,
    0xCE,
    0xCE,
    0x00,
    0x00,
    0x19,
    0x00,
    0x32,
    0x19,
    0x00,
    0x32,
    0xE7,
    0x00,
    0x00,
    0xE7,
    0x00,
    0xE7,
    0x19,
    0x00,
    0x19,
    0x19,
    0x00,
    0x19,
    0xE7,
    0x00,
    0xE7,
    0xE7,
    0x00,
    0xCE,
    0x19,
    0x00,
    0x00,
    0x19,
    0x00,
    0x00,
    0xE7,
    0x00,
    0xCE,
    0xE7,
    0x00,
    0x00,
    0x32,
    0x00,
    0x32,
    0x32,
    0x00,
    0x32,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xE7,
    0x32,
    0x00,
    0x19,
    0x32,
    0x00,
    0x19,
    0x00,
    0x00,
    0xE7,
    0x00,
    0x00,
    0xCE,
    0x32,
    0x00,
    0x00,
    0x32,
    0x00,
    0x00,
    0x00,
    0x00,
    0xCE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x32,
    0x00,
    0x00,
    0x32,
    0x00,
    0x32,
    0x00,
    0x00,
    0x32,
    0xE7,
    0x00,
    0x00,
    0x19,
    0x00,
    0x00,
    0x19,
    0x00,
    0x32,
    0xE7,
    0x00,
    0x32,
    0xCE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x32,
    0xCE,
    0x00,
    0x32,
    0x00,
    0x00,
    0xE7,
    0x32,
    0x00,
    0xE7,
    0x32,
    0x00,
    0x19,
    0x00,
    0x00,
    0x19,
    0xE7,
    0x00,
    0xE7,
    0x19,
    0x00,
    0xE7,
    0x19,
    0x00,
    0x19,
    0xE7,
    0x00,
    0x19,
    0xCE,
    0x00,
    0xE7,
    0x00,
    0x00,
    0xE7,
    0x00,
    0x00,
    0x19,
    0xCE,
    0x00,
    0x19,
    0x00,
    0x00,
    0xCE,
    0x32,
    0x00,
    0xCE,
    0x32,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xE7,
    0x00,
    0xCE,
    0x19,
    0x00,
    0xCE,
    0x19,
    0x00,
    0x00,
    0xE7,
    0x00,
    0x00,
    0xCE,
    0x00,
    0xCE,
    0x00,
    0x00,
    0xCE,
    0x00,
    0x00,
    0x00,
    0xCE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x32,
    0x00,
    0xCE,
    0x32,
    0x00,
    0xCE,
    0x00,
    0x00,
    0x00,
    0xE7,
    0x00,
    0x00,
    0x19,
    0x00,
    0xCE,
    0x19,
    0x00,
    0xCE,
    0xE7,
    0x00,
    0x00,
    0xCE,
    0x00,
    0x00,
    0x00,
    0x00,
    0xCE,
    0x00,
    0x00,
    0xCE,
    0xCE,
    0x00,
    0x19,
    0x00,
    0x00,
    0x19,
    0x32,
    0x00,
    0xE7,
    0x32,
    0x00,
    0xE7,
    0x00,
    0x00,
    0x19,
    0xE7,
    0x00,
    0x19,
    0x19,
    0x00,
    0xE7,
    0x19,
    0x00,
    0xE7,
    0xE7,
    0x00,
    0x19,
    0xCE,
    0x00,
    0x19,
    0x00,
    0x00,
    0xE7,
    0x00,
    0x00,
    0xE7,
    0xCE,
    0x00,
    0x32,
    0x00,
    0x00,
    0x32,
    0x32,
    0x00,
    0x00,
    0x32,
    0x00,
    0x00,
    0x00,
    0x00,
    0x32,
    0xE7,
    0x00,
    0x32,
    0x19,
    0x00,
    0x00,
    0x19,
    0x00,
    0x00,
    0xE7,
    0x00,
    0x32,
    0xCE,
    0x00,
    0x32,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xCE,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 803C4220-803C4240 021340 0020+00 2/2 0/0 0/0 .data            jpa_crd */
SECTION_DATA static u8 jpa_crd[32] = {
    0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x02, 0x01, 0x00, 0x01,
    0x00, 0x00, 0x01, 0x00, 0x01, 0x02, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02,
};

/* 803C4240-803C426C -00001 002C+00 1/1 0/0 0/0 .data            @2829 */
SECTION_DATA static void* lit_2829[11] = {
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1488),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x149C),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x13D0),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1430),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1430),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x14AC),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x14AC),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1474),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1474),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1460),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1400),
};

/* 803C426C-803C4298 -00001 002C+00 1/1 0/0 0/0 .data            @2828 */
SECTION_DATA static void* lit_2828[11] = {
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x112C),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1140),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1074),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x10D4),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x10D4),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1150),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1150),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1118),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1118),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x1104),
    (void*)(((char*)init__11JPAResourceFP7JKRHeap) + 0x10A4),
};

/* 80274080-802755E8 26E9C0 1568+00 2/0 1/1 0/0 .text            init__11JPAResourceFP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::init(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/init__11JPAResourceFP7JKRHeap.s"
}
#pragma pop

/* 802755E8-80275A94 26FF28 04AC+00 0/0 1/1 0/0 .text
 * calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JPAResource::calc(JPAEmitterWorkData* param_0, JPABaseEmitter* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter.s"
}
#pragma pop

/* 80275A94-80275B74 2703D4 00E0+00 0/0 1/1 0/0 .text
 * draw__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter   */
void JPAResource::draw(JPAEmitterWorkData* work, JPABaseEmitter* emtr) {
    work->mpEmtr = emtr;
    work->mpRes = this;
    work->mDrawCount = 0;
    calcWorkData_d(work);
    mpBaseShape->setGX(work);
    for (s32 i = 1; i <= emtr->getDrawTimes(); i++) {
        work->mDrawCount++;
        if (mpBaseShape->isDrawPrntAhead() && mpChildShape != NULL)
            drawC(work);
        drawP(work);
        if (!mpBaseShape->isDrawPrntAhead() && mpChildShape != NULL)
            drawC(work);
    }
}

/* ############################################################################################## */
/* 80455290-80455294 003890 0004+00 2/2 0/0 0/0 .sdata2          @3189 */
SECTION_SDATA2 static f32 lit_3189 = 51.0f / 50.0f;

/* 80455294-80455298 003894 0004+00 2/2 0/0 0/0 .sdata2          @3190 */
SECTION_SDATA2 static f32 lit_3190 = 2.0f / 5.0f;

/* 80455298-8045529C 003898 0004+00 1/1 0/0 0/0 .sdata2          @3191 */
SECTION_SDATA2 static f32 lit_3191 = 1.0f;

/* 8045529C-804552A0 00389C 0004+00 2/2 0/0 0/0 .sdata2          @3192 */
SECTION_SDATA2 static u8 lit_3192[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804552A0-804552A8 0038A0 0008+00 3/3 0/0 0/0 .sdata2          @3194 */
SECTION_SDATA2 static f64 lit_3194 = 4503599627370496.0 /* cast u32 to float */;

/* 80275B74-80275EB0 2704B4 033C+00 1/1 0/0 0/0 .text drawP__11JPAResourceFP18JPAEmitterWorkData
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::drawP(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/drawP__11JPAResourceFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 80275EB0-802761A8 2707F0 02F8+00 1/1 0/0 0/0 .text drawC__11JPAResourceFP18JPAEmitterWorkData
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::drawC(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/drawC__11JPAResourceFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 802761A8-8027642C 270AE8 0284+00 1/1 0/0 0/0 .text            setPTev__11JPAResourceFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::setPTev() {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/setPTev__11JPAResourceFv.s"
}
#pragma pop

/* 8027642C-8027658C 270D6C 0160+00 1/1 0/0 0/0 .text setCTev__11JPAResourceFP18JPAEmitterWorkData
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::setCTev(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/setCTev__11JPAResourceFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 8027658C-80276608 270ECC 007C+00 0/0 1/1 0/0 .text
 * calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::calc_p(JPAEmitterWorkData* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle.s"
}
#pragma pop

/* 80276608-80276684 270F48 007C+00 0/0 1/1 0/0 .text
 * calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::calc_c(JPAEmitterWorkData* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle.s"
}
#pragma pop

/* 80276684-80276700 270FC4 007C+00 0/0 2/2 0/0 .text
 * calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::calcField(JPAEmitterWorkData* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C4298-803C42E0 -00001 002C+1C 1/1 0/0 0/0 .data            @3454 */
SECTION_DATA static void* lit_3454[11 + 7 /* padding */] = {
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0x90),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0x9C),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0x110),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0xB4),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0xC0),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0x110),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0xD8),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0xE4),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0xF0),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0xFC),
    (void*)(((char*)calcKey__11JPAResourceFP18JPAEmitterWorkData) + 0x108),
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 80276700-80276840 271040 0140+00 2/1 0/0 0/0 .text calcKey__11JPAResourceFP18JPAEmitterWorkData
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::calcKey(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/calcKey__11JPAResourceFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 80276840-80276A0C 271180 01CC+00 1/1 0/0 0/0 .text
 * calcWorkData_c__11JPAResourceFP18JPAEmitterWorkData          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAResource::calcWorkData_c(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAResource/calcWorkData_c__11JPAResourceFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 80276A0C-80276A8C 27134C 0080+00 1/1 0/0 0/0 .text
 * calcWorkData_d__11JPAResourceFP18JPAEmitterWorkData          */
void JPAResource::calcWorkData_d(JPAEmitterWorkData* work) {
    Mtx mtx;
    JPAGetXYZRotateMtx(work->mpEmtr->mLocalRot.x * 0xB6, work->mpEmtr->mLocalRot.y * 0xB6,
                       work->mpEmtr->mLocalRot.z * 0xB6, mtx);
    PSMTXConcat(work->mpEmtr->mGlobalRot, mtx, work->mGlobalRot);
    PSMTXMultVecSR(work->mGlobalRot, (Vec*)&work->mpEmtr->mLocalDir, (Vec*)&work->mGlobalEmtrDir);
}

/* 80276A8C-80276A90 2713CC 0004+00 0/0 3/0 0/0 .text
 * prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock */
void JPAFieldBase::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    /* empty function */
}