// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320

#include "ui.h"

void ui_BLDC_2_screen_init(void)
{
    ui_BLDC_2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_2, lv_color_hex(0x11004A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_BLDC_2);
    lv_obj_set_width(ui_Panel4, 307);
    lv_obj_set_height(ui_Panel4, 315);
    lv_obj_set_x(ui_Panel4, -84);
    lv_obj_set_y(ui_Panel4, -1);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel6 = lv_obj_create(ui_BLDC_2);
    lv_obj_set_width(ui_Panel6, 167);
    lv_obj_set_height(ui_Panel6, 317);
    lv_obj_set_x(ui_Panel6, 155);
    lv_obj_set_y(ui_Panel6, -2);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BLDC2 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_BLDC2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLDC2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLDC2, -82);
    lv_obj_set_y(ui_BLDC2, -105);
    lv_obj_set_align(ui_BLDC2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLDC2, "BLDC 2");
    lv_obj_set_style_text_color(ui_BLDC2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BLDC2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BLDC2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonKembali1 = lv_btn_create(ui_BLDC_2);
    lv_obj_set_width(ui_ButtonKembali1, 124);
    lv_obj_set_height(ui_ButtonKembali1, 34);
    lv_obj_set_x(ui_ButtonKembali1, 156);
    lv_obj_set_y(ui_ButtonKembali1, 124);
    lv_obj_set_align(ui_ButtonKembali1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonKembali1, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonKembali1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelKembali1 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_LabelKembali1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelKembali1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelKembali1, 158);
    lv_obj_set_y(ui_LabelKembali1, 123);
    lv_obj_set_align(ui_LabelKembali1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelKembali1, "KEMBALI");

    ui_ArcSpeed2 = lv_arc_create(ui_BLDC_2);
    lv_obj_set_width(ui_ArcSpeed2, 170);
    lv_obj_set_height(ui_ArcSpeed2, 170);
    lv_obj_set_x(ui_ArcSpeed2, -84);
    lv_obj_set_y(ui_ArcSpeed2, 24);
    lv_obj_set_align(ui_ArcSpeed2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArcSpeed2, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_range(ui_ArcSpeed2, 0, 180);
    lv_arc_set_value(ui_ArcSpeed2, 0);


    ui_LabelSpeed2 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_LabelSpeed2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSpeed2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSpeed2, -82);
    lv_obj_set_y(ui_LabelSpeed2, -9);
    lv_obj_set_align(ui_LabelSpeed2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSpeed2, "0");
    lv_obj_set_style_text_color(ui_LabelSpeed2, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSpeed2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSpeed2, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CheckboxState2 = lv_checkbox_create(ui_BLDC_2);
    lv_checkbox_set_text(ui_CheckboxState2, "ON/OFF");
    lv_obj_set_width(ui_CheckboxState2, 90);
    lv_obj_set_height(ui_CheckboxState2, 25);
    lv_obj_set_x(ui_CheckboxState2, 154);
    lv_obj_set_y(ui_CheckboxState2, 10);
    lv_obj_set_align(ui_CheckboxState2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CheckboxState2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SliderSpeed2 = lv_slider_create(ui_BLDC_2);
    lv_slider_set_value(ui_SliderSpeed2, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_SliderSpeed2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_SliderSpeed2, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_SliderSpeed2, 209);
    lv_obj_set_height(ui_SliderSpeed2, 14);
    lv_obj_set_x(ui_SliderSpeed2, -80);
    lv_obj_set_y(ui_SliderSpeed2, 63);
    lv_obj_set_align(ui_SliderSpeed2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_SliderSpeed2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed2, lv_color_hex(0x7DFF69), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed2, lv_color_hex(0x7DFF69), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -84);
    lv_obj_set_y(ui_Label14, -72);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "");

    ui_CheckboxState3 = lv_checkbox_create(ui_BLDC_2);
    lv_checkbox_set_text(ui_CheckboxState3, "CW/CCW");
    lv_obj_set_width(ui_CheckboxState3, 94);
    lv_obj_set_height(ui_CheckboxState3, 25);
    lv_obj_set_x(ui_CheckboxState3, 153);
    lv_obj_set_y(ui_CheckboxState3, -31);
    lv_obj_set_align(ui_CheckboxState3, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_CheckboxState3, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_CheckboxState3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonKembali1, ui_event_ButtonKembali1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArcSpeed2, ui_event_ArcSpeed2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelSpeed2, ui_event_LabelSpeed2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState2, ui_event_CheckboxState2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderSpeed2, ui_event_SliderSpeed2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState3, ui_event_CheckboxState3, LV_EVENT_ALL, NULL);

}
