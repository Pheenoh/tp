//
// Generated By: dol2asm
// Translation Unit: d_a_kytag00
//

#include "rel/d/a/kytag/d_a_kytag00/d_a_kytag00.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" static void get_check_pos__FP13kytag00_class();
extern "C" static void wether_tag_reset__FP13kytag00_class();
extern "C" static void wether_tag_move__FP13kytag00_class();
extern "C" static void raincnt_set__Ff();
extern "C" static void raincnt_cut__Fv();
extern "C" static void wether_tag_efect_reset__FP13kytag00_class();
extern "C" static void wether_tag_efect_move__FP13kytag00_class();
extern "C" static void daKytag00_Draw__FP13kytag00_class();
extern "C" static void daKytag00_Execute__FP13kytag00_class();
extern "C" static bool daKytag00_IsDelete__FP13kytag00_class();
extern "C" static void daKytag00_Delete__FP13kytag00_class();
extern "C" static void daKytag00_Create__FP10fopAc_ac_c();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void setSnowPower__10Z2EnvSeMgrFSc();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 8046C980-8046C988 000000 0004+04 6/6 0/0 0/0 .rodata          @3798 */
SECTION_RODATA static u8 const lit_3798[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8046C980, &lit_3798);

/* 8046C988-8046C990 000008 0008+00 0/3 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3799[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8046C988, &lit_3799);
#pragma pop

/* 8046C990-8046C998 000010 0008+00 0/3 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3800[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8046C990, &lit_3800);
#pragma pop

/* 8046C998-8046C9A0 000018 0008+00 0/3 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3801[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8046C998, &lit_3801);
#pragma pop

/* 8046B718-8046B9DC 000078 02C4+00 2/2 0/0 0/0 .text            get_check_pos__FP13kytag00_class */
// reg r31/r30 swap
#ifdef NONMATCHING
static cXyz get_check_pos(kytag00_class* i_this) {
    camera_class* camera_p = dComIfGp_getCamera(0);
    fopAc_ac_c* player_p = dComIfGp_getPlayer(0);
    cXyz ret;

    if (player_p != NULL) {
        f32 temp_f = i_this->current.pos.abs(camera_p->mLookat.mEye);
        f32 temp_f2 = i_this->current.pos.abs(player_p->current.pos);

        ret = player_p->current.pos;
        if (i_dComIfGp_event_runCheck() && temp_f < temp_f2) {
            ret = camera_p->mLookat.mEye;
        }
    } else {
        ret.set(0.0f, 0.0f, 0.0f);
    }

    return ret;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm cXyz get_check_pos(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/get_check_pos__FP13kytag00_class.s"
}
#pragma pop
#endif

/* 8046B9DC-8046BA10 00033C 0034+00 2/2 0/0 0/0 .text            wether_tag_reset__FP13kytag00_class
 */
static void wether_tag_reset(kytag00_class* i_this) {
    i_this->field_0x56d = 0;

    g_env_light.mColpatPrevGather = g_env_light.mColpatWeather;
    g_env_light.mColpatCurrGather = g_env_light.mColpatWeather;
    g_env_light.mColPatBlendGather = FLOAT_LABEL(lit_3798);
    g_env_light.mColPatModeGather = 1;
}

/* ############################################################################################## */
/* 8046C9A0-8046C9A4 000020 0004+00 0/3 0/0 0/0 .rodata          @3906 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3906 = 100.0f;
COMPILER_STRIP_GATE(0x8046C9A0, &lit_3906);
#pragma pop

/* 8046C9A4-8046C9A8 000024 0004+00 0/3 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3907 = 5000.0f;
COMPILER_STRIP_GATE(0x8046C9A4, &lit_3907);
#pragma pop

/* 8046C9A8-8046C9AC 000028 0004+00 0/4 0/0 0/0 .rodata          @3908 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3908 = 1.0f;
COMPILER_STRIP_GATE(0x8046C9A8, &lit_3908);
#pragma pop

/* 8046C9AC-8046C9B0 00002C 0004+00 0/1 0/0 0/0 .rodata          @3909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3909 = 0.5f;
COMPILER_STRIP_GATE(0x8046C9AC, &lit_3909);
#pragma pop

/* 8046C9B0-8046C9B8 000030 0008+00 0/3 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3911[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8046C9B0, &lit_3911);
#pragma pop

/* 8046BA10-8046BD60 000370 0350+00 1/1 0/0 0/0 .text            wether_tag_move__FP13kytag00_class
 */
// regswaps, but should be equivalent
#ifdef NONMATCHING
static void wether_tag_move(kytag00_class* i_this) {
    cXyz spC;
    cXyz check_pos = get_check_pos(i_this);

    f32 temp_f31 = i_this->field_0x57c * 100.0f;

    spC.x = check_pos.x;
    spC.y = i_this->current.pos.y;
    spC.z = check_pos.z;
    f32 var_f1 = i_this->current.pos.abs(spC);

    if (var_f1 < i_this->field_0x584 && check_pos.y >= i_this->current.pos.y - temp_f31 &&
        check_pos.y < temp_f31 + (i_this->current.pos.y + (5000.0f * i_this->mScale.y)) &&
        i_this->field_0x588 > 0.0f)
    {
        f32 var_f9 = 1.0f;
        f32 var_f8 = 1.0f;

        f32 temp_f10 = i_this->field_0x584 - i_this->field_0x580;
        if (0.0f != temp_f10) {
            var_f9 = (i_this->field_0x584 - var_f1) / temp_f10;
            if (var_f9 > var_f8) {
                var_f9 = var_f8;
            }
        }

        if (check_pos.y <= i_this->current.pos.y) {
            if (0.0f != temp_f31) {
                f32 var_f2 = (i_this->current.pos.y - check_pos.y) / temp_f31;
                if (var_f2 < 0.0f) {
                    var_f2 = 0.0f;
                }
                var_f8 = 1.0f - var_f2;
            }
        } else if (0.0f != temp_f31) {
            f32 var_f2_2 =
                (check_pos.y - (i_this->current.pos.y + (5000.0f * i_this->mScale.y))) / temp_f31;
            if (var_f2_2 < 0.0f) {
                var_f2_2 = 0.0f;
            }
            var_f8 = 1.0f - var_f2_2;
        }

        var_f9 *= (var_f8 * i_this->field_0x588);
        if (g_env_light.mEnvrIdxPrev == g_env_light.mEnvrIdxCurr) {
            i_this->field_0x56d = 1;

            switch (i_this->field_0x56f) {
            case 0:
                g_env_light.mColpatPrevGather = g_env_light.mColpatWeather;
                g_env_light.mColpatCurrGather = 0;
                g_env_light.mColPatBlendGather = var_f9;
                g_env_light.mColPatModeGather = 1;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                if (var_f9 > 0.5f) {
                    g_env_light.mColpatPrevGather = g_env_light.mColpatWeather;
                    g_env_light.mColpatCurrGather = i_this->field_0x56f;
                    g_env_light.mColPatBlendGather = var_f9;
                    if (var_f9 >= 1.0f) {
                        g_env_light.mColpatPrevGather = i_this->field_0x56f;
                    }
                } else {
                    g_env_light.mColpatPrevGather = i_this->field_0x56f;
                    g_env_light.mColpatCurrGather = g_env_light.mColpatWeather;
                    g_env_light.mColPatBlendGather = 1.0f - var_f9;
                }

                g_env_light.mColPatModeGather = 1;
                break;
            default:
                i_this->field_0x56d = 0;
                break;
            }
        }
    } else if (i_this->field_0x56d != 0) {
        wether_tag_reset(i_this);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wether_tag_move(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/wether_tag_move__FP13kytag00_class.s"
}
#pragma pop
#endif

/* 8046BD60-8046BDA4 0006C0 0044+00 1/1 0/0 0/0 .text            raincnt_set__Ff */
static void raincnt_set(f32 param_0) {
    int cnt = param_0 * param_0 * param_0 * 250.0f;
    if (cnt > g_env_light.mRainCountOrig) {
        g_env_light.mRainCount = cnt;
    }
}

/* 8046BDA4-8046BDB8 000704 0014+00 1/1 0/0 0/0 .text            raincnt_cut__Fv */
static void raincnt_cut() {
    g_env_light.mRainCount = g_env_light.mRainCountOrig;
}

/* 8046BDB8-8046BEB8 000718 0100+00 3/2 0/0 0/0 .text wether_tag_efect_reset__FP13kytag00_class */
static void wether_tag_efect_reset(kytag00_class* i_this) {
    i_this->field_0x56c = 0;

    switch (i_this->field_0x570) {
    case 1:
        raincnt_cut();
        break;
    case 2:
    case 16:
        g_env_light.mSnowCount = 0;
        g_env_light.mMoyaCount = 0;
        break;
    case 3:
    case 14:
        g_env_light.mHousiCount = 0;
        g_env_light.field_0xea9 = 0;
        break;
    case 4:
    case 5:
    case 6:
        if (g_env_light.mThunderEff.mMode == 2) {
            g_env_light.mThunderEff.mMode = 0;
        }

        if (i_this->field_0x570 == 8 || i_this->field_0x570 == 9) {
            raincnt_cut();
        }

        if (i_this->field_0x570 == 9) {
            g_env_light.mMoyaCount = 0;
        }
        break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 17:
    case 18:
        g_env_light.mMoyaCount = 0;
        break;
    case 15:
        g_env_light.field_0x1048 = 0;
        break;
    }
}

/* ############################################################################################## */
/* 8046CA2C-8046CA78 -00001 004C+00 1/1 0/0 0/0 .data            @4108 */
SECTION_DATA static void* lit_4108[19] = {
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x788),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x2A4),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x2B0),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x3B8),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x41C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x43C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x464),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x4B4),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x4E0),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x50C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x538),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x564),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x598),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x5C4),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x3B8),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x5F0),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x614),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x71C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x748),
};

