//
// Generated By: dol2asm
// Translation Unit: object-sound
//

#include "JSystem/JStudio/JStudio_JAudio2/object-sound.h"
#include "dol2asm.h"
#include "JSystem/JStudio/JStudio_JAudio2/control.h"

//
// Forward References:
//

extern "C" static void func_8028D728();
extern "C" static void func_8028D750();
extern "C" static void func_8028D778();
extern "C" static void func_8028D7A0();
extern "C" static void func_8028D800();
extern "C" void __ct__Q215JStudio_JAudio214TAdaptor_soundFPQ215JStudio_JAudio213TCreateObject();
extern "C" void __dt__Q215JStudio_JAudio214TAdaptor_soundFv();
extern "C" void adaptor_do_prepare__Q215JStudio_JAudio214TAdaptor_soundFv();
extern "C" void adaptor_do_end__Q215JStudio_JAudio214TAdaptor_soundFv();
extern "C" void adaptor_do_update__Q215JStudio_JAudio214TAdaptor_soundFUl();
extern "C" void
adaptor_do_SOUND__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_BEGIN__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_BEGIN_FADE_IN__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_END__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_END_FADE_OUT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_NODE__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_ENABLE__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_REPEAT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_CONTINUOUS__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_LOCATED__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_ON_EXIT_NOT_END__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void __cl__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_CFfPQ27JStudio8TAdaptor();
extern "C" void prepareSound___Q215JStudio_JAudio214TAdaptor_soundFv();
extern "C" void beginSound_fadeIn___Q215JStudio_JAudio214TAdaptor_soundFv();
extern "C" void endSound_fadeOut___Q215JStudio_JAudio214TAdaptor_soundFUl();
extern "C" void __dt__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_Fv();
extern "C" void func_8028E0F4();
extern "C" u8 saoVVOSetValue___Q215JStudio_JAudio214TAdaptor_sound[72];

//
// External References:
//

extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
extern "C" void adaptor_do_begin__Q27JStudio8TAdaptorFv();
extern "C" void adaptor_do_data__Q27JStudio8TAdaptorFPCvUlPCvUl();
extern "C" void
adaptor_setVariableValue_immediate__Q27JStudio8TAdaptorFPCQ37JStudio8TAdaptor27TSetVariableValue_immediate();
extern "C" void adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl();
extern "C" void __dt__Q27JStudio14TAdaptor_soundFv();
extern "C" void
transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl();
extern "C" void __ct__Q27JStudio14TVariableValueFv();
extern "C" void releaseSound__14JAISoundHandleFv();
extern "C" void lockWhenPrepared__15JAISoundStatus_Fv();
extern "C" void unlockIfLocked__15JAISoundStatus_Fv();
extern "C" void stop__8JAISoundFUl();
extern "C" void stop__8JAISoundFv();
extern "C" void moveVolume__18JAISoundParamsMoveFfUl();
extern "C" void movePitch__18JAISoundParamsMoveFfUl();
extern "C" void moveFxMix__18JAISoundParamsMoveFfUl();
extern "C" void movePan__18JAISoundParamsMoveFfUl();
extern "C" void func_802A2FEC();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" u8 const sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound[12];
extern "C" extern void* __vt__Q27JStudio14TAdaptor_sound[20];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];
extern "C" extern u8 data_804511F8[8];

//
// Declarations:
//

/* 8028D728-8028D750 288068 0028+00 1/1 0/0 0/0 .text
 * setValue_VOLUME___Q215JStudio_JAudio226@unnamed@object_sound_cpp@FP8JAISoundf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8028D728() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028D728.s"
}
#pragma pop

/* 8028D750-8028D778 288090 0028+00 1/1 0/0 0/0 .text
 * setValue_PAN___Q215JStudio_JAudio226@unnamed@object_sound_cpp@FP8JAISoundf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8028D750() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028D750.s"
}
#pragma pop

/* 8028D778-8028D7A0 2880B8 0028+00 1/1 0/0 0/0 .text
 * setValue_PITCH___Q215JStudio_JAudio226@unnamed@object_sound_cpp@FP8JAISoundf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8028D778() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028D778.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455510-80455514 003B10 0004+00 3/3 0/0 0/0 .sdata2          @1470 */
SECTION_SDATA2 static u8 lit_1470[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8028D7A0-8028D800 2880E0 0060+00 1/1 0/0 0/0 .text
 * setValue_TEMPO___Q215JStudio_JAudio226@unnamed@object_sound_cpp@FP8JAISoundf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8028D7A0() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028D7A0.s"
}
#pragma pop

/* 8028D800-8028D828 288140 0028+00 1/1 0/0 0/0 .text
 * setValue_ECHO___Q215JStudio_JAudio226@unnamed@object_sound_cpp@FP8JAISoundf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8028D800() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028D800.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C5A78-803C5A88 022B98 0010+00 2/2 0/0 0/0 .data
 * __vt__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_     */
