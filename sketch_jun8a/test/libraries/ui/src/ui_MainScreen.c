// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: ui-lcd-480x320_v2_1

#include "ui.h"

void ui_MainScreen_screen_init(void)
{
    ui_MainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainScreen, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel1, 160);
    lv_obj_set_height(ui_Panel1, 57);
    lv_obj_set_x(ui_Panel1, 146);
    lv_obj_set_y(ui_Panel1, -76);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel2, 160);
    lv_obj_set_height(ui_Panel2, 57);
    lv_obj_set_x(ui_Panel2, 146);
    lv_obj_set_y(ui_Panel2, -17);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel21 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel21, 160);
    lv_obj_set_height(ui_Panel21, 57);
    lv_obj_set_x(ui_Panel21, 145);
    lv_obj_set_y(ui_Panel21, 101);
    lv_obj_set_align(ui_Panel21, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel21, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel21, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel23 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel23, 160);
    lv_obj_set_height(ui_Panel23, 57);
    lv_obj_set_x(ui_Panel23, 145);
    lv_obj_set_y(ui_Panel23, 42);
    lv_obj_set_align(ui_Panel23, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel23, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel23, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button1, 74);
    lv_obj_set_height(ui_Button1, 68);
    lv_obj_set_x(ui_Button1, -173);
    lv_obj_set_y(ui_Button1, -73);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Button2 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button2, 74);
    lv_obj_set_height(ui_Button2, 68);
    lv_obj_set_x(ui_Button2, -85);
    lv_obj_set_y(ui_Button2, -73);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button3, 74);
    lv_obj_set_height(ui_Button3, 68);
    lv_obj_set_x(ui_Button3, 0);
    lv_obj_set_y(ui_Button3, -73);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button4 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button4, 74);
    lv_obj_set_height(ui_Button4, 68);
    lv_obj_set_x(ui_Button4, -174);
    lv_obj_set_y(ui_Button4, 12);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button5 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button5, 74);
    lv_obj_set_height(ui_Button5, 68);
    lv_obj_set_x(ui_Button5, -86);
    lv_obj_set_y(ui_Button5, 11);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button6 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button6, 74);
    lv_obj_set_height(ui_Button6, 68);
    lv_obj_set_x(ui_Button6, -1);
    lv_obj_set_y(ui_Button6, 11);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button7, 74);
    lv_obj_set_height(ui_Button7, 68);
    lv_obj_set_x(ui_Button7, -174);
    lv_obj_set_y(ui_Button7, 95);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button8 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button8, 74);
    lv_obj_set_height(ui_Button8, 68);
    lv_obj_set_x(ui_Button8, -87);
    lv_obj_set_y(ui_Button8, 95);
    lv_obj_set_align(ui_Button8, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button9 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_Button9, 74);
    lv_obj_set_height(ui_Button9, 68);
    lv_obj_set_x(ui_Button9, -1);
    lv_obj_set_y(ui_Button9, 94);
    lv_obj_set_align(ui_Button9, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Button9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -174);
    lv_obj_set_y(ui_Label1, -82);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "1");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -84);
    lv_obj_set_y(ui_Label2, -82);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "2");
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -1);
    lv_obj_set_y(ui_Label3, -83);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "3");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -176);
    lv_obj_set_y(ui_Label4, 2);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "4");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -86);
    lv_obj_set_y(ui_Label5, 2);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "5");
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -1);
    lv_obj_set_y(ui_Label6, 2);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "6");
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -174);
    lv_obj_set_y(ui_Label7, 86);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "7");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -88);
    lv_obj_set_y(ui_Label8, 85);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "8");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, -2);
    lv_obj_set_y(ui_Label9, 84);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "9");
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_KONTROL_BLDC = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_KONTROL_BLDC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_KONTROL_BLDC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_KONTROL_BLDC, -148);
    lv_obj_set_y(ui_KONTROL_BLDC, -125);
    lv_obj_set_align(ui_KONTROL_BLDC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_KONTROL_BLDC, "CONTROLS BLDC");
    lv_obj_set_style_text_color(ui_KONTROL_BLDC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_KONTROL_BLDC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_MainScreen);
    lv_img_set_src(ui_Image3, &ui_img_1754639307);
    lv_obj_set_width(ui_Image3, 35);
    lv_obj_set_height(ui_Image3, 35);
    lv_obj_set_x(ui_Image3, 103);
    lv_obj_set_y(ui_Image3, -80);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelTemp = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LabelTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelTemp, 173);
    lv_obj_set_y(ui_LabelTemp, -76);
    lv_obj_set_align(ui_LabelTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTemp, "0");
    lv_obj_set_style_text_color(ui_LabelTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTemp, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Suhu = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Suhu, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Suhu, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Suhu, 105);
    lv_obj_set_y(ui_Suhu, -57);
    lv_obj_set_align(ui_Suhu, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Suhu, "TEMPERATUR");
    lv_obj_set_style_text_color(ui_Suhu, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Suhu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Suhu, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_MainScreen);
    lv_img_set_src(ui_Image1, &ui_img_1924603646);
    lv_obj_set_width(ui_Image1, 35);
    lv_obj_set_height(ui_Image1, 35);
    lv_obj_set_x(ui_Image1, 102);
    lv_obj_set_y(ui_Image1, -22);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelSpeed = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LabelSpeed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSpeed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSpeed, 174);
    lv_obj_set_y(ui_LabelSpeed, -17);
    lv_obj_set_align(ui_LabelSpeed, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSpeed, "0");
    lv_obj_set_style_text_color(ui_LabelSpeed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSpeed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSpeed, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Kecepatan = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Kecepatan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Kecepatan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Kecepatan, 103);
    lv_obj_set_y(ui_Kecepatan, 1);
    lv_obj_set_align(ui_Kecepatan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Kecepatan, "SPEED");
    lv_obj_set_style_text_color(ui_Kecepatan, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Kecepatan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Kecepatan, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_MainScreen);
    lv_img_set_src(ui_Image2, &ui_img_112426812);
    lv_obj_set_width(ui_Image2, 35);
    lv_obj_set_height(ui_Image2, 35);
    lv_obj_set_x(ui_Image2, 104);
    lv_obj_set_y(ui_Image2, 37);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Tekanan = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Tekanan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekanan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekanan, 105);
    lv_obj_set_y(ui_Tekanan, 60);
    lv_obj_set_align(ui_Tekanan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekanan, "PRESSURE");
    lv_obj_set_style_text_color(ui_Tekanan, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekanan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekanan, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelPress = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LabelPress, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPress, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPress, 173);
    lv_obj_set_y(ui_LabelPress, 43);
    lv_obj_set_align(ui_LabelPress, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelPress, "0");
    lv_obj_set_style_text_color(ui_LabelPress, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelPress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelPress, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_MainScreen);
    lv_img_set_src(ui_Image4, &ui_img_1318045025);
    lv_obj_set_width(ui_Image4, 33);
    lv_obj_set_height(ui_Image4, 35);
    lv_obj_set_x(ui_Image4, 103);
    lv_obj_set_y(ui_Image4, 95);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Kebisingan = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Kebisingan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Kebisingan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Kebisingan, 104);
    lv_obj_set_y(ui_Kebisingan, 117);
    lv_obj_set_align(ui_Kebisingan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Kebisingan, "NOISE");
    lv_obj_set_style_text_color(ui_Kebisingan, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Kebisingan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Kebisingan, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelNoise = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LabelNoise, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelNoise, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelNoise, 174);
    lv_obj_set_y(ui_LabelNoise, 103);
    lv_obj_set_align(ui_LabelNoise, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelNoise, "0");
    lv_obj_set_style_text_color(ui_LabelNoise, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelNoise, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelNoise, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState1 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState1, -172);
    lv_obj_set_y(ui_LebelState1, -56);
    lv_obj_set_align(ui_LebelState1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState1, "OFF");
    lv_obj_set_style_text_font(ui_LebelState1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState2 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState2, -85);
    lv_obj_set_y(ui_LebelState2, -56);
    lv_obj_set_align(ui_LebelState2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState2, "OFF");
    lv_obj_set_style_text_font(ui_LebelState2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState3 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState3, 0);
    lv_obj_set_y(ui_LebelState3, -57);
    lv_obj_set_align(ui_LebelState3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState3, "OFF");
    lv_obj_set_style_text_font(ui_LebelState3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState4 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState4, -174);
    lv_obj_set_y(ui_LebelState4, 30);
    lv_obj_set_align(ui_LebelState4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState4, "OFF");
    lv_obj_set_style_text_font(ui_LebelState4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState5 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState5, -84);
    lv_obj_set_y(ui_LebelState5, 28);
    lv_obj_set_align(ui_LebelState5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState5, "OFF");
    lv_obj_set_style_text_font(ui_LebelState5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState6 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState6, 1);
    lv_obj_set_y(ui_LebelState6, 27);
    lv_obj_set_align(ui_LebelState6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState6, "OFF");
    lv_obj_set_style_text_font(ui_LebelState6, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState7 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState7, -174);
    lv_obj_set_y(ui_LebelState7, 111);
    lv_obj_set_align(ui_LebelState7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState7, "OFF");
    lv_obj_set_style_text_font(ui_LebelState7, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState8 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState8, -87);
    lv_obj_set_y(ui_LebelState8, 111);
    lv_obj_set_align(ui_LebelState8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState8, "OFF");
    lv_obj_set_style_text_font(ui_LebelState8, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LebelState9 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_LebelState9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LebelState9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LebelState9, 0);
    lv_obj_set_y(ui_LebelState9, 111);
    lv_obj_set_align(ui_LebelState9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LebelState9, "OFF");
    lv_obj_set_style_text_font(ui_LebelState9, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_STATUS = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_STATUS, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_STATUS, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_STATUS, 94);
    lv_obj_set_y(ui_STATUS, -119);
    lv_obj_set_align(ui_STATUS, LV_ALIGN_CENTER);
    lv_label_set_text(ui_STATUS, "STATUS");
    lv_obj_set_style_text_color(ui_STATUS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_STATUS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonWifi1 = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_ButtonWifi1, 35);
    lv_obj_set_height(ui_ButtonWifi1, 35);
    lv_obj_set_x(ui_ButtonWifi1, 221);
    lv_obj_set_y(ui_ButtonWifi1, -142);
    lv_obj_set_align(ui_ButtonWifi1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ButtonWifi1, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonWifi1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_ButtonWifi1, lv_color_hex(0x403890), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_ButtonWifi1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ButtonWifi1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_MainScreen);
    lv_img_set_src(ui_Image6, &ui_img_2047884213);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 20
    lv_obj_set_x(ui_Image6, 222);
    lv_obj_set_y(ui_Image6, -143);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonWifi1, ui_event_ButtonWifi1, LV_EVENT_ALL, NULL);

}