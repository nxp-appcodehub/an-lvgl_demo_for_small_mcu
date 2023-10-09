/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

/* Screen information update timer */
extern lv_timer_t * ebike_timer;
/* Overview screen meter needle */
extern lv_meter_indicator_t* Overview_meter_Speed_scale_1_ndline_0;
/* Declare a chart series */
extern lv_chart_series_t *pchart_ser;

/* Overview screen information update callback function */
void overview_timer_callback(lv_timer_t * timer);
/* Ride 1 screen information update callback function */
void ride1_timer_callback(lv_timer_t * timer);	
/* Ride 2 screen information update callback function */
void ride2_timer_callback(lv_timer_t * timer);
/* Create a timer for updating screen information periodically */
void create_system_timer(void);
/* custom initialization */
void custom_init(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