SECTION_DATA extern void* __vt__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__cl__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_CFfPQ27JStudio8TAdaptor,
    (void*)__dt__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_Fv,
};

/* 803C5A88-803C5AD8 022BA8 0050+00 2/2 0/0 0/0 .data __vt__Q215JStudio_JAudio214TAdaptor_sound */
SECTION_DATA extern void* __vt__Q215JStudio_JAudio214TAdaptor_sound[20] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q215JStudio_JAudio214TAdaptor_soundFv,
    (void*)adaptor_do_prepare__Q215JStudio_JAudio214TAdaptor_soundFv,
    (void*)adaptor_do_begin__Q27JStudio8TAdaptorFv,
    (void*)adaptor_do_end__Q215JStudio_JAudio214TAdaptor_soundFv,
    (void*)adaptor_do_update__Q215JStudio_JAudio214TAdaptor_soundFUl,
    (void*)adaptor_do_data__Q27JStudio8TAdaptorFPCvUlPCvUl,
    (void*)
        adaptor_do_SOUND__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_BEGIN__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_BEGIN_FADE_IN__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_END__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_END_FADE_OUT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_NODE__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_ENABLE__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_REPEAT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_CONTINUOUS__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_LOCATED__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_ON_EXIT_NOT_END__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl,
};

/* 8028D828-8028D8F4 288168 00CC+00 0/0 1/1 0/0 .text
 * __ct__Q215JStudio_JAudio214TAdaptor_soundFPQ215JStudio_JAudio213TCreateObject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JAudio2::TAdaptor_sound::TAdaptor_sound(JStudio_JAudio2::TCreateObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028D828.s"
}
#pragma pop

/* 8028D8F4-8028D9A4 288234 00B0+00 1/0 0/0 0/0 .text __dt__Q215JStudio_JAudio214TAdaptor_soundFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JAudio2::TAdaptor_sound::~TAdaptor_sound() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/__dt__Q215JStudio_JAudio214TAdaptor_soundFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431490-804314B0 05E1B0 0020+00 2/2 0/0 0/0 .bss             aoData$1517 */
static u8 aoData[32];

/* 804314B0-804314BC 05E1D0 000C+00 0/1 0/0 0/0 .bss             @1817 */
#pragma push
#pragma force_active on
static u8 lit_1817[12];
#pragma pop

/* 804314BC-804314C8 05E1DC 000C+00 0/1 0/0 0/0 .bss             @1818 */
#pragma push
#pragma force_active on
static u8 lit_1818[12];
#pragma pop

/* 804314C8-804314D4 05E1E8 000C+00 0/1 0/0 0/0 .bss             @1819 */
#pragma push
#pragma force_active on
static u8 lit_1819[12];
#pragma pop

/* 804314D4-804314E0 05E1F4 000C+00 0/1 0/0 0/0 .bss             @1820 */
#pragma push
#pragma force_active on
static u8 lit_1820[12];
#pragma pop

/* 804314E0-804314EC 05E200 000C+00 0/1 0/0 0/0 .bss             @1821 */
#pragma push
#pragma force_active on
static u8 lit_1821[12];
#pragma pop

/* 804314EC-804314F8 05E20C 000C+00 0/1 0/0 0/0 .bss             @1822 */
#pragma push
#pragma force_active on
static u8 lit_1822[12];
#pragma pop

/* 804314F8-80431540 05E218 0048+00 1/2 0/0 0/0 .bss
 * saoVVOSetValue___Q215JStudio_JAudio214TAdaptor_sound         */
u8 JStudio_JAudio2::TAdaptor_sound::saoVVOSetValue_[72];

/* 8028D9A4-8028DA74 2882E4 00D0+00 1/0 0/0 0/0 .text
 * adaptor_do_prepare__Q215JStudio_JAudio214TAdaptor_soundFv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_prepare() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/adaptor_do_prepare__Q215JStudio_JAudio214TAdaptor_soundFv.s"
}
#pragma pop

/* 8028DA74-8028DA78 2883B4 0004+00 1/0 0/0 0/0 .text
 * adaptor_do_end__Q215JStudio_JAudio214TAdaptor_soundFv        */
void JStudio_JAudio2::TAdaptor_sound::adaptor_do_end() {
    /* empty function */
}

