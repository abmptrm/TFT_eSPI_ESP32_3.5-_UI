// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_2

#include "ui.h"

void ui_BLDC_7_screen_init(void)
{
    ui_BLDC_7 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_7, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BLDC7 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_BLDC7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLDC7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLDC7, -88);
    lv_obj_set_y(ui_BLDC7, -105);
    lv_obj_set_align(ui_BLDC7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLDC7, "SPEED BLDC 7");
    lv_obj_set_style_text_color(ui_BLDC7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BLDC7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BLDC7, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonKembali6 = lv_btn_create(ui_BLDC_7);
    lv_obj_set_width(ui_ButtonKembali6, 124);
    lv_obj_set_height(ui_ButtonKembali6, 34);
    lv_obj_set_x(ui_ButtonKembali6, 156);
    lv_obj_set_y(ui_ButtonKembali6, 124);
    lv_obj_set_align(ui_ButtonKembali6, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonKembali6, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonKembali6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelKembali6 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_LabelKembali6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelKembali6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelKembali6, 158);
    lv_obj_set_y(ui_LabelKembali6, 123);
    lv_obj_set_align(ui_LabelKembali6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelKembali6, "RETURN");

    ui_ArcSpeed7 = lv_arc_create(ui_BLDC_7);
    lv_obj_set_width(ui_ArcSpeed7, 170);
    lv_obj_set_height(ui_ArcSpeed7, 170);
    lv_obj_set_x(ui_ArcSpeed7, -84);
    lv_obj_set_y(ui_ArcSpeed7, 24);
    lv_obj_set_align(ui_ArcSpeed7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArcSpeed7, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_range(ui_ArcSpeed7, 0, 180);
    lv_arc_set_value(ui_ArcSpeed7, 0);


    ui_LabelSpeed7 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_LabelSpeed7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSpeed7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSpeed7, -82);
    lv_obj_set_y(ui_LabelSpeed7, -9);
    lv_obj_set_align(ui_LabelSpeed7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSpeed7, "0");
    lv_obj_set_style_text_color(ui_LabelSpeed7, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSpeed7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSpeed7, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CheckboxState13 = lv_checkbox_create(ui_BLDC_7);
    lv_checkbox_set_text(ui_CheckboxState13, "ON/OFF");
    lv_obj_set_width(ui_CheckboxState13, 90);
    lv_obj_set_height(ui_CheckboxState13, 25);
    lv_obj_set_x(ui_CheckboxState13, 154);
    lv_obj_set_y(ui_CheckboxState13, 10);
    lv_obj_set_align(ui_CheckboxState13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CheckboxState13, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SliderSpeed7 = lv_slider_create(ui_BLDC_7);
    lv_slider_set_value(ui_SliderSpeed7, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_SliderSpeed7) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_SliderSpeed7, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_SliderSpeed7, 209);
    lv_obj_set_height(ui_SliderSpeed7, 14);
    lv_obj_set_x(ui_SliderSpeed7, -80);
    lv_obj_set_y(ui_SliderSpeed7, 63);
    lv_obj_set_align(ui_SliderSpeed7, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_SliderSpeed7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed7, lv_color_hex(0x7DFF69), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed7, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed7, lv_color_hex(0x7DFF69), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed7, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label56 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_Label56, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label56, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label56, -84);
    lv_obj_set_y(ui_Label56, -72);
    lv_obj_set_align(ui_Label56, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label56, "");

    ui_CheckboxState14 = lv_checkbox_create(ui_BLDC_7);
    lv_checkbox_set_text(ui_CheckboxState14, "CW/CCW");
    lv_obj_set_width(ui_CheckboxState14, 94);
    lv_obj_set_height(ui_CheckboxState14, 25);
    lv_obj_set_x(ui_CheckboxState14, 153);
    lv_obj_set_y(ui_CheckboxState14, -24);
    lv_obj_set_align(ui_CheckboxState14, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_CheckboxState14, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_CheckboxState14, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch13 = lv_switch_create(ui_BLDC_7);
    lv_obj_set_width(ui_Switch13, 80);
    lv_obj_set_height(ui_Switch13, 40);
    lv_obj_set_x(ui_Switch13, 159);
    lv_obj_set_y(ui_Switch13, -100);
    lv_obj_set_align(ui_Switch13, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch13, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch13, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch13, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label57 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_Label57, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label57, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label57, 161);
    lv_obj_set_y(ui_Label57, -67);
    lv_obj_set_align(ui_Label57, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label57, "CW/CCW");
    lv_obj_set_style_text_color(ui_Label57, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label57, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label57, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch14 = lv_switch_create(ui_BLDC_7);
    lv_obj_set_width(ui_Switch14, 80);
    lv_obj_set_height(ui_Switch14, 40);
    lv_obj_set_x(ui_Switch14, 161);
    lv_obj_set_y(ui_Switch14, -15);
    lv_obj_set_align(ui_Switch14, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch14, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch14, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch14, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label58 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_Label58, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label58, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label58, 163);
    lv_obj_set_y(ui_Label58, 19);
    lv_obj_set_align(ui_Label58, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label58, "ON/OFF");
    lv_obj_set_style_text_color(ui_Label58, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label58, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label58, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonSimpan6 = lv_btn_create(ui_BLDC_7);
    lv_obj_set_width(ui_ButtonSimpan6, 124);
    lv_obj_set_height(ui_ButtonSimpan6, 34);
    lv_obj_set_x(ui_ButtonSimpan6, 156);
    lv_obj_set_y(ui_ButtonSimpan6, 81);
    lv_obj_set_align(ui_ButtonSimpan6, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonSimpan6, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonSimpan6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label59 = lv_label_create(ui_BLDC_7);
    lv_obj_set_width(ui_Label59, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label59, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label59, 156);
    lv_obj_set_y(ui_Label59, 81);
    lv_obj_set_align(ui_Label59, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label59, "SAVE");
    lv_obj_set_style_text_color(ui_Label59, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label59, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label59, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ContainerMsgBox6 = lv_obj_create(ui_BLDC_7);
    lv_obj_remove_style_all(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_ContainerMsgBox6, 276);
    lv_obj_set_height(ui_ContainerMsgBox6, 252);
    lv_obj_set_x(ui_ContainerMsgBox6, -67);
    lv_obj_set_y(ui_ContainerMsgBox6, -11);
    lv_obj_set_align(ui_ContainerMsgBox6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ContainerMsgBox6, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_ContainerMsgBox6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel8 = lv_obj_create(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_Panel8, 270);
    lv_obj_set_height(ui_Panel8, 250);
    lv_obj_set_x(ui_Panel8, 0);
    lv_obj_set_y(ui_Panel8, -1);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel8, lv_color_hex(0x2D3273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label60 = lv_label_create(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_Label60, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label60, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label60, 1);
    lv_obj_set_y(ui_Label60, -24);
    lv_obj_set_align(ui_Label60, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label60, "SAVING DATA ?");
    lv_obj_set_style_text_color(ui_Label60, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label60, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label60, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button23 = lv_btn_create(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_Button23, 100);
    lv_obj_set_height(ui_Button23, 40);
    lv_obj_set_x(ui_Button23, 61);
    lv_obj_set_y(ui_Button23, 89);
    lv_obj_set_align(ui_Button23, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button23, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button24 = lv_btn_create(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_Button24, 100);
    lv_obj_set_height(ui_Button24, 40);
    lv_obj_set_x(ui_Button24, -63);
    lv_obj_set_y(ui_Button24, 89);
    lv_obj_set_align(ui_Button24, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button24, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Button24, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label61 = lv_label_create(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_Label61, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label61, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label61, -60);
    lv_obj_set_y(ui_Label61, 88);
    lv_obj_set_align(ui_Label61, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label61, "CANCEL");

    ui_Label62 = lv_label_create(ui_ContainerMsgBox6);
    lv_obj_set_width(ui_Label62, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label62, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label62, 60);
    lv_obj_set_y(ui_Label62, 88);
    lv_obj_set_align(ui_Label62, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label62, "YES");

    lv_obj_add_event_cb(ui_ButtonKembali6, ui_event_ButtonKembali6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArcSpeed7, ui_event_ArcSpeed7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelSpeed7, ui_event_LabelSpeed7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState13, ui_event_CheckboxState13, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderSpeed7, ui_event_SliderSpeed7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch13, ui_event_Switch13, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch14, ui_event_Switch14, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonSimpan6, ui_event_ButtonSimpan6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button23, ui_event_Button23, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button24, ui_event_Button24, LV_EVENT_ALL, NULL);

}
