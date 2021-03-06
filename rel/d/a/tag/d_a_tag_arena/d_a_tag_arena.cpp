//
// Generated By: dol2asm
// Translation Unit: d_a_tag_arena
//

#include "rel/d/a/tag/d_a_tag_arena/d_a_tag_arena.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagArena_c {};

//
// Forward References:
//

extern "C" static void daTagArena_Create__FP10fopAc_ac_c();
extern "C" static void daTagArena_Delete__FP12daTagArena_c();
extern "C" extern void* g_profile_Tag_Arena[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

//
// Declarations:
//

/* 80D55CD8-80D55D28 000078 0050+00 1/0 0/0 0/0 .text            daTagArena_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagArena_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_arena/d_a_tag_arena/daTagArena_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D55D28-80D55D58 0000C8 0030+00 1/0 0/0 0/0 .text            daTagArena_Delete__FP12daTagArena_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagArena_Delete(daTagArena_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_arena/d_a_tag_arena/daTagArena_Delete__FP12daTagArena_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D55D60-80D55D80 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagArena_Method */
SECTION_DATA static void* l_daTagArena_Method[8] = {
    (void*)daTagArena_Create__FP10fopAc_ac_c,
    (void*)daTagArena_Delete__FP12daTagArena_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D55D80-80D55DB0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Arena */
SECTION_DATA extern void* g_profile_Tag_Arena[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x024C0000, (void*)&g_fpcLf_Method,
    (void*)0x00000568, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x014D0000, (void*)&l_daTagArena_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
