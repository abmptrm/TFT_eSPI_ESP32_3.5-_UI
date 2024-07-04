// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_1

#include "ui.h"

void ui_BLDC_3_screen_init(void)
{
    ui_BLDC_3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_3, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BLDC3 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_BLDC3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLDC3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLDC3, -88);
    lv_obj_set_y(ui_BLDC3, -105);
    lv_obj_set_align(ui_BLDC3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLDC3, "SPEED BLDC 3");
    lv_obj_set_style_text_color(ui_BLDC3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BLDC3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BLDC3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonKembali2 = lv_btn_create(ui_BLDC_3);
    lv_obj_set_width(ui_ButtonKembali2, 124);
    lv_obj_set_height(ui_ButtonKembali2, 34);
    lv_obj_set_x(ui_ButtonKembali2, 156);
    lv_obj_set_y(ui_ButtonKembali2, 124);
    lv_obj_set_align(ui_ButtonKembali2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonKembali2, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonKembali2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelKembali2 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_LabelKembali2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelKembali2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelKembali2, 158);
    lv_obj_set_y(ui_LabelKembali2, 123);
    lv_obj_set_align(ui_LabelKembali2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelKembali2, "RETURN");

    ui_ArcSpeed3 = lv_arc_create(ui_BLDC_3);
    lv_obj_set_width(ui_ArcSpeed3, 170);
    lv_obj_set_height(ui_ArcSpeed3, 170);
    lv_obj_set_x(ui_ArcSpeed3, -84);
    lv_obj_set_y(ui_ArcSpeed3, 24);
    lv_obj_set_align(ui_ArcSpeed3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArcSpeed3, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_range(ui_ArcSpeed3, 0, 180);
    lv_arc_set_value(ui_ArcSpeed3, 0);


    ui_LabelSpeed3 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_LabelSpeed3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSpeed3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSpeed3, -82);
    lv_obj_set_y(ui_LabelSpeed3, -9);
    lv_obj_set_align(ui_LabelSpeed3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSpeed3, "0");
    lv_obj_set_style_text_color(ui_LabelSpeed3, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSpeed3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSpeed3, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CheckboxState4 = lv_checkbox_create(ui_BLDC_3);
    lv_checkbox_set_text(ui_CheckboxState4, "ON/OFF");
    lv_obj_set_width(ui_CheckboxState4, 90);
    lv_obj_set_height(ui_CheckboxState4, 25);
    lv_obj_set_x(ui_CheckboxState4, 154);
    lv_obj_set_y(ui_CheckboxState4, 10);
    lv_obj_set_align(ui_CheckboxState4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CheckboxState4, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SliderSpeed3 = lv_slider_create(ui_BLDC_3);
    lv_slider_set_value(ui_SliderSpeed3, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_SliderSpeed3) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_SliderSpeed3, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_SliderSpeed3, 209);
    lv_obj_set_height(ui_SliderSpeed3, 14);
    lv_obj_set_x(ui_SliderSpeed3, -80);
    lv_obj_set_y(ui_SliderSpeed3, 63);
    lv_obj_set_align(ui_SliderSpeed3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_SliderSpeed3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed3, lv_color_hex(0x7DFF69), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed3, lv_color_hex(0x7DFF69), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed3, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label21, -84);
    lv_obj_set_y(ui_Label21, -72);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "");

    ui_CheckboxState5 = lv_checkbox_create(ui_BLDC_3);
    lv_checkbox_set_text(ui_CheckboxState5, "CW/CCW");
    lv_obj_set_width(ui_CheckboxState5, 94);
    lv_obj_set_height(ui_CheckboxState5, 25);
    lv_obj_set_x(ui_CheckboxState5, 153);
    lv_obj_set_y(ui_CheckboxState5, -24);
    lv_obj_set_align(ui_CheckboxState5, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_CheckboxState5, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_CheckboxState5, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch5 = lv_switch_create(ui_BLDC_3);
    lv_obj_set_width(ui_Switch5, 80);
    lv_obj_set_height(ui_Switch5, 40);
    lv_obj_set_x(ui_Switch5, 159);
    lv_obj_set_y(ui_Switch5, -100);
    lv_obj_set_align(ui_Switch5, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch5, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch5, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch5, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label29 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label29, 161);
    lv_obj_set_y(ui_Label29, -67);
    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label29, "CW/CCW");
    lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch6 = lv_switch_create(ui_BLDC_3);
    lv_obj_set_width(ui_Switch6, 80);
    lv_obj_set_height(ui_Switch6, 40);
    lv_obj_set_x(ui_Switch6, 161);
    lv_obj_set_y(ui_Switch6, -15);
    lv_obj_set_align(ui_Switch6, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch6, LV_STATE_CHECKED);       /// States
    lv_obj_set_style_bg_color(ui_Switch6, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch6, lv_color_hex(0xFF3F3F), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Switch6, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_Switch6, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch6, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label30 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label30, 163);
    lv_obj_set_y(ui_Label30, 19);
    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label30, "ON/OFF");
    lv_obj_set_style_text_color(ui_Label30, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label30, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonSimpan2 = lv_btn_create(ui_BLDC_3);
    lv_obj_set_width(ui_ButtonSimpan2, 124);
    lv_obj_set_height(ui_ButtonSimpan2, 34);
    lv_obj_set_x(ui_ButtonSimpan2, 156);
    lv_obj_set_y(ui_ButtonSimpan2, 81);
    lv_obj_set_align(ui_ButtonSimpan2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonSimpan2, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonSimpan2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label31 = lv_label_create(ui_BLDC_3);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label31, 156);
    lv_obj_set_y(ui_Label31, 81);
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, "SAVE");
    lv_obj_set_style_text_color(ui_Label31, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label31, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label31, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ContainerMsgBox2 = lv_obj_create(ui_BLDC_3);
    lv_obj_remove_style_all(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_ContainerMsgBox2, 276);
    lv_obj_set_height(ui_ContainerMsgBox2, 252);
    lv_obj_set_x(ui_ContainerMsgBox2, -67);
    lv_obj_set_y(ui_ContainerMsgBox2, -11);
    lv_obj_set_align(ui_ContainerMsgBox2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ContainerMsgBox2, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_ContainerMsgBox2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel4 = lv_obj_create(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_Panel4, 270);
    lv_obj_set_height(ui_Panel4, 250);
    lv_obj_set_x(ui_Panel4, 0);
    lv_obj_set_y(ui_Panel4, -1);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x2D3273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label32 = lv_label_create(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label32, 1);
    lv_obj_set_y(ui_Label32, -24);
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "SAVING DATA ?");
    lv_obj_set_style_text_color(ui_Label32, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label32, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button13 = lv_btn_create(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_Button13, 100);
    lv_obj_set_height(ui_Button13, 40);
    lv_obj_set_x(ui_Button13, 61);
    lv_obj_set_y(ui_Button13, 89);
    lv_obj_set_align(ui_Button13, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button13, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button16 = lv_btn_create(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_Button16, 100);
    lv_obj_set_height(ui_Button16, 40);
    lv_obj_set_x(ui_Button16, -63);
    lv_obj_set_y(ui_Button16, 89);
    lv_obj_set_align(ui_Button16, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button16, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Button16, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label33 = lv_label_create(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label33, -60);
    lv_obj_set_y(ui_Label33, 88);
    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label33, "CANCEL");

    ui_Label34 = lv_label_create(ui_ContainerMsgBox2);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label34, 60);
    lv_obj_set_y(ui_Label34, 88);
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, "YES");

    lv_obj_add_event_cb(ui_ButtonKembali2, ui_event_ButtonKembali2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArcSpeed3, ui_event_ArcSpeed3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelSpeed3, ui_event_LabelSpeed3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState4, ui_event_CheckboxState4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderSpeed3, ui_event_SliderSpeed3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonSimpan2, ui_event_ButtonSimpan2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button13, ui_event_Button13, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button16, ui_event_Button16, LV_EVENT_ALL, NULL);

}