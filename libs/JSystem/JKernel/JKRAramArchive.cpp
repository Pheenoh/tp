//
// Generated By: dol2asm
// Translation Unit: JKRAramArchive
//

// #include "JSystem/JKernel/JKRAramArchive.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUTException {
    /* 802E21FC */ void panic_f(char const*, int, char const*, ...);
};

struct JSUPtrLink {};

struct JSUPtrList {
    /* 802DBFF0 */ void prepend(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
    /* 802CE500 */ void free(void*, JKRHeap*);
    /* 802CE548 */ void free(void*);
    /* 802CEB18 */ void copyMemory(void*, void*, u32);

    static u8 sSystemHeap[4];
};

struct JKRFileLoader {
    /* 802D41D4 */ void unmount();

    static u8 sVolumeList[12];
};

struct JKRFile {
    /* 802D7B90 */ ~JKRFile();
};

struct JKRExpandSwitch {};

struct JKRDvdRipper {
    struct EAllocDirection {};

    /* 802D9C54 */ void loadToMainRAM(s32, u8*, JKRExpandSwitch, u32, JKRHeap*,
                                      JKRDvdRipper::EAllocDirection, u32, int*, u32*);
};

struct JKRDvdFile {
    /* 802D96A0 */ JKRDvdFile(s32);
};

struct JKRDvdAramRipper {
    /* 802DA874 */ void loadToAram(s32, u32, JKRExpandSwitch, u32, u32, u32*);
};

struct JKRDisposer {
    /* 802D14E4 */ ~JKRDisposer();
};

struct JKRArchive {
    struct EMountDirection {};

    struct SDIFileEntry {};

    struct EMountMode {};

    /* 802D5A38 */ void becomeCurrent(char const*);
    /* 802D5C64 */ void getResource(u32, char const*);
    /* 802D5BE8 */ void getResource(char const*);
    /* 802D5D8C */ void readResource(void*, u32, u32, char const*);
    /* 802D5E30 */ void readResource(void*, u32, char const*);
    /* 802D5FB4 */ void removeResourceAll();
    /* 802D603C */ void removeResource(void*);
    /* 802D609C */ void detachResource(void*);
    /* 802D60D8 */ void getResSize(void const*) const;
    /* 802D6150 */ void countFile(char const*) const;
    /* 802D61B0 */ void getFirstFile(char const*) const;
    /* 802D6294 */ JKRArchive(s32, JKRArchive::EMountMode);
    /* 802D6334 */ ~JKRArchive();
    /* 802D65A4 */ void findFsResource(char const*, u32) const;
    /* 802D6734 */ void findPtrResource(void const*) const;
    /* 802D693C */ void setExpandSize(JKRArchive::SDIFileEntry*, u32);
    /* 802D6978 */ void getExpandSize(JKRArchive::SDIFileEntry*) const;
};

struct JKRAramHeap {
    struct EAllocMode {};

    /* 802D2FBC */ void alloc(u32, JKRAramHeap::EAllocMode);
};

struct JKRAramArchive {
    /* 802D70C0 */ JKRAramArchive(s32, JKRArchive::EMountDirection);
    /* 802D7168 */ ~JKRAramArchive();
    /* 802D72A8 */ void open(s32);
    /* 802D75E0 */ void fetchResource(JKRArchive::SDIFileEntry*, u32*);
    /* 802D76F4 */ void fetchResource(void*, u32, JKRArchive::SDIFileEntry*, u32*);
    /* 802D77F8 */ void getAramAddress_Entry(JKRArchive::SDIFileEntry*);
    /* 802D781C */ void getAramAddress(char const*);
    /* 802D7914 */ void fetchResource_subroutine(u32, u32, JKRHeap*, int, u8**);
    /* 802D7858 */ void fetchResource_subroutine(u32, u32, u8*, u32, int);
    /* 802D7A64 */ void getExpandedResSize(void const*) const;
};

struct JKRAram {
    /* 802D25B4 */ void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);

    static u8 sAramObject[4];
};

//
// Forward References:
//

extern "C" void __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection();
extern "C" void __dt__14JKRAramArchiveFv();
extern "C" void open__14JKRAramArchiveFl();
extern "C" void fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry();
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc();
extern "C" void getExpandedResSize__14JKRAramArchiveCFPCv();
extern "C" void __dt__7JKRFileFv();
extern "C" extern char const* const JKRAramArchive__stringBase0;

//
// External References:
//

