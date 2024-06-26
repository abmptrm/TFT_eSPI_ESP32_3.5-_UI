// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320

#include <lvgl.h>
#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
lv_obj_t * ui_MainScreen;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Panel21;
lv_obj_t * ui_Panel23;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
void ui_event_Button4(lv_event_t * e);
lv_obj_t * ui_Button4;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
void ui_event_Button6(lv_event_t * e);
lv_obj_t * ui_Button6;
void ui_event_Button7(lv_event_t * e);
lv_obj_t * ui_Button7;
void ui_event_Button8(lv_event_t * e);
lv_obj_t * ui_Button8;
void ui_event_Button9(lv_event_t * e);
lv_obj_t * ui_Button9;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
lv_obj_t * ui_KONTROL_BLDC;
lv_obj_t * ui_Image3;
lv_obj_t * ui_LabelTemp;
lv_obj_t * ui_Suhu;
lv_obj_t * ui_Image1;
lv_obj_t * ui_LabelSpeed;
lv_obj_t * ui_Kecepatan;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Tekanan;
lv_obj_t * ui_LabelPress;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Kebisingan;
lv_obj_t * ui_LabelNoise;
lv_obj_t * ui_LebelState1;
lv_obj_t * ui_LebelState2;
lv_obj_t * ui_LebelState3;
lv_obj_t * ui_LebelState4;
lv_obj_t * ui_LebelState5;
lv_obj_t * ui_LebelState6;
lv_obj_t * ui_LebelState7;
lv_obj_t * ui_LebelState8;
void ui_event_Button10(lv_event_t * e);
lv_obj_t * ui_Button10;
lv_obj_t * ui_LebelState9;
lv_obj_t * ui_Image5;
lv_obj_t * ui_STATUS;


// SCREEN: ui_BLDC_1
void ui_BLDC_1_screen_init(void);
lv_obj_t * ui_BLDC_1;
lv_obj_t * ui_BLDC1;
void ui_event_ButtonKembali(lv_event_t * e);
lv_obj_t * ui_ButtonKembali;
lv_obj_t * ui_LabelKembali;
void ui_event_ArcSpeed1(lv_event_t * e);
lv_obj_t * ui_ArcSpeed1;
void ui_event_LabelSpeed1(lv_event_t * e);
lv_obj_t * ui_LabelSpeed1;
void ui_event_CheckboxState1(lv_event_t * e);
lv_obj_t * ui_CheckboxState1;
void ui_event_SliderSpeed1(lv_event_t * e);
lv_obj_t * ui_SliderSpeed1;
lv_obj_t * ui_Label13;
lv_obj_t * ui_CheckboxState10;
lv_obj_t * ui_Switch2;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Switch1;
lv_obj_t * ui_Label25;
void ui_event_ButtonSimpan(lv_event_t * e);
lv_obj_t * ui_ButtonSimpan;
lv_obj_t * ui_Label10;
lv_obj_t * ui_ContainerMsgBox;
lv_obj_t * ui_Panel24;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Button14;
void ui_event_Button15(lv_event_t * e);
lv_obj_t * ui_Button15;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Label26;


// SCREEN: ui_BLDC_2
void ui_BLDC_2_screen_init(void);
lv_obj_t * ui_BLDC_2;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_BLDC2;
void ui_event_ButtonKembali1(lv_event_t * e);
lv_obj_t * ui_ButtonKembali1;
lv_obj_t * ui_LabelKembali1;
void ui_event_ArcSpeed2(lv_event_t * e);
lv_obj_t * ui_ArcSpeed2;
void ui_event_LabelSpeed2(lv_event_t * e);
lv_obj_t * ui_LabelSpeed2;
void ui_event_CheckboxState2(lv_event_t * e);
lv_obj_t * ui_CheckboxState2;
void ui_event_SliderSpeed2(lv_event_t * e);
lv_obj_t * ui_SliderSpeed2;
lv_obj_t * ui_Label14;
void ui_event_CheckboxState3(lv_event_t * e);
lv_obj_t * ui_CheckboxState3;


