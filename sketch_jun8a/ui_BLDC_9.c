// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320

#include "ui.h"

void ui_BLDC_9_screen_init(void)
{
    ui_BLDC_9 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_9, lv_color_hex(0x11004A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel19 = lv_obj_create(ui_BLDC_9);
    lv_obj_set_width(ui_Panel19, 307);
    lv_obj_set_height(ui_Panel19, 315);
    lv_obj_set_x(ui_Panel19, -84);
    lv_obj_set_y(ui_Panel19, -1);
    lv_obj_set_align(ui_Panel19, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel19, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel19, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel19, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel19, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel19, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel19, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel20 = lv_obj_create(ui_BLDC_9);
    lv_obj_set_width(ui_Panel20, 167);
    lv_obj_set_height(ui_Panel20, 317);
    lv_obj_set_x(ui_Panel20, 155);
    lv_obj_set_y(ui_Panel20, -1);
    lv_obj_set_align(ui_Panel20, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel20, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel20, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label44 = lv_label_create(ui_BLDC_9);
    lv_obj_set_width(ui_Label44, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label44, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label44, -82);
    lv_obj_set_y(ui_Label44, -117);
    lv_obj_set_align(ui_Label44, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label44, "BLDC 9");
    lv_obj_set_style_text_color(ui_Label44, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label44, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label44, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button18 = lv_btn_create(ui_BLDC_9);
    lv_obj_set_width(ui_Button18, 124);
    lv_obj_set_height(ui_Button18, 34);
    lv_obj_set_x(ui_Button18, 156);
    lv_obj_set_y(ui_Button18, 124);
    lv_obj_set_align(ui_Button18, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button18, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label45 = lv_label_create(ui_BLDC_9);
    lv_obj_set_width(ui_Label45, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label45, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label45, 158);
    lv_obj_set_y(ui_Label45, 123);
    lv_obj_set_align(ui_Label45, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label45, "KEMBALI");

    ui_Arc9 = lv_arc_create(ui_BLDC_9);
    lv_obj_set_width(ui_Arc9, 190);
    lv_obj_set_height(ui_Arc9, 190);
    lv_obj_set_x(ui_Arc9, -84);
    lv_obj_set_y(ui_Arc9, 13);
    lv_obj_set_align(ui_Arc9, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc9, 10);


    ui_Label46 = lv_label_create(ui_BLDC_9);
    lv_obj_set_width(ui_Label46, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label46, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label46, -85);
    lv_obj_set_y(ui_Label46, 8);
    lv_obj_set_align(ui_Label46, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label46, "0");
    lv_obj_set_style_text_color(ui_Label46, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label46, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label46, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Checkbox9 = lv_checkbox_create(ui_BLDC_9);
    lv_checkbox_set_text(ui_Checkbox9, "ON/OFF");
    lv_obj_set_width(ui_Checkbox9, 92);
    lv_obj_set_height(ui_Checkbox9, 20);
    lv_obj_set_x(ui_Checkbox9, -81);
    lv_obj_set_y(ui_Checkbox9, 115);
    lv_obj_set_align(ui_Checkbox9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_Checkbox9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Checkbox9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button18, ui_event_Button18, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc9, ui_event_Arc9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label46, ui_event_Label46, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Checkbox9, ui_event_Checkbox9, LV_EVENT_ALL, NULL);

}
