//
// Generated By: dol2asm
// Translation Unit: JUTProcBar
//

#include "JSystem/JUtility/JUTProcBar.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "global.h"

//
// Forward References:
//

extern "C" void __ct__10JUTProcBarFv();
extern "C" void __dt__10JUTProcBarFv();
extern "C" void create__10JUTProcBarFv();
extern "C" void destroy__10JUTProcBarFv();
extern "C" void clear__10JUTProcBarFv();
extern "C" void bar_subroutine__10JUTProcBarFiiiiiiiQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void adjustMeterLength__10JUTProcBarFUlPfffPi();
extern "C" void draw__10JUTProcBarFv();
extern "C" void drawProcessBar__10JUTProcBarFv();
extern "C" static void addrToXPos__FPvi();
extern "C" static void byteToXLen__Fii();
extern "C" static void heapBar__FP7JKRHeapiiiii();
extern "C" void drawHeapBar__10JUTProcBarFv();
extern "C" void __ct__Q210JUTProcBar5CTimeFv();
extern "C" u8 sManager__10JUTProcBar[4];

//
// External References:
//

extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void J2DDrawLine__FffffQ28JUtility6TColori();
extern "C" void J2DFillBox__FffffQ28JUtility6TColor();
extern "C" void J2DDrawFrame__FffffQ28JUtility6TColorUc();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_21();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sCurrentHeap__7JKRHeap[4];
extern "C" u8 sRootHeap__7JKRHeap[4];
extern "C" u8 mCodeStart__7JKRHeap[4];
extern "C" u8 mCodeEnd__7JKRHeap[4];
extern "C" u8 mUserRamStart__7JKRHeap[4];
extern "C" u8 mUserRamEnd__7JKRHeap[4];
extern "C" u8 mMemorySize__7JKRHeap[4];
extern "C" u8 sManager__8JUTVideo[4];

//
// Declarations:
//

