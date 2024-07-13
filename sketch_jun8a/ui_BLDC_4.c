// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_2

#include "ui.h"

void ui_BLDC_4_screen_init(void)
{
    ui_BLDC_4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_4, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BLDC4 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_BLDC4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLDC4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLDC4, -88);
    lv_obj_set_y(ui_BLDC4, -105);
    lv_obj_set_align(ui_BLDC4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLDC4, "SPEED BLDC 4");
    lv_obj_set_style_text_color(ui_BLDC4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BLDC4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BLDC4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonKembali3 = lv_btn_create(ui_BLDC_4);
    lv_obj_set_width(ui_ButtonKembali3, 124);
    lv_obj_set_height(ui_ButtonKembali3, 34);
    lv_obj_set_x(ui_ButtonKembali3, 156);
    lv_obj_set_y(ui_ButtonKembali3, 124);
    lv_obj_set_align(ui_ButtonKembali3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonKembali3, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonKembali3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelKembali3 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_LabelKembali3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelKembali3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelKembali3, 158);
    lv_obj_set_y(ui_LabelKembali3, 123);
    lv_obj_set_align(ui_LabelKembali3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelKembali3, "RETURN");

    ui_ArcSpeed4 = lv_arc_create(ui_BLDC_4);
    lv_obj_set_width(ui_ArcSpeed4, 170);
    lv_obj_set_height(ui_ArcSpeed4, 170);
    lv_obj_set_x(ui_ArcSpeed4, -84);
    lv_obj_set_y(ui_ArcSpeed4, 24);
    lv_obj_set_align(ui_ArcSpeed4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArcSpeed4, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_range(ui_ArcSpeed4, 0, 180);
    lv_arc_set_value(ui_ArcSpeed4, 0);


    ui_LabelSpeed4 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_LabelSpeed4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSpeed4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSpeed4, -82);
    lv_obj_set_y(ui_LabelSpeed4, -9);
    lv_obj_set_align(ui_LabelSpeed4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSpeed4, "0");
    lv_obj_set_style_text_color(ui_LabelSpeed4, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSpeed4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSpeed4, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CheckboxState6 = lv_checkbox_create(ui_BLDC_4);
    lv_checkbox_set_text(ui_CheckboxState6, "ON/OFF");
    lv_obj_set_width(ui_CheckboxState6, 90);
    lv_obj_set_height(ui_CheckboxState6, 25);
    lv_obj_set_x(ui_CheckboxState6, 154);
    lv_obj_set_y(ui_CheckboxState6, 10);
    lv_obj_set_align(ui_CheckboxState6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CheckboxState6, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SliderSpeed4 = lv_slider_create(ui_BLDC_4);
    lv_slider_set_value(ui_SliderSpeed4, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_SliderSpeed4) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_SliderSpeed4, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_SliderSpeed4, 209);
    lv_obj_set_height(ui_SliderSpeed4, 14);
    lv_obj_set_x(ui_SliderSpeed4, -80);
    lv_obj_set_y(ui_SliderSpeed4, 63);
    lv_obj_set_align(ui_SliderSpeed4, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_SliderSpeed4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed4, lv_color_hex(0x7DFF69), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderSpeed4, lv_color_hex(0x7DFF69), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderSpeed4, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label35 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label35, -84);
    lv_obj_set_y(ui_Label35, -72);
    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label35, "");

    ui_CheckboxState7 = lv_checkbox_create(ui_BLDC_4);
    lv_checkbox_set_text(ui_CheckboxState7, "CW/CCW");
    lv_obj_set_width(ui_CheckboxState7, 94);
    lv_obj_set_height(ui_CheckboxState7, 25);
    lv_obj_set_x(ui_CheckboxState7, 153);
    lv_obj_set_y(ui_CheckboxState7, -24);
    lv_obj_set_align(ui_CheckboxState7, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_CheckboxState7, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_CheckboxState7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_CheckboxState7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CheckboxState7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch7 = lv_switch_create(ui_BLDC_4);
    lv_obj_set_width(ui_Switch7, 80);
    lv_obj_set_height(ui_Switch7, 40);
    lv_obj_set_x(ui_Switch7, 159);
    lv_obj_set_y(ui_Switch7, -100);
    lv_obj_set_align(ui_Switch7, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch7, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch7, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch7, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label36 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label36, 161);
    lv_obj_set_y(ui_Label36, -67);
    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label36, "CW/CCW");
    lv_obj_set_style_text_color(ui_Label36, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label36, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label36, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch8 = lv_switch_create(ui_BLDC_4);
    lv_obj_set_width(ui_Switch8, 80);
    lv_obj_set_height(ui_Switch8, 40);
    lv_obj_set_x(ui_Switch8, 161);
    lv_obj_set_y(ui_Switch8, -15);
    lv_obj_set_align(ui_Switch8, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Switch8, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Switch8, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch8, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label37 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label37, 163);
    lv_obj_set_y(ui_Label37, 19);
    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label37, "ON/OFF");
    lv_obj_set_style_text_color(ui_Label37, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label37, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label37, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonSimpan3 = lv_btn_create(ui_BLDC_4);
    lv_obj_set_width(ui_ButtonSimpan3, 124);
    lv_obj_set_height(ui_ButtonSimpan3, 34);
    lv_obj_set_x(ui_ButtonSimpan3, 156);
    lv_obj_set_y(ui_ButtonSimpan3, 81);
    lv_obj_set_align(ui_ButtonSimpan3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonSimpan3, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonSimpan3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label38 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label38, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label38, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label38, 156);
    lv_obj_set_y(ui_Label38, 81);
    lv_obj_set_align(ui_Label38, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label38, "SAVE");
    lv_obj_set_style_text_color(ui_Label38, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label38, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label38, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ContainerMsgBox3 = lv_obj_create(ui_BLDC_4);
    lv_obj_remove_style_all(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_ContainerMsgBox3, 276);
    lv_obj_set_height(ui_ContainerMsgBox3, 252);
    lv_obj_set_x(ui_ContainerMsgBox3, -67);
    lv_obj_set_y(ui_ContainerMsgBox3, -11);
    lv_obj_set_align(ui_ContainerMsgBox3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ContainerMsgBox3, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_ContainerMsgBox3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel5 = lv_obj_create(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_Panel5, 270);
    lv_obj_set_height(ui_Panel5, 250);
    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, -1);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x2D3273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label39 = lv_label_create(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_Label39, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label39, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label39, 1);
    lv_obj_set_y(ui_Label39, -24);
    lv_obj_set_align(ui_Label39, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label39, "SAVING DATA ?");
    lv_obj_set_style_text_color(ui_Label39, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label39, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label39, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button17 = lv_btn_create(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_Button17, 100);
    lv_obj_set_height(ui_Button17, 40);
    lv_obj_set_x(ui_Button17, 61);
    lv_obj_set_y(ui_Button17, 89);
    lv_obj_set_align(ui_Button17, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button17, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button18 = lv_btn_create(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_Button18, 100);
    lv_obj_set_height(ui_Button18, 40);
    lv_obj_set_x(ui_Button18, -63);
    lv_obj_set_y(ui_Button18, 89);
    lv_obj_set_align(ui_Button18, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button18, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label40 = lv_label_create(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_Label40, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label40, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label40, -60);
    lv_obj_set_y(ui_Label40, 88);
    lv_obj_set_align(ui_Label40, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label40, "CANCEL");

    ui_Label41 = lv_label_create(ui_ContainerMsgBox3);
    lv_obj_set_width(ui_Label41, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label41, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label41, 60);
    lv_obj_set_y(ui_Label41, 88);
    lv_obj_set_align(ui_Label41, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label41, "YES");

    lv_obj_add_event_cb(ui_ButtonKembali3, ui_event_ButtonKembali3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArcSpeed4, ui_event_ArcSpeed4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelSpeed4, ui_event_LabelSpeed4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CheckboxState6, ui_event_CheckboxState6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderSpeed4, ui_event_SliderSpeed4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch7, ui_event_Switch7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch8, ui_event_Switch8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonSimpan3, ui_event_ButtonSimpan3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button17, ui_event_Button17, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button18, ui_event_Button18, LV_EVENT_ALL, NULL);

}
