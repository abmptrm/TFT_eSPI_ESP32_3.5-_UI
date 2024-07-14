// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_2

#include "ui.h"

void ui_BLDC_2_screen_init(void)
{
    ui_BLDC_2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_2, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BLDC2 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_BLDC2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLDC2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLDC2, -88);
    lv_obj_set_y(ui_BLDC2, -105);
    lv_obj_set_align(ui_BLDC2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLDC2, "SPEED BLDC 2");
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
    lv_label_set_text(ui_LabelKembali1, "RETURN");

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
    lv_obj_add_flag(ui_CheckboxState2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
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
    lv_obj_set_y(ui_CheckboxState3, -24);
    lv_obj_set_align(ui_CheckboxState3, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_CheckboxState3, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_CheckboxState3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch3 = lv_switch_create(ui_BLDC_2);
    lv_obj_set_width(ui_Switch3, 80);
    lv_obj_set_height(ui_Switch3, 40);
    lv_obj_set_x(ui_Switch3, 159);
    lv_obj_set_y(ui_Switch3, -100);
    lv_obj_set_align(ui_Switch3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch3, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch3, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, 161);
    lv_obj_set_y(ui_Label15, -67);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "CW/CCW");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch4 = lv_switch_create(ui_BLDC_2);
    lv_obj_set_width(ui_Switch4, 80);
    lv_obj_set_height(ui_Switch4, 40);
    lv_obj_set_x(ui_Switch4, 161);
    lv_obj_set_y(ui_Switch4, -15);
    lv_obj_set_align(ui_Switch4, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch4, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch4, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, 163);
    lv_obj_set_y(ui_Label16, 19);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "ON/OFF");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonSimpan1 = lv_btn_create(ui_BLDC_2);
    lv_obj_set_width(ui_ButtonSimpan1, 124);
    lv_obj_set_height(ui_ButtonSimpan1, 34);
    lv_obj_set_x(ui_ButtonSimpan1, 156);
    lv_obj_set_y(ui_ButtonSimpan1, 81);
    lv_obj_set_align(ui_ButtonSimpan1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonSimpan1, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonSimpan1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_BLDC_2);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, 156);
    lv_obj_set_y(ui_Label17, 81);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "SAVE");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ContainerMsgBox1 = lv_obj_create(ui_BLDC_2);
    lv_obj_remove_style_all(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_ContainerMsgBox1, 276);
    lv_obj_set_height(ui_ContainerMsgBox1, 252);
    lv_obj_set_x(ui_ContainerMsgBox1, -67);
    lv_obj_set_y(ui_ContainerMsgBox1, -11);
    lv_obj_set_align(ui_ContainerMsgBox1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ContainerMsgBox1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_ContainerMsgBox1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel3 = lv_obj_create(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_Panel3, 270);
    lv_obj_set_height(ui_Panel3, 250);
    lv_obj_set_x(ui_Panel3, 0);
    lv_obj_set_y(ui_Panel3, -1);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x2D3273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, 1);
    lv_obj_set_y(ui_Label18, -24);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "SAVING DATA ?");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button11 = lv_btn_create(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_Button11, 100);
    lv_obj_set_height(ui_Button11, 40);
    lv_obj_set_x(ui_Button11, 61);
    lv_obj_set_y(ui_Button11, 89);
    lv_obj_set_align(ui_Button11, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button11, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button12 = lv_btn_create(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_Button12, 100);
    lv_obj_set_height(ui_Button12, 40);
    lv_obj_set_x(ui_Button12, -63);
    lv_obj_set_y(ui_Button12, 89);
    lv_obj_set_align(ui_Button12, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button12, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, -60);
    lv_obj_set_y(ui_Label19, 88);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "CANCEL");

    ui_Label20 = lv_label_create(ui_ContainerMsgBox1);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label20, 60);
    lv_obj_set_y(ui_Label20, 88);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "YES");

    lv_obj_add_event_cb(ui_ButtonKembali1, ui_event_ButtonKembali1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArcSpeed2, ui_event_ArcSpeed2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelSpeed2, ui_event_LabelSpeed2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState2, ui_event_CheckboxState2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderSpeed2, ui_event_SliderSpeed2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch3, ui_event_Switch3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch4, ui_event_Switch4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonSimpan1, ui_event_ButtonSimpan1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button11, ui_event_Button11, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button12, ui_event_Button12, LV_EVENT_ALL, NULL);

}
