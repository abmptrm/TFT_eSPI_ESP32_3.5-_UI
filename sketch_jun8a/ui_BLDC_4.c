// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: test

#include "ui.h"

void ui_BLDC_4_screen_init(void)
{
    ui_BLDC_4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_4, lv_color_hex(0x11004A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel9 = lv_obj_create(ui_BLDC_4);
    lv_obj_set_width(ui_Panel9, 307);
    lv_obj_set_height(ui_Panel9, 315);
    lv_obj_set_x(ui_Panel9, -84);
    lv_obj_set_y(ui_Panel9, -1);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel9, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel9, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel9, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel9, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel9, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel10 = lv_obj_create(ui_BLDC_4);
    lv_obj_set_width(ui_Panel10, 167);
    lv_obj_set_height(ui_Panel10, 317);
    lv_obj_set_x(ui_Panel10, 155);
    lv_obj_set_y(ui_Panel10, -1);
    lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label35 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label35, -84);
    lv_obj_set_y(ui_Label35, -125);
    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label35, "BLDC 4");
    lv_obj_set_style_text_color(ui_Label35, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label35, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label35, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button19 = lv_btn_create(ui_BLDC_4);
    lv_obj_set_width(ui_Button19, 124);
    lv_obj_set_height(ui_Button19, 34);
    lv_obj_set_x(ui_Button19, 156);
    lv_obj_set_y(ui_Button19, 124);
    lv_obj_set_align(ui_Button19, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button19, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label36 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label36, 158);
    lv_obj_set_y(ui_Label36, 123);
    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label36, "KEMBALI");

    ui_Arc4 = lv_arc_create(ui_BLDC_4);
    lv_obj_set_width(ui_Arc4, 150);
    lv_obj_set_height(ui_Arc4, 150);
    lv_obj_set_x(ui_Arc4, -118);
    lv_obj_set_y(ui_Arc4, -1);
    lv_obj_set_align(ui_Arc4, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc4, 50);


    ui_Label37 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label37, -118);
    lv_obj_set_y(ui_Label37, 0);
    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label37, "0");
    lv_obj_set_style_text_color(ui_Label37, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label37, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label37, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button20 = lv_btn_create(ui_BLDC_4);
    lv_obj_set_width(ui_Button20, 44);
    lv_obj_set_height(ui_Button20, 41);
    lv_obj_set_x(ui_Button20, 15);
    lv_obj_set_y(ui_Button20, -41);
    lv_obj_set_align(ui_Button20, LV_ALIGN_CENTER);

    ui_Label38 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label38, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label38, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label38, 15);
    lv_obj_set_y(ui_Label38, -42);
    lv_obj_set_align(ui_Label38, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label38, "+");
    lv_obj_set_style_text_color(ui_Label38, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label38, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label38, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button21 = lv_btn_create(ui_BLDC_4);
    lv_obj_set_width(ui_Button21, 44);
    lv_obj_set_height(ui_Button21, 41);
    lv_obj_set_x(ui_Button21, 16);
    lv_obj_set_y(ui_Button21, 12);
    lv_obj_set_align(ui_Button21, LV_ALIGN_CENTER);

    ui_Label39 = lv_label_create(ui_BLDC_4);
    lv_obj_set_width(ui_Label39, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label39, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label39, 17);
    lv_obj_set_y(ui_Label39, 12);
    lv_obj_set_align(ui_Label39, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label39, "-");
    lv_obj_set_style_text_color(ui_Label39, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label39, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label39, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Dropdown4 = lv_dropdown_create(ui_BLDC_4);
    lv_dropdown_set_options(ui_Dropdown4, "OFF\nON");
    lv_dropdown_set_selected_highlight(ui_Dropdown4, false);
    lv_obj_set_width(ui_Dropdown4, 226);
    lv_obj_set_height(ui_Dropdown4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Dropdown4, -73);
    lv_obj_set_y(ui_Dropdown4, 103);
    lv_obj_set_align(ui_Dropdown4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags



    lv_obj_add_event_cb(ui_Button19, ui_event_Button19, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Dropdown4, ui_event_Dropdown4, LV_EVENT_ALL, NULL);

}