// SCREEN: ui_BLDC_3
void ui_BLDC_3_screen_init(void);
lv_obj_t * ui_BLDC_3;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Panel8;
lv_obj_t * ui_BLDC3;
void ui_event_ButtonKembali2(lv_event_t * e);
lv_obj_t * ui_ButtonKembali2;
lv_obj_t * ui_LabelKembali2;
void ui_event_ArcSpeed3(lv_event_t * e);
lv_obj_t * ui_ArcSpeed3;
void ui_event_LabelSpeed3(lv_event_t * e);
lv_obj_t * ui_LabelSpeed3;
void ui_event_CheckboxState4(lv_event_t * e);
lv_obj_t * ui_CheckboxState4;
void ui_event_SliderSpeed3(lv_event_t * e);
lv_obj_t * ui_SliderSpeed3;
lv_obj_t * ui_Label15;
void ui_event_CheckboxState5(lv_event_t * e);
lv_obj_t * ui_CheckboxState5;


// SCREEN: ui_BLDC_4
void ui_BLDC_4_screen_init(void);
lv_obj_t * ui_BLDC_4;
lv_obj_t * ui_Panel9;
lv_obj_t * ui_Panel10;
lv_obj_t * ui_BLDC4;
void ui_event_ButtonKembali3(lv_event_t * e);
lv_obj_t * ui_ButtonKembali3;
lv_obj_t * ui_LabelKembali3;
void ui_event_ArcSpeed4(lv_event_t * e);
lv_obj_t * ui_ArcSpeed4;
void ui_event_LabelSpeed4(lv_event_t * e);
lv_obj_t * ui_LabelSpeed4;
void ui_event_CheckboxState6(lv_event_t * e);
lv_obj_t * ui_CheckboxState6;
void ui_event_SliderSpeed4(lv_event_t * e);
lv_obj_t * ui_SliderSpeed4;
lv_obj_t * ui_Label16;
void ui_event_CheckboxState7(lv_event_t * e);
lv_obj_t * ui_CheckboxState7;


// SCREEN: ui_BLDC_5
void ui_BLDC_5_screen_init(void);
lv_obj_t * ui_BLDC_5;
lv_obj_t * ui_Panel11;
lv_obj_t * ui_Panel12;
lv_obj_t * ui_BLDC5;
void ui_event_ButtonKembali4(lv_event_t * e);
lv_obj_t * ui_ButtonKembali4;
lv_obj_t * ui_LabelKembali4;
void ui_event_ArcSpeed5(lv_event_t * e);
lv_obj_t * ui_ArcSpeed5;
void ui_event_LabelSpeed5(lv_event_t * e);
lv_obj_t * ui_LabelSpeed5;
void ui_event_CheckboxState8(lv_event_t * e);
lv_obj_t * ui_CheckboxState8;
void ui_event_SliderSpeed5(lv_event_t * e);
lv_obj_t * ui_SliderSpeed5;
lv_obj_t * ui_Label17;
void ui_event_CheckboxState9(lv_event_t * e);
lv_obj_t * ui_CheckboxState9;


// SCREEN: ui_BLDC_6
void ui_BLDC_6_screen_init(void);
lv_obj_t * ui_BLDC_6;
lv_obj_t * ui_Panel13;
lv_obj_t * ui_Panel14;
lv_obj_t * ui_BLDC6;
void ui_event_ButtonKembali5(lv_event_t * e);
lv_obj_t * ui_ButtonKembali5;
lv_obj_t * ui_LabelKembali5;
void ui_event_ArcSpeed6(lv_event_t * e);
lv_obj_t * ui_ArcSpeed6;
void ui_event_LabelSpeed6(lv_event_t * e);
lv_obj_t * ui_LabelSpeed6;
void ui_event_CheckboxState11(lv_event_t * e);
lv_obj_t * ui_CheckboxState11;
void ui_event_SliderSpeed6(lv_event_t * e);
lv_obj_t * ui_SliderSpeed6;
lv_obj_t * ui_Label18;
void ui_event_CheckboxState12(lv_event_t * e);
lv_obj_t * ui_CheckboxState12;