/* 8028DA78-8028DC20 2883B8 01A8+00 1/0 0/0 0/0 .text
 * adaptor_do_update__Q215JStudio_JAudio214TAdaptor_soundFUl    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_update(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/adaptor_do_update__Q215JStudio_JAudio214TAdaptor_soundFUl.s"
}
#pragma pop

/* 8028DC20-8028DC54 288560 0034+00 1/0 0/0 0/0 .text
 * adaptor_do_SOUND__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_SOUND(JStudio::data::TEOperationData param_0,
                                                           void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DC20.s"
}
#pragma pop

/* 8028DC54-8028DC88 288594 0034+00 1/0 0/0 0/0 .text
 * adaptor_do_BEGIN__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_BEGIN(JStudio::data::TEOperationData param_0,
                                                           void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DC54.s"
}
#pragma pop

/* 8028DC88-8028DCD0 2885C8 0048+00 1/0 0/0 0/0 .text
 * adaptor_do_BEGIN_FADE_IN__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData param_0,
                                                          void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DC88.s"
}
#pragma pop

/* 8028DCD0-8028DD00 288610 0030+00 1/0 0/0 0/0 .text
 * adaptor_do_END__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_END(JStudio::data::TEOperationData param_0,
                                                         void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DCD0.s"
}
#pragma pop

/* 8028DD00-8028DD48 288640 0048+00 1/0 0/0 0/0 .text
 * adaptor_do_END_FADE_OUT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData param_0,
                                                         void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DD00.s"
}
#pragma pop

/* 8028DD48-8028DDB4 288688 006C+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_PARENT(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DD48.s"
}
#pragma pop

/* 8028DDB4-8028DE34 2886F4 0080+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT_NODE__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData param_0,
                                                        void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DDB4.s"
}
#pragma pop

/* 8028DE34-8028DE50 288774 001C+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT_ENABLE__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData param_0,
                                                          void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DE34.s"
}
#pragma pop

/* 8028DE50-8028DE6C 288790 001C+00 1/0 0/0 0/0 .text
 * adaptor_do_REPEAT__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_REPEAT(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DE50.s"
}
#pragma pop

/* 8028DE6C-8028DE88 2887AC 001C+00 1/0 0/0 0/0 .text
 * adaptor_do_CONTINUOUS__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::adaptor_do_CONTINUOUS(JStudio::data::TEOperationData param_0,
                                                       void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DE6C.s"
}
#pragma pop

/* 8028DE88-8028DEB0 2887C8 0028+00 1/0 0/0 0/0 .text
 * adaptor_do_LOCATED__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::adaptor_do_LOCATED(JStudio::data::TEOperationData param_0,
                                                             void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DE88.s"
}
#pragma pop

/* 8028DEB0-8028DECC 2887F0 001C+00 1/0 0/0 0/0 .text
 * adaptor_do_ON_EXIT_NOT_END__Q215JStudio_JAudio214TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::adaptor_do_ON_EXIT_NOT_END(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DEB0.s"
}
#pragma pop

/* 8028DECC-8028DF04 28880C 0038+00 1/0 0/0 0/0 .text
 * __cl__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_CFfPQ27JStudio8TAdaptor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TAdaptor_sound::TVVOSetValue_::operator()(f32 param_0,
                                                           JStudio::TAdaptor* param_1) const {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028DECC.s"
}
#pragma pop

/* 8028DF04-8028DFA4 288844 00A0+00 2/2 0/0 0/0 .text
 * prepareSound___Q215JStudio_JAudio214TAdaptor_soundFv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::prepareSound_() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/prepareSound___Q215JStudio_JAudio214TAdaptor_soundFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455514-80455518 003B14 0004+00 1/1 0/0 0/0 .sdata2          @1805 */
SECTION_SDATA2 static f32 lit_1805 = 1.0f;

/* 80455518-80455520 003B18 0008+00 1/1 0/0 0/0 .sdata2          @1807 */
SECTION_SDATA2 static f64 lit_1807 = 4503599627370496.0 /* cast u32 to float */;

/* 8028DFA4-8028E054 2888E4 00B0+00 3/3 0/0 0/0 .text
 * beginSound_fadeIn___Q215JStudio_JAudio214TAdaptor_soundFv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::beginSound_fadeIn_() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/beginSound_fadeIn___Q215JStudio_JAudio214TAdaptor_soundFv.s"
}
#pragma pop

/* 8028E054-8028E094 288994 0040+00 2/2 0/0 0/0 .text
 * endSound_fadeOut___Q215JStudio_JAudio214TAdaptor_soundFUl    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TAdaptor_sound::endSound_fadeOut_(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/endSound_fadeOut___Q215JStudio_JAudio214TAdaptor_soundFUl.s"
}
#pragma pop

/* 8028E094-8028E0F4 2889D4 0060+00 2/1 0/0 0/0 .text
 * __dt__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_Fv   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JAudio2::TAdaptor_sound::TVVOSetValue_::~TVVOSetValue_() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/__dt__Q315JStudio_JAudio214TAdaptor_sound13TVVOSetValue_Fv.s"
}
#pragma pop

/* 8028E0F4-8028E3A0 288A34 02AC+00 0/0 1/0 0/0 .text            __sinit_object-sound_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_8028E0F4() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/object-sound/func_8028E0F4.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8028E0F4, func_8028E0F4);
#pragma pop