SECTION_INIT void memset();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void free__7JKRHeapFPv();
extern "C" void copyMemory__7JKRHeapFPvPvUl();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void unmount__13JKRFileLoaderFv();
extern "C" void becomeCurrent__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlPCc();
extern "C" void removeResourceAll__10JKRArchiveFv();
extern "C" void removeResource__10JKRArchiveFPv();
extern "C" void detachResource__10JKRArchiveFPv();
extern "C" void getResSize__10JKRArchiveCFPCv();
extern "C" void countFile__10JKRArchiveCFPCc();
extern "C" void getFirstFile__10JKRArchiveCFPCc();
extern "C" void __ct__10JKRArchiveFlQ210JKRArchive10EMountMode();
extern "C" void __dt__10JKRArchiveFv();
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
extern "C" void findPtrResource__10JKRArchiveCFPCv();
extern "C" void setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl();
extern "C" void getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry();
extern "C" void __ct__10JKRDvdFileFl();
extern "C" void
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl();
extern "C" void loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void DCInvalidateRange();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void abs();
extern "C" u8 sVolumeList__13JKRFileLoader[12];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC328-803CC348 029448 0020+00 1/1 4/4 0/0 .data            __vt__7JKRFile */
SECTION_DATA extern void* __vt__7JKRFile[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__7JKRFileFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 803CC348-803CC398 029468 0050+00 2/2 0/0 0/0 .data            __vt__14JKRAramArchive */
SECTION_DATA extern void* __vt__14JKRAramArchive[20] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JKRAramArchiveFv,
    (void*)unmount__13JKRFileLoaderFv,
    (void*)becomeCurrent__10JKRArchiveFPCc,
    (void*)getResource__10JKRArchiveFPCc,
    (void*)getResource__10JKRArchiveFUlPCc,
    (void*)readResource__10JKRArchiveFPvUlPCc,
    (void*)readResource__10JKRArchiveFPvUlUlPCc,
    (void*)removeResourceAll__10JKRArchiveFv,
    (void*)removeResource__10JKRArchiveFPv,
    (void*)detachResource__10JKRArchiveFPv,
    (void*)getResSize__10JKRArchiveCFPCv,
    (void*)countFile__10JKRArchiveCFPCc,
    (void*)getFirstFile__10JKRArchiveCFPCc,
    (void*)getExpandedResSize__14JKRAramArchiveCFPCv,
    (void*)fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl,
    (void*)fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl,
    (void*)setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl,
    (void*)getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry,
};

/* 802D70C0-802D7168 2D1A00 00A8+00 0/0 1/1 0/0 .text
 * __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramArchive::JKRAramArchive(s32 param_0, JKRArchive::EMountDirection param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection.s"
}
#pragma pop

/* 802D7168-802D72A8 2D1AA8 0140+00 1/0 0/0 0/0 .text            __dt__14JKRAramArchiveFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramArchive::~JKRAramArchive() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__dt__14JKRAramArchiveFv.s"
}
#pragma pop

/* 802D72A8-802D75E0 2D1BE8 0338+00 1/1 0/0 0/0 .text            open__14JKRAramArchiveFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::open(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/open__14JKRAramArchiveFl.s"
}
#pragma pop

/* 802D75E0-802D76F4 2D1F20 0114+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::fetchResource(JKRArchive::SDIFileEntry* param_0, u32* param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop

/* 802D76F4-802D77F8 2D2034 0104+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::fetchResource(void* param_0, u32 param_1,
                                       JKRArchive::SDIFileEntry* param_2, u32* param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop

/* 802D77F8-802D781C 2D2138 0024+00 1/1 0/0 0/0 .text
 * getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::getAramAddress_Entry(JKRArchive::SDIFileEntry* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry.s"
}
#pragma pop

/* 802D781C-802D7858 2D215C 003C+00 0/0 1/1 0/0 .text getAramAddress__14JKRAramArchiveFPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::getAramAddress(char const* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/getAramAddress__14JKRAramArchiveFPCc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D188-8039D188 0297E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D188 = "JKRAramArchive.cpp";
SECTION_DEAD static char const* const stringBase_8039D19B = "%s";
SECTION_DEAD static char const* const stringBase_8039D19E = "??? bad sequence\n";
#pragma pop

/* 802D7858-802D7914 2D2198 00BC+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::fetchResource_subroutine(u32 param_0, u32 param_1, u8* param_2,
                                                  u32 param_3, int param_4) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli.s"
}
#pragma pop

/* 802D7914-802D7A64 2D2254 0150+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::fetchResource_subroutine(u32 param_0, u32 param_1, JKRHeap* param_2,
                                                  int param_3, u8** param_4) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc.s"
}
#pragma pop

/* 802D7A64-802D7B90 2D23A4 012C+00 1/0 0/0 0/0 .text getExpandedResSize__14JKRAramArchiveCFPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramArchive::getExpandedResSize(void const* param_0) const {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/getExpandedResSize__14JKRAramArchiveCFPCv.s"
}
#pragma pop

/* 802D7B90-802D7BF0 2D24D0 0060+00 1/0 0/0 0/0 .text            __dt__7JKRFileFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRFile::~JKRFile() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__dt__7JKRFileFv.s"
}
#pragma pop

/* 8039D188-8039D188 0297E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