// SCREEN: ui_BLDC_7
void ui_BLDC_7_screen_init(void);
lv_obj_t * ui_BLDC_7;
lv_obj_t * ui_Panel15;
lv_obj_t * ui_Panel16;
lv_obj_t * ui_BLDC7;
void ui_event_ButtonKembali6(lv_event_t * e);
lv_obj_t * ui_ButtonKembali6;
lv_obj_t * ui_LabelKembali6;
void ui_event_ArcSpeed7(lv_event_t * e);
lv_obj_t * ui_ArcSpeed7;
void ui_event_LabelSpeed7(lv_event_t * e);
lv_obj_t * ui_LabelSpeed7;
void ui_event_CheckboxState13(lv_event_t * e);
lv_obj_t * ui_CheckboxState13;
void ui_event_SliderSpeed7(lv_event_t * e);
lv_obj_t * ui_SliderSpeed7;
lv_obj_t * ui_Label19;
void ui_event_CheckboxState14(lv_event_t * e);
lv_obj_t * ui_CheckboxState14;


// SCREEN: ui_BLDC_8
void ui_BLDC_8_screen_init(void);
lv_obj_t * ui_BLDC_8;
lv_obj_t * ui_Panel17;
lv_obj_t * ui_Panel18;
lv_obj_t * ui_BLDC8;
void ui_event_ButtonKembali7(lv_event_t * e);
lv_obj_t * ui_ButtonKembali7;
lv_obj_t * ui_LabelKembali7;
void ui_event_ArcSpeed8(lv_event_t * e);
lv_obj_t * ui_ArcSpeed8;
void ui_event_LabelSpeed8(lv_event_t * e);
lv_obj_t * ui_LabelSpeed8;
void ui_event_CheckboxState15(lv_event_t * e);
lv_obj_t * ui_CheckboxState15;
void ui_event_SliderSpeed8(lv_event_t * e);
lv_obj_t * ui_SliderSpeed8;
lv_obj_t * ui_Label20;
void ui_event_CheckboxState16(lv_event_t * e);
lv_obj_t * ui_CheckboxState16;


// SCREEN: ui_BLDC_9
void ui_BLDC_9_screen_init(void);
lv_obj_t * ui_BLDC_9;
lv_obj_t * ui_Panel19;
lv_obj_t * ui_Panel20;
lv_obj_t * ui_BLDC9;
void ui_event_ButtonKembali8(lv_event_t * e);
lv_obj_t * ui_ButtonKembali8;
lv_obj_t * ui_LabelKembali8;
void ui_event_ArcSpeed9(lv_event_t * e);
lv_obj_t * ui_ArcSpeed9;
void ui_event_LabelSpeed9(lv_event_t * e);
lv_obj_t * ui_LabelSpeed9;
void ui_event_CheckboxState17(lv_event_t * e);
lv_obj_t * ui_CheckboxState17;
void ui_event_SliderSpeed9(lv_event_t * e);
lv_obj_t * ui_SliderSpeed9;
lv_obj_t * ui_Label21;
void ui_event_CheckboxState18(lv_event_t * e);
lv_obj_t * ui_CheckboxState18;


// SCREEN: ui_WIFI_Screen
void ui_WIFI_Screen_screen_init(void);
lv_obj_t * ui_WIFI_Screen;
lv_obj_t * ui_Panel22;
void ui_event_ButtonKembali10(lv_event_t * e);
lv_obj_t * ui_ButtonKembali10;
lv_obj_t * ui_LabelKembali10;
lv_obj_t * ui_Dropdown1;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label12;
lv_obj_t * ui_TextArea1;
lv_obj_t * ui_Keyboard1;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Label23;


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_29274618[1] = {&ui_img_1318045025};
const lv_img_dsc_t * ui_imgset_1548403577[1] = {&ui_img_112426812};
const lv_img_dsc_t * ui_imgset_219479303[1] = {&ui_img_777776686};
const lv_img_dsc_t * ui_imgset_509167910[1] = {&ui_img_1782230515};
const lv_img_dsc_t * ui_imgset_1655372527[1] = {&ui_img_1924603646};
const lv_img_dsc_t * ui_imgset_1516266718[1] = {&ui_img_1754639307};
const lv_img_dsc_t * ui_imgset_171687932[1] = {&ui_img_1377203910};
const lv_img_dsc_t * ui_imgset_535857063[1] = {&ui_img_475571255};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_1, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_1_screen_init);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_2, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_2_screen_init);
    }
}
void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_3, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_3_screen_init);
    }
}
void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_4, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_4_screen_init);
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_5, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_5_screen_init);
    }
}
void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_6, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_6_screen_init);
    }
}
void ui_event_Button7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_7, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_7_screen_init);
    }
}
void ui_event_Button8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_8, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_8_screen_init);
    }
}
void ui_event_Button9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_BLDC_9, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_BLDC_9_screen_init);
    }
}
void ui_event_Button10(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_WIFI_Screen, LV_SCR_LOAD_ANIM_NONE, 10, 0, &ui_WIFI_Screen_screen_init);
    }
}
void ui_event_ButtonKembali(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed1, target, "", "");
    }
}
void ui_event_LabelSpeed1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed1, target, "", "");
    }
}
void ui_event_CheckboxState1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed1, target, "", "");
    }
}

