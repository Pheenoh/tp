#ifndef D_A_MYNA_H
#define D_A_MYNA_H

#include "dolphin/types.h"
#include "d/a/d_a_player.h"
#include "f_op/f_op_msg.h"

class daMyna_c : public fopAc_ac_c {
    /* 80945E80 */ void baseMotion00(int);
    /* 80945EC0 */ void baseMotion01(int);
    /* 80945F00 */ void baseMotion02(int);
    /* 80945F40 */ void baseMotion03(int);
    /* 80945FA0 */ void baseMotion04(int);
    /* 80946000 */ void baseMotion05(int);
    /* 80946060 */ void baseMotion06(int);
    /* 809460A0 */ void create();
    /* 809463B8 */ void destroy();
    /* 8094640C */ void draw();
    /* 809464CC */ void execute();
    /* 809466D8 */ void createHeap();
    /* 8094686C */ void jntNodeCB(J3DJoint*, J3DModel*);
    /* 809468EC */ void attack_wait_init();
    /* 8094692C */ void attack_wait_move();
    /* 80946AEC */ void attack_before_talk_init();
    /* 80946B40 */ void attack_before_talk_move();
    /* 80946BB4 */ void attack_fly_init();
    /* 80946BF4 */ void attack_fly_move();
    /* 80946D20 */ void attack_init();
    /* 80946D64 */ void attack_move();
    /* 80946DD4 */ void attack_after_talk_init();
    /* 80946E08 */ void attack_after_talk_move();
    /* 80946E84 */ void greet_wait_init();
    /* 80946EB0 */ void greet_wait_move();
    /* 80947030 */ void greet_talk_init();
    /* 8094711C */ void greet_talk_move();
    /* 809471BC */ void shopping_wait_init();
    /* 809471E8 */ void shopping_wait_move();
    /* 809475B4 */ void shopping_talk_init();
    /* 80947630 */ void shopping_talk_move();
    /* 809476A0 */ void thanks_talk_init();
    /* 8094772C */ void thanks_talk_move();
    /* 80947794 */ void byebye_talk_init();
    /* 809478D0 */ void byebye_talk_move();
    /* 80947A00 */ void turn_on_start_init();
    /* 80947AA4 */ void turn_on_start_move();
    /* 80947CD0 */ void turn_on_init();
    /* 80947CFC */ void turn_on_move();
    /* 80947D48 */ void turn_on_end1_init();
    /* 80947D74 */ void turn_on_end1_move();
    /* 80947E18 */ void turn_on_end2_init();
    /* 80947E50 */ void turn_on_end2_move();
    /* 80948070 */ void turn_on_end3_init();
    /* 80948074 */ void turn_on_end3_move();
    /* 809480E4 */ void wolf_talk_init();
    /* 80948118 */ void wolf_talk_move();
    /* 80948174 */ void attack_wait2_init();
    /* 809481B4 */ void attack_wait2_move();
    /* 80948388 */ void attack_before_talk2_init();
    /* 809483DC */ void attack_before_talk2_move();
    /* 80948444 */ void attack_fly2_init();
    /* 80948484 */ void attack_fly2_move();
    /* 80948600 */ void attack2_init();
    /* 80948644 */ void attack2_move();
    /* 809486F8 */ void attack2_talk_init();
    /* 80948734 */ void attack2_talk_move();
    /* 809487EC */ void soldoutItem(unsigned int);
    /* 80948828 */ void fly_attack_move();
    /* 80948ADC */ void fly_return_move();
    /* 80948DFC */ void fly_body_wave();
    /* 80948E84 */ void talkAnime(msg_class*);
    /* 80948FAC */ void chkEvent();
    /* 809490B8 */ void orderEvent();
    /* 80949128 */ void deleteItem(int);
    /* 80949144 */ void deleteItem(unsigned int);
    /* 80949190 */ void initiate();
    /* 80949408 */ void setItemInfo();
    /* 80949544 */ void setRoomNo();
    /* 80949588 */ void setCollision();
    /* 809495E0 */ void set_mtx();
    /* 80949744 */ void animePlay();
    /* 8094983C */ void setMcaMorfAnm(J3DAnmTransformKey*, f32, f32, int, int, int);
    /* 809498B8 */ void setBtpAnm(J3DAnmTexPattern*, J3DModelData*, f32, int);
    /* 809498F8 */ void getTrnsfrmKeyAnm(char*);
    /* 80949948 */ void getTexPtrnAnm(char*);
    /* 80949A70 */ void checkEndAnm(J3DFrameCtrl*);
    /* 80949998 */ void checkEndAnm(f32);
    /* 80949AD4 */ void getItemNumMax();
    /* 80949AE0 */ void getItemType(void*);
    /* 80949C0C */ void getFlowNodeNum();
    /* 80949C44 */ void checkDead();
    /* 80949D54 */ void chkPlayerInEvtArea(fopAc_ac_c*, cXyz);
    /* 80949EE8 */ void animeControl();
    /* 8094A054 */ void setAnimeType(u8, f32);
    /* 8094A098 */ void playDefaultWaitAnime();
    /* 8094A608 */ void setDefaultWaitAnime(u8);
    /* 8094AA20 */ ~daMyna_c();

    static u8 const mCcDSph[64];
    static u8 mBaseMotionTBL[84];
};

class daMyna_HIO_c {
    /* 8094A960 */ ~daMyna_HIO_c();
};

#endif /* D_A_MYNA_H */