/* 8046BEB8-8046C660 000818 07A8+00 3/2 0/0 0/0 .text wether_tag_efect_move__FP13kytag00_class */
// matches with literals
#ifdef NONMATCHING
static void wether_tag_efect_move(kytag00_class* i_this) {
    cXyz spC;
    cXyz check_pos = get_check_pos(i_this);

    f32 temp_f31 = i_this->field_0x57c * 100.0f;

    spC.x = check_pos.x;
    spC.y = i_this->current.pos.y;
    spC.z = check_pos.z;
    f32 var_f1 = i_this->current.pos.abs(spC);

    if (var_f1 < i_this->field_0x584 && check_pos.y >= i_this->current.pos.y - temp_f31 &&
        check_pos.y < temp_f31 + (i_this->current.pos.y + (5000.0f * i_this->mScale.y)) &&
        i_this->field_0x588 > 0.0f)
    {
        f32 var_f9 = 1.0f;
        f32 var_f8 = 1.0f;

        i_this->field_0x56c = 1;

        f32 temp_f10 = i_this->field_0x584 - i_this->field_0x580;
        if (0.0f != temp_f10) {
            var_f9 = (i_this->field_0x584 - var_f1) / temp_f10;
            if (var_f9 > var_f8) {
                var_f9 = var_f8;
            }
        }

        if (check_pos.y <= i_this->current.pos.y) {
            if (0.0f != temp_f31) {
                f32 var_f2 = (i_this->current.pos.y - check_pos.y) / temp_f31;
                if (var_f2 < 0.0f) {
                    var_f2 = 0.0f;
                }
                var_f8 = 1.0f - var_f2;
            }
        } else if (0.0f != temp_f31) {
            f32 var_f2_2 =
                (check_pos.y - (i_this->current.pos.y + (5000.0f * i_this->mScale.y))) / temp_f31;
            if (var_f2_2 < 0.0f) {
                var_f2_2 = 0.0f;
            }
            var_f8 = 1.0f - var_f2_2;
        }

        var_f9 *= (var_f8 * i_this->field_0x588);

        switch (i_this->field_0x570) {
        case 1:
            raincnt_set(var_f9);
            break;
        case 2:
            if (i_this->orig.roomNo == dComIfGp_roomControl_getStayNo()) {
                g_env_light.field_0xe92 = false;

                if (g_env_light.mSnowCount < (int)(var_f9 * 500.0f)) {
                    g_env_light.mSnowCount += (int)(var_f9 * 500.0f * 0.05f);

                    if (g_env_light.mSnowCount > (int)(var_f9 * 500.0f)) {
                        g_env_light.mSnowCount = (int)(var_f9 * 500.0f);
                    }
                }

                g_env_light.mMoyaMode = 0;
                if (g_env_light.mMoyaCount < (int)(var_f9 * 50.0f)) {
                    g_env_light.mMoyaCount += (int)(var_f9 * 50.0f * 0.05f);

                    if (g_env_light.mMoyaCount > (int)(var_f9 * 50.0f)) {
                        g_env_light.mMoyaCount = (int)(var_f9 * 50.0f);
                    }
                }
            } else {
                g_env_light.mSnowCount = 0;
                g_env_light.mMoyaCount = 0;
            }

            mDoAud_setSnowPower(var_f9 * 63.0f);
            break;
        case 3:
        case 14:
            g_env_light.field_0xea9 = 0;

            if (i_this->orig.roomNo == dComIfGp_roomControl_getStayNo()) {
                g_env_light.mHousiCount = var_f9 * 300.0f;
            } else {
                g_env_light.mHousiCount = 0;
            }

            if (i_this->field_0x570 == 14) {
                g_env_light.field_0xea9 = 1;
            }
            break;
        case 4:
            if (g_env_light.mThunderEff.mMode == 0) {
                g_env_light.mThunderEff.mMode = 2;
            }
            break;
        case 5:
            if (g_env_light.mThunderEff.mMode == 0) {
                g_env_light.mThunderEff.mMode = 2;
            }

            raincnt_set(var_f9);
            break;
        case 6:
            g_env_light.mMoyaMode = 1;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            raincnt_set(var_f9);

            if (g_env_light.mThunderEff.mMode == 0) {
                g_env_light.mThunderEff.mMode = 2;
            }
            break;
        case 7:
            g_env_light.mMoyaMode = 0;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 8:
            g_env_light.mMoyaMode = 1;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 9:
            g_env_light.mMoyaMode = 2;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 10:
            g_env_light.mMoyaMode = 3;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 11:
            g_env_light.mMoyaMode = 50;
            g_env_light.mMoyaCount = var_f9 * 50.0f * g_env_light.field_0xf40;
            break;
        case 12:
            g_env_light.mMoyaMode = 5;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 13:
            g_env_light.mMoyaMode = 6;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 15:
            g_env_light.field_0x1048 = var_f9 * 100.0f;
            break;
        case 16:
            if (i_this->orig.roomNo == dComIfGp_roomControl_getStayNo()) {
                g_env_light.field_0xe92 = true;

                if (g_env_light.mSnowCount < (int)(var_f9 * 500.0f)) {
                    g_env_light.mSnowCount += (int)(var_f9 * 500.0f * 0.05f);

                    if (g_env_light.mSnowCount > (int)(var_f9 * 500.0f)) {
                        g_env_light.mSnowCount = (int)(var_f9 * 500.0f);
                    }
                }

                g_env_light.mMoyaMode = 0;
                if (g_env_light.mMoyaCount < (int)(var_f9 * 50.0f)) {
                    g_env_light.mMoyaCount += (int)(var_f9 * 50.0f * 0.05f);

                    if (g_env_light.mMoyaCount > (int)(var_f9 * 50.0f)) {
                        g_env_light.mMoyaCount = (int)(var_f9 * 50.0f);
                    }
                }
            } else {
                g_env_light.mSnowCount = 0;
                g_env_light.mMoyaCount = 0;
            }

            mDoAud_setSnowPower(var_f9 * 127.0f);
            break;
        case 17:
            g_env_light.mMoyaMode = 8;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        case 18:
            g_env_light.mMoyaMode = 9;
            g_env_light.mMoyaCount = var_f9 * 50.0f;
            break;
        }
    } else if (i_this->field_0x56c != 0) {
        wether_tag_efect_reset(i_this);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wether_tag_efect_move(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/wether_tag_efect_move__FP13kytag00_class.s"
}
#pragma pop
#endif

/* 8046C660-8046C684 000FC0 0024+00 1/0 0/0 0/0 .text            daKytag00_Draw__FP13kytag00_class
 */
static int daKytag00_Draw(kytag00_class* i_this) {
    wether_tag_efect_move(i_this);
    return 1;
}

/* ############################################################################################## */
/* 8046C9BC-8046C9C0 00003C 0004+00 0/0 0/0 0/0 .rodata          @4101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4101 = 500.0f;
COMPILER_STRIP_GATE(0x8046C9BC, &lit_4101);
#pragma pop

/* 8046C9C0-8046C9C4 000040 0004+00 0/0 0/0 0/0 .rodata          @4102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4102 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8046C9C0, &lit_4102);
#pragma pop

/* 8046C9C4-8046C9C8 000044 0004+00 0/0 0/0 0/0 .rodata          @4103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4103 = 50.0f;
COMPILER_STRIP_GATE(0x8046C9C4, &lit_4103);
#pragma pop

/* 8046C9C8-8046C9CC 000048 0004+00 0/0 0/0 0/0 .rodata          @4104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4104 = 63.0f;
COMPILER_STRIP_GATE(0x8046C9C8, &lit_4104);
#pragma pop

/* 8046C9CC-8046C9D0 00004C 0004+00 0/0 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4105 = 300.0f;
COMPILER_STRIP_GATE(0x8046C9CC, &lit_4105);
#pragma pop

/* 8046C9D0-8046C9D4 000050 0004+00 0/0 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4106 = 127.0f;
COMPILER_STRIP_GATE(0x8046C9D0, &lit_4106);
#pragma pop

/* 8046C9D4-8046C9D8 000054 0004+00 0/1 0/0 0/0 .rodata          @4145 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4145 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8046C9D4, &lit_4145);
#pragma pop

/* 8046C9D8-8046C9DC 000058 0004+00 0/1 0/0 0/0 .rodata          @4146 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4146 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8046C9D8, &lit_4146);
#pragma pop

/* 8046C9DC-8046C9E0 00005C 0004+00 0/1 0/0 0/0 .rodata          @4147 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4147 = 0x38D1B717;
COMPILER_STRIP_GATE(0x8046C9DC, &lit_4147);
#pragma pop

/* 8046C684-8046C76C 000FE4 00E8+00 1/0 0/0 0/0 .text daKytag00_Execute__FP13kytag00_class */
// matches with literals
#ifdef NONMATCHING
static int daKytag00_Execute(kytag00_class* i_this) {
    BOOL var_r30 = true;

    if (i_this->field_0x571 != 0xFF) {
        s32 room_no = dComIfGp_roomControl_getStayNo();
        if (dComIfGs_isSwitch(i_this->field_0x571, room_no)) {
            var_r30 = 0;
        }
    } else if (i_this->field_0x572 != 0xFF) {
        s32 room_no = dComIfGp_roomControl_getStayNo();
        if (!dComIfGs_isSwitch(i_this->field_0x572, room_no)) {
            var_r30 = 0;
        }
    }

    if (var_r30 == TRUE) {
        cLib_addCalc(&i_this->field_0x588, 1.0f, 0.1f, 0.01f, 0.0001f);
    } else {
        cLib_addCalc(&i_this->field_0x588, 0.0f, 0.1f, 0.01f, 0.0001f);
    }

    wether_tag_move(i_this);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daKytag00_Execute(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/daKytag00_Execute__FP13kytag00_class.s"
}
#pragma pop
#endif

/* 8046C76C-8046C774 0010CC 0008+00 1/0 0/0 0/0 .text daKytag00_IsDelete__FP13kytag00_class */
static int daKytag00_IsDelete(kytag00_class* i_this) {
    return 1;
}

/* 8046C774-8046C7BC 0010D4 0048+00 1/0 0/0 0/0 .text            daKytag00_Delete__FP13kytag00_class
 */
static int daKytag00_Delete(kytag00_class* i_this) {
    wether_tag_reset(i_this);
    wether_tag_efect_reset(i_this);
    g_env_light.mMoyaCount = 0;

    return 1;
}

/* 8046C7BC-8046C978 00111C 01BC+00 1/0 0/0 0/0 .text            daKytag00_Create__FP10fopAc_ac_c */
// matches with literals
#ifdef NONMATCHING
static int daKytag00_Create(fopAc_ac_c* i_this) {
    fopAcM_SetupActor(i_this, kytag00_class);
    kytag00_class* a_this = (kytag00_class*)i_this;

    a_this->field_0x56e = 0;
    a_this->field_0x56f = fopAcM_GetParam(a_this) & 0xFF;
    a_this->field_0x570 = (fopAcM_GetParam(a_this) >> 8) & 0xFF;
    a_this->field_0x578 = (fopAcM_GetParam(a_this) >> 0x10) & 0xFF;
    a_this->field_0x57c = (fopAcM_GetParam(a_this) >> 0x18) & 0xFF;
    a_this->field_0x571 = a_this->current.angle.x & 0xFF;
    a_this->field_0x572 = (a_this->current.angle.x >> 8) & 0xFF;

    BOOL var_r30 = true;

    if (a_this->field_0x571 != 0xFF) {
        s32 room_no = dComIfGp_roomControl_getStayNo();
        if (dComIfGs_isSwitch(a_this->field_0x571, room_no)) {
            var_r30 = 0;
        }
    } else if (a_this->field_0x572 != 0xFF) {
        s32 room_no = dComIfGp_roomControl_getStayNo();
        if (!dComIfGs_isSwitch(a_this->field_0x572, room_no)) {
            var_r30 = 0;
        }
    }

    if (var_r30 == TRUE) {
        a_this->field_0x588 = 1.0f;
    } else {
        a_this->field_0x588 = 0.0f;
    }

    if (a_this->field_0x578 == 0xFF) {
        a_this->field_0x578 = 10;
    }

    if (a_this->field_0x57c == 0xFF) {
        a_this->field_0x57c = 10;
    }

    a_this->field_0x580 = a_this->mScale.x * 5000.0f;
    a_this->field_0x584 = a_this->mScale.x * 5000.0f + a_this->field_0x578 * 100.0f;
    a_this->field_0x56c = 0;
    a_this->field_0x56d = 0;
    g_env_light.mMoyaCount = 0;

    wether_tag_efect_move(a_this);
    return cPhs_COMPLEATE_e;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daKytag00_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/daKytag00_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8046CA78-8046CA98 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag00_Method */
static actor_method_class l_daKytag00_Method = {
    (process_method_func)daKytag00_Create,  (process_method_func)daKytag00_Delete,
    (process_method_func)daKytag00_Execute, (process_method_func)daKytag00_IsDelete,
    (process_method_func)daKytag00_Draw,
};

/* 8046CA98-8046CAC8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG00 */
extern actor_process_profile_definition g_profile_KYTAG00 = {
    -3,
    7,
    -3,
    PROC_KYTAG00,
    &g_fpcLf_Method.mBase,
    sizeof(kytag00_class),
    0,
    0,
    &g_fopAc_Method.base,
    94,
    &l_daKytag00_Method,
    0x44000,
    0,
    0,
};