void hide_component(lv_obj_t *obj) {
  lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
}

void show_component(lv_obj_t *obj) {
  lv_obj_clear_flag(obj, LV_OBJ_FLAG_HIDDEN);
}

void ui_event_ButtonSimpan(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        // _ui_label_set_property(ui_Label1, _UI_LABEL_PROPERTY_TEXT, "test ediittt\n");
        show_component(ui_ContainerMsgBox);
    } 
}

void ui_event_Button15(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        hide_component(ui_ContainerMsgBox);
    }
}

void ui_event_ButtonKembali1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed2, target, "", "");
    }
}
void ui_event_LabelSpeed2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed2, target, "", "");
    }
}
void ui_event_CheckboxState2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed2, target, "", "");
    }
}
void ui_event_CheckboxState3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed3, target, "", "");
    }
}
void ui_event_LabelSpeed3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed3, target, "", "");
    }
}
void ui_event_CheckboxState4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed3, target, "", "");
    }
}
void ui_event_CheckboxState5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed4, target, "", "");
    }
}
void ui_event_LabelSpeed4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed4, target, "", "");
    }
}
void ui_event_CheckboxState6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed4, target, "", "");
    }
}
void ui_event_CheckboxState7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed5, target, "", "");
    }
}
void ui_event_LabelSpeed5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed5, target, "", "");
    }
}
void ui_event_CheckboxState8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed5, target, "", "");
    }
}
void ui_event_CheckboxState9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed6, target, "", "");
    }
}
void ui_event_LabelSpeed6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed6, target, "", "");
    }
}
void ui_event_CheckboxState11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed6, target, "", "");
    }
}
void ui_event_CheckboxState12(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed7, target, "", "");
    }
}
void ui_event_LabelSpeed7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed7, target, "", "");
    }
}
void ui_event_CheckboxState13(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed7, target, "", "");
    }
}
void ui_event_CheckboxState14(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed8, target, "", "");
    }
}
void ui_event_LabelSpeed8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed8, target, "", "");
    }
}
void ui_event_CheckboxState15(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed8, target, "", "");
    }
}
void ui_event_CheckboxState16(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}
void ui_event_ArcSpeed9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed9, target, "", "");
    }
}
void ui_event_LabelSpeed9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_LabelSpeed9, target, "", "");
    }
}
void ui_event_CheckboxState17(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_SliderSpeed9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelSpeed9, target, "", "");
    }
}
void ui_event_CheckboxState18(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "ON");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_LebelState1, _UI_LABEL_PROPERTY_TEXT, "OFF");
    }
}
void ui_event_ButtonKembali10(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 20, 0, &ui_MainScreen_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_MainScreen_screen_init();
    ui_BLDC_1_screen_init();
    ui_BLDC_2_screen_init();
    ui_BLDC_3_screen_init();
    ui_BLDC_4_screen_init();
    ui_BLDC_5_screen_init();
    ui_BLDC_6_screen_init();
    ui_BLDC_7_screen_init();
    ui_BLDC_8_screen_init();
    ui_BLDC_9_screen_init();
    ui_WIFI_Screen_screen_init();
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_MainScreen);
}
