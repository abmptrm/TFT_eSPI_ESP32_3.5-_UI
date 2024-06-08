// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: test

#include "ui.h"

void ui_BLDC_1_screen_init(void)
{
    ui_BLDC_1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BLDC_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BLDC_1, lv_color_hex(0x11004A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLDC_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_BLDC_1);
    lv_obj_set_width(ui_Panel3, 307);
    lv_obj_set_height(ui_Panel3, 315);
    lv_obj_set_x(ui_Panel3, -84);
    lv_obj_set_y(ui_Panel3, -1);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_BLDC_1);
    lv_obj_set_width(ui_Panel5, 167);
    lv_obj_set_height(ui_Panel5, 317);
    lv_obj_set_x(ui_Panel5, 155);
    lv_obj_set_y(ui_Panel5, -1);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_BLDC_1);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -84);
    lv_obj_set_y(ui_Label14, -125);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "BLDC 1");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button10 = lv_btn_create(ui_BLDC_1);
    lv_obj_set_width(ui_Button10, 124);
    lv_obj_set_height(ui_Button10, 34);
    lv_obj_set_x(ui_Button10, 156);
    lv_obj_set_y(ui_Button10, 124);
    lv_obj_set_align(ui_Button10, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button10, lv_color_hex(0x7DFF69), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_BLDC_1);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, 158);
    lv_obj_set_y(ui_Label15, 123);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "KEMBALI");

    ui_Arc1 = lv_arc_create(ui_BLDC_1);
    lv_obj_set_width(ui_Arc1, 150);
    lv_obj_set_height(ui_Arc1, 150);
    lv_obj_set_x(ui_Arc1, -118);
    lv_obj_set_y(ui_Arc1, -1);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc1, 50);


    ui_Label22 = lv_label_create(ui_BLDC_1);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label22, -118);
    lv_obj_set_y(ui_Label22, 0);
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "0");
    lv_obj_set_style_text_color(ui_Label22, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label22, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button11 = lv_btn_create(ui_BLDC_1);
    lv_obj_set_width(ui_Button11, 44);
    lv_obj_set_height(ui_Button11, 41);
    lv_obj_set_x(ui_Button11, 15);
    lv_obj_set_y(ui_Button11, -41);
    lv_obj_set_align(ui_Button11, LV_ALIGN_CENTER);

    ui_Label23 = lv_label_create(ui_BLDC_1);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label23, 15);
    lv_obj_set_y(ui_Label23, -42);
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "+");
    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button12 = lv_btn_create(ui_BLDC_1);
    lv_obj_set_width(ui_Button12, 44);
    lv_obj_set_height(ui_Button12, 41);
    lv_obj_set_x(ui_Button12, 16);
    lv_obj_set_y(ui_Button12, 12);
    lv_obj_set_align(ui_Button12, LV_ALIGN_CENTER);

    ui_Label24 = lv_label_create(ui_BLDC_1);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label24, 17);
    lv_obj_set_y(ui_Label24, 12);
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "-");
    lv_obj_set_style_text_color(ui_Label24, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label24, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Dropdown1 = lv_dropdown_create(ui_BLDC_1);
    lv_dropdown_set_options(ui_Dropdown1, "OFF\nON\n");
    lv_dropdown_set_selected_highlight(ui_Dropdown1, false);
    lv_obj_set_width(ui_Dropdown1, 226);
    lv_obj_set_height(ui_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Dropdown1, -73);
    lv_obj_set_y(ui_Dropdown1, 103);
    lv_obj_set_align(ui_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags



    lv_obj_add_event_cb(ui_Button10, ui_event_Button10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Dropdown1, ui_event_Dropdown1, LV_EVENT_ALL, NULL);

}
