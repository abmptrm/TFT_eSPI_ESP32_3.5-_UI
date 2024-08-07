#ifndef BLDC_1_H
#define BLDC_1_H

#include <lvgl.h>
#include <ESP32Servo.h>
#include "BLDC9.h"
#include "ui.h"

extern Servo bldc1;

// extern int slider[8] = { 0 };
// extern int speed[8] = { 0 };
// extern bool toggleOnOff[8] = { false };
// extern int stateDirection[8] = { 0 };

#ifdef __cplusplus
extern "C" {
#endif

void ui_event_SliderSpeed1(lv_event_t * e);
void ui_event_Switch2(lv_event_t * e);
void ui_event_Switch1(lv_event_t * e);
void ui_event_Button14(lv_event_t * e);
void ui_event_Button15(lv_event_t * e);

#ifdef __cplusplus
} // extern "C"
#endif

#endif