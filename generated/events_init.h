/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

/* Event configuration */
void events_init(lv_ui *ui);
/* Event configuration for Overview screen */
void events_init_Overview(lv_ui *ui);
/* Event configuration for Ride 1 screen */
void events_init_Ride1(lv_ui *ui);
/* Event configuration for Ride 2 screen */
void events_init_Ride2(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */