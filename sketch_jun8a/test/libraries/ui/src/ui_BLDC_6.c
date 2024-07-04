// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_1

#include "ui.h"

void ui_BLDC_6_screen_init(void)
{
    ui_BLDC_6 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_6, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BLDC6 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_BLDC6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLDC6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLDC6, -88);
    lv_obj_set_y(ui_BLDC6, -105);
    lv_obj_set_align(ui_BLDC6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLDC6, "SPEED BLDC 6");
    lv_obj_set_style_text_color(ui_BLDC6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BLDC6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BLDC6, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonKembali5 = lv_btn_create(ui_BLDC_6);
    lv_obj_set_width(ui_ButtonKembali5, 124);
    lv_obj_set_height(ui_ButtonKembali5, 34);
    lv_obj_set_x(ui_ButtonKembali5, 156);
    lv_obj_set_y(ui_ButtonKembali5, 124);
    lv_obj_set_align(ui_ButtonKembali5, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonKembali5, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonKembali5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelKembali5 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_LabelKembali5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelKembali5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelKembali5, 158);
    lv_obj_set_y(ui_LabelKembali5, 123);
    lv_obj_set_align(ui_LabelKembali5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelKembali5, "RETURN");

    ui_ArcSpeed6 = lv_arc_create(ui_BLDC_6);
    lv_obj_set_width(ui_ArcSpeed6, 170);
    lv_obj_set_height(ui_ArcSpeed6, 170);
    lv_obj_set_x(ui_ArcSpeed6, -84);
    lv_obj_set_y(ui_ArcSpeed6, 24);
    lv_obj_set_align(ui_ArcSpeed6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArcSpeed6, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_range(ui_ArcSpeed6, 0, 180);
    lv_arc_set_value(ui_ArcSpeed6, 0);


    ui_LabelSpeed6 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_LabelSpeed6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSpeed6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSpeed6, -82);
    lv_obj_set_y(ui_LabelSpeed6, -9);
    lv_obj_set_align(ui_LabelSpeed6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSpeed6, "0");
    lv_obj_set_style_text_color(ui_LabelSpeed6, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSpeed6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSpeed6, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CheckboxState11 = lv_checkbox_create(ui_BLDC_6);
    lv_checkbox_set_text(ui_CheckboxState11, "ON/OFF");
    lv_obj_set_width(ui_CheckboxState11, 90);
    lv_obj_set_height(ui_CheckboxState11, 25);
    lv_obj_set_x(ui_CheckboxState11, 154);
    lv_obj_set_y(ui_CheckboxState11, 10);
    lv_obj_set_align(ui_CheckboxState11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CheckboxState11, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SliderSpeed6 = lv_slider_create(ui_BLDC_6);
    lv_slider_set_value(ui_SliderSpeed6, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_SliderSpeed6) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_SliderSpeed6, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_SliderSpeed6, 209);
    lv_obj_set_height(ui_SliderSpeed6, 14);
    lv_obj_set_x(ui_SliderSpeed6, -80);
    lv_obj_set_y(ui_SliderSpeed6, 63);
    lv_obj_set_align(ui_SliderSpeed6, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_SliderSpeed6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed6, lv_color_hex(0x7DFF69), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed6, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed6, lv_color_hex(0x7DFF69), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed6, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label49 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_Label49, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label49, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label49, -84);
    lv_obj_set_y(ui_Label49, -72);
    lv_obj_set_align(ui_Label49, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label49, "");

    ui_CheckboxState12 = lv_checkbox_create(ui_BLDC_6);
    lv_checkbox_set_text(ui_CheckboxState12, "CW/CCW");
    lv_obj_set_width(ui_CheckboxState12, 94);
    lv_obj_set_height(ui_CheckboxState12, 25);
    lv_obj_set_x(ui_CheckboxState12, 153);
    lv_obj_set_y(ui_CheckboxState12, -24);
    lv_obj_set_align(ui_CheckboxState12, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_CheckboxState12, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_CheckboxState12, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch11 = lv_switch_create(ui_BLDC_6);
    lv_obj_set_width(ui_Switch11, 80);
    lv_obj_set_height(ui_Switch11, 40);
    lv_obj_set_x(ui_Switch11, 159);
    lv_obj_set_y(ui_Switch11, -100);
    lv_obj_set_align(ui_Switch11, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch11, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch11, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch11, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label50 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_Label50, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label50, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label50, 161);
    lv_obj_set_y(ui_Label50, -67);
    lv_obj_set_align(ui_Label50, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label50, "CW/CCW");
    lv_obj_set_style_text_color(ui_Label50, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label50, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label50, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch12 = lv_switch_create(ui_BLDC_6);
    lv_obj_set_width(ui_Switch12, 80);
    lv_obj_set_height(ui_Switch12, 40);
    lv_obj_set_x(ui_Switch12, 161);
    lv_obj_set_y(ui_Switch12, -15);
    lv_obj_set_align(ui_Switch12, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch12, LV_STATE_CHECKED);       /// States
    lv_obj_set_style_bg_color(ui_Switch12, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch12, lv_color_hex(0xFF3F3F), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Switch12, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_Switch12, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch12, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label51 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_Label51, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label51, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label51, 163);
    lv_obj_set_y(ui_Label51, 19);
    lv_obj_set_align(ui_Label51, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label51, "ON/OFF");
    lv_obj_set_style_text_color(ui_Label51, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label51, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label51, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonSimpan5 = lv_btn_create(ui_BLDC_6);
    lv_obj_set_width(ui_ButtonSimpan5, 124);
    lv_obj_set_height(ui_ButtonSimpan5, 34);
    lv_obj_set_x(ui_ButtonSimpan5, 156);
    lv_obj_set_y(ui_ButtonSimpan5, 81);
    lv_obj_set_align(ui_ButtonSimpan5, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonSimpan5, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonSimpan5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label52 = lv_label_create(ui_BLDC_6);
    lv_obj_set_width(ui_Label52, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label52, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label52, 156);
    lv_obj_set_y(ui_Label52, 81);
    lv_obj_set_align(ui_Label52, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label52, "SAVE");
    lv_obj_set_style_text_color(ui_Label52, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label52, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label52, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ContainerMsgBox5 = lv_obj_create(ui_BLDC_6);
    lv_obj_remove_style_all(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_ContainerMsgBox5, 276);
    lv_obj_set_height(ui_ContainerMsgBox5, 252);
    lv_obj_set_x(ui_ContainerMsgBox5, -67);
    lv_obj_set_y(ui_ContainerMsgBox5, -11);
    lv_obj_set_align(ui_ContainerMsgBox5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ContainerMsgBox5, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_ContainerMsgBox5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel7 = lv_obj_create(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_Panel7, 270);
    lv_obj_set_height(ui_Panel7, 250);
    lv_obj_set_x(ui_Panel7, 0);
    lv_obj_set_y(ui_Panel7, -1);
    lv_obj_set_align(ui_Panel7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel7, lv_color_hex(0x2D3273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label53 = lv_label_create(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_Label53, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label53, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label53, 1);
    lv_obj_set_y(ui_Label53, -24);
    lv_obj_set_align(ui_Label53, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label53, "SAVING DATA ?");
    lv_obj_set_style_text_color(ui_Label53, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label53, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label53, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button21 = lv_btn_create(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_Button21, 100);
    lv_obj_set_height(ui_Button21, 40);
    lv_obj_set_x(ui_Button21, 61);
    lv_obj_set_y(ui_Button21, 89);
    lv_obj_set_align(ui_Button21, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button21, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button22 = lv_btn_create(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_Button22, 100);
    lv_obj_set_height(ui_Button22, 40);
    lv_obj_set_x(ui_Button22, -63);
    lv_obj_set_y(ui_Button22, 89);
    lv_obj_set_align(ui_Button22, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button22, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Button22, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label54 = lv_label_create(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_Label54, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label54, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label54, -60);
    lv_obj_set_y(ui_Label54, 88);
    lv_obj_set_align(ui_Label54, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label54, "CANCEL");

    ui_Label55 = lv_label_create(ui_ContainerMsgBox5);
    lv_obj_set_width(ui_Label55, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label55, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label55, 60);
    lv_obj_set_y(ui_Label55, 88);
    lv_obj_set_align(ui_Label55, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label55, "YES");

    lv_obj_add_event_cb(ui_ButtonKembali5, ui_event_ButtonKembali5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArcSpeed6, ui_event_ArcSpeed6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelSpeed6, ui_event_LabelSpeed6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState11, ui_event_CheckboxState11, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderSpeed6, ui_event_SliderSpeed6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonSimpan5, ui_event_ButtonSimpan5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button21, ui_event_Button21, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button22, ui_event_Button22, LV_EVENT_ALL, NULL);

}