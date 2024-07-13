// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_2

#ifndef _UI_LCD_480X320_V2_2_UI_H
#define _UI_LCD_480X320_V2_2_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
extern lv_obj_t * ui_MainScreen;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Panel21;
extern lv_obj_t * ui_Panel23;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
void ui_event_Button4(lv_event_t * e);
extern lv_obj_t * ui_Button4;
void ui_event_Button5(lv_event_t * e);
extern lv_obj_t * ui_Button5;
void ui_event_Button6(lv_event_t * e);
extern lv_obj_t * ui_Button6;
void ui_event_Button7(lv_event_t * e);
extern lv_obj_t * ui_Button7;
void ui_event_Button8(lv_event_t * e);
extern lv_obj_t * ui_Button8;
void ui_event_Button9(lv_event_t * e);
extern lv_obj_t * ui_Button9;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_KONTROL_BLDC;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_LabelTemp;
extern lv_obj_t * ui_Suhu;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_LabelSpeed;
extern lv_obj_t * ui_Kecepatan;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Tekanan;
extern lv_obj_t * ui_LabelPress;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Kebisingan;
extern lv_obj_t * ui_LabelNoise;
extern lv_obj_t * ui_LebelState1;
extern lv_obj_t * ui_LebelState2;
extern lv_obj_t * ui_LebelState3;
extern lv_obj_t * ui_LebelState4;
extern lv_obj_t * ui_LebelState5;
extern lv_obj_t * ui_LebelState6;
extern lv_obj_t * ui_LebelState7;
extern lv_obj_t * ui_LebelState8;
extern lv_obj_t * ui_LebelState9;
extern lv_obj_t * ui_STATUS;
void ui_event_ButtonWifi1(lv_event_t * e);
extern lv_obj_t * ui_ButtonWifi1;
extern lv_obj_t * ui_Image6;
// SCREEN: ui_BLDC_1
void ui_BLDC_1_screen_init(void);
extern lv_obj_t * ui_BLDC_1;
extern lv_obj_t * ui_BLDC1;
void ui_event_ButtonKembali(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali;
extern lv_obj_t * ui_LabelKembali;
void ui_event_ArcSpeed1(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed1;
void ui_event_LabelSpeed1(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed1;
void ui_event_CheckboxState1(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState1;
void ui_event_SliderSpeed1(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed1;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_CheckboxState10;
void ui_event_Switch2(lv_event_t * e);
extern lv_obj_t * ui_Switch2;
extern lv_obj_t * ui_Label24;
void ui_event_Switch1(lv_event_t * e);
extern lv_obj_t * ui_Switch1;
extern lv_obj_t * ui_Label25;
void ui_event_ButtonSimpan(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_ContainerMsgBox;
extern lv_obj_t * ui_Panel24;
extern lv_obj_t * ui_Label28;
void ui_event_Button14(lv_event_t * e);
extern lv_obj_t * ui_Button14;
void ui_event_Button15(lv_event_t * e);
extern lv_obj_t * ui_Button15;
extern lv_obj_t * ui_Label27;
extern lv_obj_t * ui_Label26;
// SCREEN: ui_BLDC_2
void ui_BLDC_2_screen_init(void);
extern lv_obj_t * ui_BLDC_2;
extern lv_obj_t * ui_BLDC2;
void ui_event_ButtonKembali1(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali1;
extern lv_obj_t * ui_LabelKembali1;
void ui_event_ArcSpeed2(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed2;
void ui_event_LabelSpeed2(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed2;
void ui_event_CheckboxState2(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState2;
void ui_event_SliderSpeed2(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed2;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_CheckboxState3;
void ui_event_Switch3(lv_event_t * e);
extern lv_obj_t * ui_Switch3;
extern lv_obj_t * ui_Label15;
void ui_event_Switch4(lv_event_t * e);
extern lv_obj_t * ui_Switch4;
extern lv_obj_t * ui_Label16;
void ui_event_ButtonSimpan1(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan1;
extern lv_obj_t * ui_Label17;
extern lv_obj_t * ui_ContainerMsgBox1;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_Label18;
extern lv_obj_t * ui_Button11;
void ui_event_Button12(lv_event_t * e);
extern lv_obj_t * ui_Button12;
extern lv_obj_t * ui_Label19;
extern lv_obj_t * ui_Label20;
// SCREEN: ui_BLDC_3
void ui_BLDC_3_screen_init(void);
extern lv_obj_t * ui_BLDC_3;
extern lv_obj_t * ui_BLDC3;
void ui_event_ButtonKembali2(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali2;
extern lv_obj_t * ui_LabelKembali2;
void ui_event_ArcSpeed3(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed3;
void ui_event_LabelSpeed3(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed3;
void ui_event_CheckboxState4(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState4;
void ui_event_SliderSpeed3(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed3;
extern lv_obj_t * ui_Label21;
extern lv_obj_t * ui_CheckboxState5;
void ui_event_Switch5(lv_event_t * e);
extern lv_obj_t * ui_Switch5;
extern lv_obj_t * ui_Label29;
void ui_event_Switch6(lv_event_t * e);
extern lv_obj_t * ui_Switch6;
extern lv_obj_t * ui_Label30;
void ui_event_ButtonSimpan2(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan2;
extern lv_obj_t * ui_Label31;
extern lv_obj_t * ui_ContainerMsgBox2;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_Label32;
void ui_event_Button13(lv_event_t * e);
extern lv_obj_t * ui_Button13;
void ui_event_Button16(lv_event_t * e);
extern lv_obj_t * ui_Button16;
extern lv_obj_t * ui_Label33;
extern lv_obj_t * ui_Label34;
// SCREEN: ui_BLDC_4
void ui_BLDC_4_screen_init(void);
extern lv_obj_t * ui_BLDC_4;
extern lv_obj_t * ui_BLDC4;
void ui_event_ButtonKembali3(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali3;
extern lv_obj_t * ui_LabelKembali3;
void ui_event_ArcSpeed4(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed4;
void ui_event_LabelSpeed4(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed4;
void ui_event_CheckboxState6(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState6;
void ui_event_SliderSpeed4(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed4;
extern lv_obj_t * ui_Label35;
extern lv_obj_t * ui_CheckboxState7;
void ui_event_Switch7(lv_event_t * e);
extern lv_obj_t * ui_Switch7;
extern lv_obj_t * ui_Label36;
void ui_event_Switch8(lv_event_t * e);
extern lv_obj_t * ui_Switch8;
extern lv_obj_t * ui_Label37;
void ui_event_ButtonSimpan3(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan3;
extern lv_obj_t * ui_Label38;
extern lv_obj_t * ui_ContainerMsgBox3;
extern lv_obj_t * ui_Panel5;
extern lv_obj_t * ui_Label39;
void ui_event_Button17(lv_event_t * e);
extern lv_obj_t * ui_Button17;
void ui_event_Button18(lv_event_t * e);
extern lv_obj_t * ui_Button18;
extern lv_obj_t * ui_Label40;
extern lv_obj_t * ui_Label41;
// SCREEN: ui_BLDC_5
void ui_BLDC_5_screen_init(void);
extern lv_obj_t * ui_BLDC_5;
extern lv_obj_t * ui_BLDC5;
void ui_event_ButtonKembali4(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali4;
extern lv_obj_t * ui_LabelKembali4;
void ui_event_ArcSpeed5(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed5;
void ui_event_LabelSpeed5(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed5;
void ui_event_CheckboxState8(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState8;
void ui_event_SliderSpeed5(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed5;
extern lv_obj_t * ui_Label42;
extern lv_obj_t * ui_CheckboxState9;
void ui_event_Switch9(lv_event_t * e);
extern lv_obj_t * ui_Switch9;
extern lv_obj_t * ui_Label43;
void ui_event_Switch10(lv_event_t * e);
extern lv_obj_t * ui_Switch10;
extern lv_obj_t * ui_Label44;
void ui_event_ButtonSimpan4(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan4;
extern lv_obj_t * ui_Label45;
extern lv_obj_t * ui_ContainerMsgBox4;
extern lv_obj_t * ui_Panel6;
extern lv_obj_t * ui_Label46;
void ui_event_Button19(lv_event_t * e);
extern lv_obj_t * ui_Button19;
void ui_event_Button20(lv_event_t * e);
extern lv_obj_t * ui_Button20;
extern lv_obj_t * ui_Label47;
extern lv_obj_t * ui_Label48;
// SCREEN: ui_BLDC_6
void ui_BLDC_6_screen_init(void);
extern lv_obj_t * ui_BLDC_6;
extern lv_obj_t * ui_BLDC6;
void ui_event_ButtonKembali5(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali5;
extern lv_obj_t * ui_LabelKembali5;
void ui_event_ArcSpeed6(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed6;
void ui_event_LabelSpeed6(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed6;
void ui_event_CheckboxState11(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState11;
void ui_event_SliderSpeed6(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed6;
extern lv_obj_t * ui_Label49;
extern lv_obj_t * ui_CheckboxState12;
void ui_event_Switch11(lv_event_t * e);
extern lv_obj_t * ui_Switch11;
extern lv_obj_t * ui_Label50;
void ui_event_Switch12(lv_event_t * e);
extern lv_obj_t * ui_Switch12;
extern lv_obj_t * ui_Label51;
void ui_event_ButtonSimpan5(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan5;
extern lv_obj_t * ui_Label52;
extern lv_obj_t * ui_ContainerMsgBox5;
extern lv_obj_t * ui_Panel7;
extern lv_obj_t * ui_Label53;
void ui_event_Button21(lv_event_t * e);
extern lv_obj_t * ui_Button21;
void ui_event_Button22(lv_event_t * e);
extern lv_obj_t * ui_Button22;
extern lv_obj_t * ui_Label54;
extern lv_obj_t * ui_Label55;
// SCREEN: ui_BLDC_7
void ui_BLDC_7_screen_init(void);
extern lv_obj_t * ui_BLDC_7;
extern lv_obj_t * ui_BLDC7;
void ui_event_ButtonKembali6(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali6;
extern lv_obj_t * ui_LabelKembali6;
void ui_event_ArcSpeed7(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed7;
void ui_event_LabelSpeed7(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed7;
void ui_event_CheckboxState13(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState13;
void ui_event_SliderSpeed7(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed7;
extern lv_obj_t * ui_Label56;
extern lv_obj_t * ui_CheckboxState14;
void ui_event_Switch13(lv_event_t * e);
extern lv_obj_t * ui_Switch13;
extern lv_obj_t * ui_Label57;
void ui_event_Switch14(lv_event_t * e);
extern lv_obj_t * ui_Switch14;
extern lv_obj_t * ui_Label58;
void ui_event_ButtonSimpan6(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan6;
extern lv_obj_t * ui_Label59;
extern lv_obj_t * ui_ContainerMsgBox6;
extern lv_obj_t * ui_Panel8;
extern lv_obj_t * ui_Label60;
void ui_event_Button23(lv_event_t * e);
extern lv_obj_t * ui_Button23;
void ui_event_Button24(lv_event_t * e);
extern lv_obj_t * ui_Button24;
extern lv_obj_t * ui_Label61;
extern lv_obj_t * ui_Label62;
// SCREEN: ui_BLDC_8
void ui_BLDC_8_screen_init(void);
extern lv_obj_t * ui_BLDC_8;
extern lv_obj_t * ui_BLDC8;
void ui_event_ButtonKembali7(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali7;
extern lv_obj_t * ui_LabelKembali7;
void ui_event_ArcSpeed8(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed8;
void ui_event_LabelSpeed8(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed8;
void ui_event_CheckboxState15(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState15;
void ui_event_SliderSpeed8(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed8;
extern lv_obj_t * ui_Label63;
extern lv_obj_t * ui_CheckboxState16;
void ui_event_Switch15(lv_event_t * e);
extern lv_obj_t * ui_Switch15;
extern lv_obj_t * ui_Label64;
void ui_event_Switch16(lv_event_t * e);
extern lv_obj_t * ui_Switch16;
extern lv_obj_t * ui_Label65;
void ui_event_ButtonSimpan7(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan7;
extern lv_obj_t * ui_Label66;
extern lv_obj_t * ui_ContainerMsgBox7;
extern lv_obj_t * ui_Panel9;
extern lv_obj_t * ui_Label67;
void ui_event_Button25(lv_event_t * e);
extern lv_obj_t * ui_Button25;
void ui_event_Button26(lv_event_t * e);
extern lv_obj_t * ui_Button26;
extern lv_obj_t * ui_Label68;
extern lv_obj_t * ui_Label69;
// SCREEN: ui_BLDC_9
void ui_BLDC_9_screen_init(void);
extern lv_obj_t * ui_BLDC_9;
extern lv_obj_t * ui_BLDC9;
void ui_event_ButtonKembali8(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali8;
extern lv_obj_t * ui_LabelKembali8;
void ui_event_ArcSpeed9(lv_event_t * e);
extern lv_obj_t * ui_ArcSpeed9;
void ui_event_LabelSpeed9(lv_event_t * e);
extern lv_obj_t * ui_LabelSpeed9;
void ui_event_CheckboxState17(lv_event_t * e);
extern lv_obj_t * ui_CheckboxState17;
void ui_event_SliderSpeed9(lv_event_t * e);
extern lv_obj_t * ui_SliderSpeed9;
extern lv_obj_t * ui_Label70;
extern lv_obj_t * ui_CheckboxState18;
void ui_event_Switch17(lv_event_t * e);
extern lv_obj_t * ui_Switch17;
extern lv_obj_t * ui_Label71;
void ui_event_Switch18(lv_event_t * e);
extern lv_obj_t * ui_Switch18;
extern lv_obj_t * ui_Label72;
void ui_event_ButtonSimpan8(lv_event_t * e);
extern lv_obj_t * ui_ButtonSimpan8;
extern lv_obj_t * ui_Label73;
extern lv_obj_t * ui_ContainerMsgBox8;
extern lv_obj_t * ui_Panel10;
extern lv_obj_t * ui_Label74;
void ui_event_Button27(lv_event_t * e);
extern lv_obj_t * ui_Button27;
void ui_event_Button28(lv_event_t * e);
extern lv_obj_t * ui_Button28;
extern lv_obj_t * ui_Label75;
extern lv_obj_t * ui_Label76;
// SCREEN: ui_ScreenSettings
void ui_ScreenSettings_screen_init(void);
extern lv_obj_t * ui_ScreenSettings;
extern lv_obj_t * ui_TabView2;
extern lv_obj_t * ui_STORAGE;
extern lv_obj_t * ui_Label82;
void ui_event_Button10(lv_event_t * e);
extern lv_obj_t * ui_Button10;
extern lv_obj_t * ui_Label83;
extern lv_obj_t * ui_Label84;
void ui_event_Button30(lv_event_t * e);
extern lv_obj_t * ui_Button30;
extern lv_obj_t * ui_Label85;
extern lv_obj_t * ui_ContainerMsgBoxREMOVEEP;
extern lv_obj_t * ui_Panel13;
extern lv_obj_t * ui_Label95;
void ui_event_Button35(lv_event_t * e);
extern lv_obj_t * ui_Button35;
void ui_event_Button33(lv_event_t * e);
extern lv_obj_t * ui_Button33;
extern lv_obj_t * ui_Label92;
extern lv_obj_t * ui_Label93;
extern lv_obj_t * ui_ContainerMsgBoxREMOVEFB;
extern lv_obj_t * ui_Panel15;
extern lv_obj_t * ui_Label99;
void ui_event_Button38(lv_event_t * e);
extern lv_obj_t * ui_Button38;
void ui_event_Button39(lv_event_t * e);
extern lv_obj_t * ui_Button39;
extern lv_obj_t * ui_Label100;
extern lv_obj_t * ui_Label101;
extern lv_obj_t * ui_WIFI;
extern lv_obj_t * ui_Label86;
extern lv_obj_t * ui_Label87;
extern lv_obj_t * ui_Label88;
extern lv_obj_t * ui_Label89;
extern lv_obj_t * ui_Label90;
void ui_event_TextArea2(lv_event_t * e);
extern lv_obj_t * ui_TextArea2;
void ui_event_TextArea3(lv_event_t * e);
extern lv_obj_t * ui_TextArea3;
void ui_event_Button32(lv_event_t * e);
extern lv_obj_t * ui_Button32;
extern lv_obj_t * ui_Label91;
extern lv_obj_t * ui_ContainerMsgBoxWIFI;
extern lv_obj_t * ui_Panel14;
extern lv_obj_t * ui_Label98;
void ui_event_Button37(lv_event_t * e);
extern lv_obj_t * ui_Button37;
void ui_event_Button34(lv_event_t * e);
extern lv_obj_t * ui_Button34;
extern lv_obj_t * ui_Label94;
extern lv_obj_t * ui_Label96;
extern lv_obj_t * ui_Keyboard2;
extern lv_obj_t * ui_Label79;
void ui_event_ButtonKembali12(lv_event_t * e);
extern lv_obj_t * ui_ButtonKembali12;
extern lv_obj_t * ui_Label81;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_1754639307);    // assets/icons8-temperature-35.png
LV_IMG_DECLARE(ui_img_1924603646);    // assets/icons8-speed-35.png
LV_IMG_DECLARE(ui_img_112426812);    // assets/icons8-pressure-35.png
LV_IMG_DECLARE(ui_img_1318045025);    // assets/icons8-noise-35.png
LV_IMG_DECLARE(ui_img_2047884213);    // assets/icons8-settings-18.png
LV_IMG_DECLARE(ui_img_777776686);    // assets/icons8-rotate-left-35.png
LV_IMG_DECLARE(ui_img_1782230515);    // assets/icons8-rotate-right-35.png
LV_IMG_DECLARE(ui_img_1377203910);    // assets/icons8-wi-fi-disconnected-18.png
LV_IMG_DECLARE(ui_img_475571255);    // assets/icons8-wifi-18.png






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