/* 802E5888-802E599C 2E01C8 0114+00 1/1 0/0 0/0 .text            __ct__10JUTProcBarFv */
#ifdef NONMATCHING  // inline CTime ctor
JUTProcBar::JUTProcBar() {
    mVisible = true;
    mHeapBarVisible = true;
    field_0x108 = 0;
    s32 height = JUTGetVideoManager()->getRenderMode()->efb_height;
    if (height > 400) {
        mParams.mBarWidth = 2;
        mParams.mPosX = 0x27;
        mParams.mPosY = height - 0x28;
        mParams.mWidth = 0x232;
        mParams.mUserPosition = height - 0x46;
    } else {
        mParams.mBarWidth = 1;
        mParams.mPosX = 0x27;
        mParams.mPosY = height - 0x14;
        mParams.mWidth = 0x232;
        mParams.mUserPosition = height - 0x23;
    }
    field_0x110 = 1;
    field_0x128 = 0;
    mWatchHeap = NULL;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTProcBar::JUTProcBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/__ct__10JUTProcBarFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80451558-8045155C 000A58 0004+00 4/4 6/6 0/0 .sbss            sManager__10JUTProcBar */
JUTProcBar* JUTProcBar::sManager;

/* 802E599C-802E59E0 2E02DC 0044+00 1/1 0/0 0/0 .text            __dt__10JUTProcBarFv */
JUTProcBar::~JUTProcBar() {
    sManager = NULL;
}

/* 802E59E0-802E5A28 2E0320 0048+00 0/0 1/1 0/0 .text            create__10JUTProcBarFv */
JUTProcBar* JUTProcBar::create() {
    if (!sManager) {
        sManager = new JUTProcBar();
    }
    return sManager;
}

/* 802E5A28-802E5A60 2E0368 0038+00 0/0 1/1 0/0 .text            destroy__10JUTProcBarFv */
void JUTProcBar::destroy() {
    if (sManager) {
        delete sManager;
    }
    sManager = NULL;
}

/* ############################################################################################## */
/* 80450900-80450904 000380 0004+00 2/2 0/0 0/0 .sdata           oneFrameRate */
SECTION_SDATA static f32 oneFrameRate = 8.0f;

/* 80450904-80450908 000384 0004+00 2/2 0/0 0/0 .sdata           oneFrameRateUser */
SECTION_SDATA static f32 oneFrameRateUser = 10.0f;

/* 804560D8-804560DC 0046D8 0004+00 1/1 0/0 0/0 .sdata2          @2258 */
SECTION_SDATA2 static f32 lit_2258 = 8.0f;

/* 804560DC-804560E0 0046DC 0004+00 2/2 0/0 0/0 .sdata2          @2259 */
SECTION_SDATA2 static f32 lit_2259 = 10.0f;

/* 802E5A60-802E5B30 2E03A0 00D0+00 0/0 1/1 0/0 .text            clear__10JUTProcBarFv */
#ifdef NONMATCHING  // data
void JUTProcBar::clear() {
    sManager->idleStart();
    sManager->cpuStart();
    sManager->gpStart();
    sManager->wholeLoopStart();
    sManager->mCostFrame = 0;
    oneFrameRate = 8.0f;
    oneFrameRateUser = 10.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/clear__10JUTProcBarFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804560E0-804560E8 0046E0 0004+04 1/1 0/0 0/0 .sdata2          @2279 */
SECTION_SDATA2 static f32 lit_2279[1 + 1 /* padding */] = {
    6.0f,
    /* padding */
    0.0f,
};

/* 804560E8-804560F0 0046E8 0008+00 7/7 0/0 0/0 .sdata2          @2281 */
SECTION_SDATA2 static f64 lit_2281 = 4503601774854144.0 /* cast s32 to float */;

/* 802E5B30-802E5CC4 2E0470 0194+00 1/1 0/0 0/0 .text
 * bar_subroutine__10JUTProcBarFiiiiiiiQ28JUtility6TColorQ28JUtility6TColor */
#ifdef NONMATCHING  // data
void JUTProcBar::bar_subroutine(int param_0, int param_1, int param_2, int param_3, int param_4,
                                int param_5, int param_6, JUtility::TColor param_7,
                                JUtility::TColor param_8) {
    int var1 = param_6 * param_3 / param_4;
    J2DFillBox(param_0, param_1, param_5 * param_3 / param_4, param_2, param_7);
    if (var1 < 0) {
        return;
    }
    if (var1 < 6) {
        J2DFillBox(param_0, param_1, var1, param_2, param_8);
    } else {
        J2DFillBox(param_0 + var1 - 6, param_1, 6.0f, param_2, param_8);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::bar_subroutine(int param_0, int param_1, int param_2, int param_3, int param_4,
                                    int param_5, int param_6, JUtility::TColor param_7,
                                    JUtility::TColor param_8) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/bar_subroutine__10JUTProcBarFiiiiiiiQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804560F0-804560F4 0046F0 0004+00 2/2 0/0 0/0 .sdata2          @2308 */
SECTION_SDATA2 static f32 lit_2308 = 20.0f;

/* 804560F4-804560F8 0046F4 0004+00 1/1 0/0 0/0 .sdata2          @2309 */
SECTION_SDATA2 static f32 lit_2309 = 16666.0f;

/* 804560F8-804560FC 0046F8 0004+00 1/1 0/0 0/0 .sdata2          @2310 */
SECTION_SDATA2 static f32 lit_2310 = 30.0f;

/* 804560FC-80456100 0046FC 0004+00 1/1 0/0 0/0 .sdata2          @2311 */
SECTION_SDATA2 static f32 lit_2311 = 1.0f / 10.0f;

/* 80456100-80456104 004700 0004+00 1/1 0/0 0/0 .sdata2          @2312 */
SECTION_SDATA2 static f32 lit_2312 = 1.0f / 5.0f;

/* 80456104-80456108 004704 0004+00 1/1 0/0 0/0 .sdata2          @2313 */
SECTION_SDATA2 static f32 lit_2313 = 60.0f;

/* 80456108-80456110 004708 0008+00 3/3 0/0 0/0 .sdata2          @2315 */
SECTION_SDATA2 static f64 lit_2315 = 4503599627370496.0 /* cast u32 to float */;

/* 802E5CC4-802E5E08 2E0604 0144+00 1/1 0/0 0/0 .text adjustMeterLength__10JUTProcBarFUlPfffPi */
#ifdef NONMATCHING  // float literals
void JUTProcBar::adjustMeterLength(u32 param_0, f32* param_1, f32 param_2, f32 param_3,
                                   int* param_4) {
    BOOL var2 = false;
    float var1 = *param_1;
    while (var1 > param_2) {
        if (param_0 * var1 * FLOAT_LABEL(lit_2308) / FLOAT_LABEL(lit_2309) <=
            mParams.mWidth - FLOAT_LABEL(lit_2310))
            break;

        var1 -= FLOAT_LABEL(lit_2311);
        var2 = true;
    }

    if (var1 >= param_3)
        *param_4 = 0;
    if (var1 > param_3 - FLOAT_LABEL(lit_2312))
        var1 = param_3;

    while (!var2 && var1 < param_3) {
        (*param_4)++;
        if (*param_4 < 0x1e)
            break;
        if ((param_0 * var1 * FLOAT_LABEL(lit_2308) / FLOAT_LABEL(lit_2309)) <
            (mParams.mWidth - FLOAT_LABEL(lit_2313)))
            var1 += FLOAT_LABEL(lit_2312);
        break;
    }
    *param_1 = var1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::adjustMeterLength(u32 param_0, f32* param_1, f32 param_2, f32 param_3,
                                       int* param_4) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/adjustMeterLength__10JUTProcBarFUlPfffPi.s"
}
#pragma pop
#endif

/* 802E5E08-802E5E3C 2E0748 0034+00 0/0 1/1 0/0 .text            draw__10JUTProcBarFv */
void JUTProcBar::draw() {
    drawProcessBar();
    drawHeapBar();
}

/* ############################################################################################## */
/* 8045155C-80451560 000A5C 0004+00 1/1 0/0 0/0 .sbss            cnt$2330 */
static int cnt;

/* 80451560-80451564 000A60 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80451560[4];

/* 80451564-80451568 000A64 0004+00 1/1 0/0 0/0 .sbss            cntUser$2379 */
static int cntUser;

/* 80451568-80451570 000A68 0008+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80451568[8];

/* 80456110-80456114 004710 0004+00 1/1 0/0 0/0 .sdata2          @2580 */
SECTION_SDATA2 static f32 lit_2580 = 1.0f;

/* 80456114-80456118 004714 0004+00 1/1 0/0 0/0 .sdata2          @2581 */
SECTION_SDATA2 static f32 lit_2581 = 3.0f;

/* 802E5E3C-802E6D3C 2E077C 0F00+00 1/1 0/0 0/0 .text            drawProcessBar__10JUTProcBarFv */
#ifdef NONMATCHING  // regalloc, signed/unsigned, instruction order
void JUTProcBar::drawProcessBar() {
    if (mVisible) {
		int frameDuration = 16666; // duration in miliseconds? for how long a frame takes,
		if (JUTVideo::getManager() && ((JUTVideo::getManager()->getRenderMode()->vi_tv_mode >> 2) & 0x0f) == 1) // possibly a define
			frameDuration = 20000;                                                                            // duration for PAL

		static int cnt = 0;
		adjustMeterLength(mWholeLoop.mCost, &oneFrameRate, 1.0f, 10.0f, &cnt);
		int r28 = oneFrameRate * 20.0f;
		int r27 = mParams.mBarWidth * 8;
		int r26 = mParams.mBarWidth * 2;
		int r25 = mParams.mBarWidth * 10;
		int r24 = (mParams.mWidth - 4 + r28) / r28;

		mIdle.accumePeek();
		mGp.accumePeek();
		mCpu.accumePeek();

		u32 totalTime = (mGp.mCost - mGpWait.mCost) - mCpu.mCost; // unsure of types
		u32 gpuTime   = (mGp.mCost - mGpWait.mCost);
		J2DFillBox(mParams.mPosX, mParams.mPosY, mParams.mWidth, r27, JUtility::TColor(0, 0, 50, 200));
		J2DDrawFrame(mParams.mPosX, mParams.mPosY, mParams.mWidth, r27, JUtility::TColor(50, 50, 150, 255), 6);
		if (mCostFrame > r24)
			J2DFillBox(mParams.mPosX, mParams.mPosY + r27 + 1, mParams.mWidth, 1.0f, JUtility::TColor(250, 0, 0, 200));
		else
			J2DFillBox(mParams.mPosX, mParams.mPosY + r27 + 1, mCostFrame * r28 + 2, 1.0f, JUtility::TColor(0, 250, 250, 200));

		int stack92 = mWholeLoop.mCost * r28 / frameDuration;
		if (stack92 > mParams.mWidth)
			J2DFillBox(mParams.mPosX, mParams.mPosY, mParams.mWidth, 1.0f, JUtility::TColor(255, 100, 0, 255));
		else
			J2DFillBox(mParams.mPosX, mParams.mPosY, stack92, 1.0f, JUtility::TColor(50, 255, 0, 255));

		if (field_0x110 == 0) {
			int r23 = mParams.mPosY + mParams.mBarWidth;
			bar_subroutine(mParams.mPosX + 1, r23, r26, r28, frameDuration, mGp.mCost, mGp.field_0x8, JUtility::TColor(80, 255, 80, 255),
			               JUtility::TColor(100, 255, 120, 255));
			r23 += mParams.mBarWidth * 2;
			bar_subroutine(mParams.mPosX + 1, r23, r26, r28, frameDuration, mCpu.mCost, mCpu.field_0x8, JUtility::TColor(255, 80, 80, 255),
			               JUtility::TColor(255, 100, 100, 255));
			r23 += mParams.mBarWidth * 2;
			bar_subroutine(mParams.mPosX + 1, r23, r26, r28, frameDuration, mIdle.mCost, mIdle.field_0x8, JUtility::TColor(180, 180, 160, 255),
			               JUtility::TColor(200, 200, 200, 255));
		} else {
			int r22 = mParams.mPosY + mParams.mBarWidth;
			int r21 = mParams.mPosX + 1;
			bar_subroutine(r21, r22, r26, r28, frameDuration, gpuTime, -1, JUtility::TColor(80, 255, 80, 255),
			               JUtility::TColor(80, 255, 80, 255));
			int thingy1 = gpuTime * r28 / frameDuration + r21; // inline or define?
			J2DFillBox(thingy1, r22, mGpWait.calcBarSize(r28, frameDuration), r26, JUtility::TColor(0, 255, 0, 255));
			int r30 = mGp.calcBarSize(r28, frameDuration) + r21;
			r21 += totalTime * r28 / frameDuration;
			r22 += mParams.mBarWidth * 2;
			bar_subroutine(r21, r22, r26, r28, frameDuration, mCpu.mCost, -1, JUtility::TColor(255, 80, 80, 255),
			               JUtility::TColor(255, 80, 80, 255));
			r22 += mParams.mBarWidth * 2;
			bar_subroutine(r30, r22, r26, r28, frameDuration, mIdle.mCost, -1, JUtility::TColor(180, 180, 160, 255),
			               JUtility::TColor(180, 180, 160, 255));
		}
		for (int i = 1; i < r24; i++) {
			int temp2 = mParams.mPosX + i * r28 + 1;
			J2DDrawLine(temp2, mParams.mPosY + mParams.mBarWidth, temp2, mParams.mPosY + r27 - mParams.mBarWidth,
			            (i % 5) != 0 ? JUtility::TColor(100, 100, 255, 255) : JUtility::TColor(180, 255, 255, 255), 12);
		}
		u32 temp3 = 0;
		for (int i = 0; i < 8; i++) {
			CTime* time = &mUsers[i];
			if (++time->field_0xc >= 0x10 || time->mCost > time->field_0x8) {
				time->field_0x8 = time->mCost;
				time->field_0xc = 0;
			}
			if (time->field_0x8 > temp3)
				temp3 = time->field_0x8;
		}
		if ((bool)temp3 == true) {
			static int cntUser = 0;
			adjustMeterLength(temp3, &oneFrameRateUser, 1.0f, 10.0f, &cntUser);
			int r21 = oneFrameRateUser * 20.0f;
			J2DFillBox(mParams.mPosX, mParams.mUserPosition, mParams.mWidth, r25, JUtility::TColor(0, 0, 50, 200));
			J2DDrawFrame(mParams.mPosX, mParams.mUserPosition, mParams.mWidth, r25, JUtility::TColor(50, 50, 150, 255), 6);
			for (int i = 0; i < 8; i++) {
				CTime* time = &mUsers[i];
				if (++time->field_0xc >= 0x10 || time->mCost > time->field_0x8) {
					time->field_0x8 = time->mCost;
					time->field_0xc = 0;
				}
				if (time->mCost != 0 || time->field_0x8 != 0) {
					int temp4   = time->mCost * r21 / frameDuration;
					int temp5   = time->field_0x8 * r21 / frameDuration;
					time->mCost = 0;
					J2DFillBox(mParams.mPosX + 1, mParams.mUserPosition + mParams.mBarWidth + i * mParams.mBarWidth, temp4,
					           mParams.mBarWidth, JUtility::TColor(time->mR, time->mG, time->mB, 255));

					if (temp5 < 3u)
						J2DFillBox(mParams.mPosX, mParams.mUserPosition + mParams.mBarWidth + i * mParams.mBarWidth, temp5,
						           mParams.mBarWidth, JUtility::TColor(255, 200, 50, 255));
					else
						J2DFillBox(mParams.mPosX + temp5 - 3, mParams.mUserPosition + mParams.mBarWidth + i * mParams.mBarWidth, 3.0f,
						           mParams.mBarWidth, JUtility::TColor(255, 200, 50, 255));
				}
			}

			int r22 = (mParams.mWidth - 4 + r21) / r21;

			for (int i = 1; i < r22; i++) {
				int temp6 = mParams.mPosX + i * r21 + 1;
				J2DDrawLine(temp6, mParams.mUserPosition + mParams.mBarWidth, temp6, mParams.mUserPosition + r25 - mParams.mBarWidth,
				            (i % 5) != 0 ? JUtility::TColor(100, 100, 255, 255) : JUtility::TColor(180, 255, 255, 255), 12);
			}
		}
		field_0x108 = 0;
	}
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::drawProcessBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/drawProcessBar__10JUTProcBarFv.s"
}
#pragma pop
#endif

/* 802E6D3C-802E6DA4 2E167C 0068+00 2/2 0/0 0/0 .text            addrToXPos__FPvi */
#ifdef NONMATCHING  // data
static int addrToXPos(void* param_0, int param_1) {
    return param_1 * (((u32)param_0 - 0x80000000) / (float)JKRHeap::mMemorySize);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int addrToXPos(void* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/addrToXPos__FPvi.s"
}
#pragma pop
#endif

/* 802E6DA4-802E6E0C 2E16E4 0068+00 2/2 0/0 0/0 .text            byteToXLen__Fii */
#ifdef NONMATCHING  // data
static int byteToXLen(int param_0, int param_1) {
    return param_1 * (param_0 / (float)JKRHeap::mMemorySize);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int byteToXLen(int param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/byteToXLen__Fii.s"
}
#pragma pop
#endif

/* 802E6E0C-802E6FA0 2E174C 0194+00 1/1 0/0 0/0 .text            heapBar__FP7JKRHeapiiiii */
#ifdef NONMATCHING  // data
static void heapBar(JKRHeap* param_0, int param_1, int param_2, int param_3, int param_4,
                    int param_5) {
    int stack52 = param_1 + addrToXPos(param_0->getStartAddr(), param_4);
    int var1 = param_1 + addrToXPos(param_0->getEndAddr(), param_4);
    int stack36 = byteToXLen(param_0->getTotalFreeSize(), param_4);
    J2DFillBox(stack52, param_2 - param_5 * 2 + param_5 / 2, var1 - stack52, param_5 / 2,
               JUtility::TColor(255, 0, 200, 255));
    J2DFillBox(stack52, param_2 - param_5 * 2 + param_5 / 2, stack36, param_5 / 2,
               JUtility::TColor(255, 180, 250, 255));
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void heapBar(JKRHeap* param_0, int param_1, int param_2, int param_3, int param_4,
                        int param_5) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/heapBar__FP7JKRHeapiiiii.s"
}
#pragma pop
#endif

/* 802E6FA0-802E7340 2E18E0 03A0+00 1/1 0/0 0/0 .text            drawHeapBar__10JUTProcBarFv */
#ifdef NONMATCHING  // regalloc
void JUTProcBar::drawHeapBar() {
    if (mHeapBarVisible)
    {
        int start; // required/workaround for regswaps, end might be a shared variable too, however doesn't seem to be needed?
        int posX = mParams.mPosX;
        int posY = mParams.mPosY;
        int barHeight = mParams.mBarWidth * 2;
        int width = mParams.mWidth;
        int height = mParams.mBarWidth * 2;

        // draw main box in opaque bordeaux red and main frame in purple?
        J2DFillBox(posX, posY - (height * 2), width, height, JUtility::TColor(100, 0, 50, 200));
        J2DDrawFrame(posX, posY - (height * 2), width, height, JUtility::TColor(100, 50, 150, 255), 6);
        
        // Draws a pink line that shows the size of the memstart to start of arenalow?
        start = posX + addrToXPos(JKRHeap::getCodeStart(), width);
        int codeEnd = posX + addrToXPos(JKRHeap::getCodeEnd(), width);
        J2DFillBox(start, posY - (height * 2), codeEnd - start, height, JUtility::TColor(255, 50, 150, 255));
        
        // draws a dark blue line that shows how much memory is free?
        start = posX + addrToXPos(JKRHeap::getUserRamStart(), width);
        int userEnd = posX + addrToXPos(JKRHeap::getUserRamEnd(), width);
        J2DFillBox(start, posY - (height * 2), userEnd - start, height, JUtility::TColor(0, 50, 150, 255));
        
        // draws a light blue line that shows how much memory is free in the root heap(blends to light pink, not sure how this works)
        int size = byteToXLen(JKRHeap::getRootHeap()->getTotalFreeSize(), width);
        J2DFillBox(start, posY - (height * 2), size, height / 2, JUtility::TColor(0, 250, 250, 255));
        if (field_0x128 == 0)
        {
            // draws a line of either the watch heap(if available), otherwise draw the current heap
            JKRHeap *heap = mWatchHeap ? mWatchHeap : JKRGetCurrentHeap();
            if (heap != JKRHeap::getSystemHeap()) { 
                heapBar(heap, posX, posY, barHeight, width, height);
            }
                
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::drawHeapBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/drawHeapBar__10JUTProcBarFv.s"
}
#pragma pop
#endif

/* 802E7340-802E7354 2E1C80 0014+00 1/1 0/0 0/0 .text            __ct__Q210JUTProcBar5CTimeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTProcBar::CTime::CTime() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/__ct__Q210JUTProcBar5CTimeFv.s"
}
#pragma pop