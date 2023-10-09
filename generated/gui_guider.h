/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *Overview;
	lv_obj_t *Overview_container_Background;
	lv_obj_t *Overview_image_Header;
	lv_obj_t *Overview_label_Date;
	lv_obj_t *Overview_label_Title;
	lv_obj_t *Overview_label_Time;
	lv_obj_t *Overview_image_GPS_icon;
	lv_obj_t *Overview_image_Travelled_icon;
	lv_obj_t *Overview_image_Speed_icon;
	lv_obj_t *Overview_image_Remain_icon;
	lv_obj_t *Overview_image_Elapsed_icon;
	lv_obj_t *Overview_label_Distance;
	lv_obj_t *Overview_label_Direction;
	lv_obj_t *Overview_label_Street;
	lv_obj_t *Overview_label_Travelled_1;
	lv_obj_t *Overview_label_Travelled_2;
	lv_obj_t *Overview_label_Travelled_3;
	lv_obj_t *Overview_label_Speed_1;
	lv_obj_t *Overview_label_Speed_2;
	lv_obj_t *Overview_label_Speed_3;
	lv_obj_t *Overview_label_Remain_1;
	lv_obj_t *Overview_label_Remain_2;
	lv_obj_t *Overview_label_Remain_3;
	lv_obj_t *Overview_label_Elapsed_1;
	lv_obj_t *Overview_label_Elapsed_2;
	lv_obj_t *Overview_label_Meter_speed;
	lv_obj_t *Overview_label_Meter_speed_unit;
	lv_obj_t *Overview_image_Footer;
	lv_obj_t *Overview_line_H_Seperator;
	lv_obj_t *Overview_line_V_Seperator;
	lv_obj_t *Overview_btn_Previous;
	lv_obj_t *Overview_btn_Previous_label;
	lv_obj_t *Overview_btn_Home;
	lv_obj_t *Overview_btn_Home_label;
	lv_obj_t *Overview_btn_Next;
	lv_obj_t *Overview_btn_Next_label;
	lv_obj_t *Overview_meter_Speed;
	
	lv_obj_t *Ride1;
	lv_obj_t *Ride1_container_Background;
	lv_obj_t *Ride1_image_Header;
	lv_obj_t *Ride1_label_Date;
	lv_obj_t *Ride1_label_Title;
	lv_obj_t *Ride1_label_Time;
	lv_obj_t *Ride1_label_Distance_1;
	lv_obj_t *Ride1_image_Distance;
	lv_obj_t *Ride1_label_Distance_2;
	lv_obj_t *Ride1_label_Distance_3;
	lv_obj_t *Ride1_line_H_Seperator_1;
	lv_obj_t *Ride1_line_H_Seperator_2;
	lv_obj_t *Ride1_line_V_Seperator;
	lv_obj_t *Ride1_label_Speed_1;
	lv_obj_t *Ride1_image_Speed;
	lv_obj_t *Ride1_label_Speed_2;
	lv_obj_t *Ride1_label_Speed_3;
	lv_obj_t *Ride1_label_Gain_1;
	lv_obj_t *Ride1_image_Eleva_gain;
	lv_obj_t *Ride1_label_Gain_2;
	lv_obj_t *Ride1_label_Gain_3;
	lv_obj_t *Ride1_label_Lost_1;
	lv_obj_t *Ride1_image_Eleva_lost;
	lv_obj_t *Ride1_label_Lost_2;
	lv_obj_t *Ride1_label_Lost_3;
	lv_obj_t *Ride1_image_Footer;
	lv_obj_t *Ride1_chart_Elevation;
	lv_obj_t *Ride1_label_Elev_0;
	lv_obj_t *Ride1_label_Elev_1;
	lv_obj_t *Ride1_label_Elev_2;
	lv_obj_t *Ride1_label_Elev_3;
	lv_obj_t *Ride1_label_Elev_4;
	lv_obj_t *Ride1_label_Elev_5;
	lv_obj_t *Ride1_label_Elev_6;
	lv_obj_t *Ride1_label_Elev_7;
	lv_obj_t *Ride1_label_Elev_8;
	lv_obj_t *Ride1_label_Elev_9;
	lv_obj_t *Ride1_label_Elev_10;
	lv_obj_t *Ride1_label_Elev_11;
	lv_obj_t *Ride1_label_Elev_12;
	lv_obj_t *Ride1_label_Elev_13;
	lv_obj_t *Ride1_label_Elev_14;
	lv_obj_t *Ride1_label_Elev_15;
	lv_obj_t *Ride1_btn_Previous;
	lv_obj_t *Ride1_btn_Previous_label;
	lv_obj_t *Ride1_btn_Home;
	lv_obj_t *Ride1_btn_Home_label;
	lv_obj_t *Ride1_btn_Next;
	lv_obj_t *Ride1_btn_Next_label;
	
	lv_obj_t *Ride2;
	lv_obj_t *Ride2_container_Background;
	lv_obj_t *Ride2_image_Header;
	lv_obj_t *Ride2_label_Date;
	lv_obj_t *Ride2_label_Title;
	lv_obj_t *Ride2_label_Time;
	lv_obj_t *Ride2_image_GPS_icon;
	lv_obj_t *Ride2_image_Calories_icon;
	lv_obj_t *Ride2_image_Heart_icon;
	lv_obj_t *Ride2_image_Cadence_icon;
	lv_obj_t *Ride2_image_Elapsed_icon;
	lv_obj_t *Ride2_label_Distance;
	lv_obj_t *Ride2_label_Direction;
	lv_obj_t *Ride2_label_Street;
	lv_obj_t *Ride2_label_Calories_1;
	lv_obj_t *Ride2_label_Calories_2;
	lv_obj_t *Ride2_label_Calories_3;
	lv_obj_t *Ride2_label_Heart_1;
	lv_obj_t *Ride2_label_Heart_2;
	lv_obj_t *Ride2_label_Heart_3;
	lv_obj_t *Ride2_label_Cadence_1;
	lv_obj_t *Ride2_label_Cadence_2;
	lv_obj_t *Ride2_label_Cadence_3;
	lv_obj_t *Ride2_label_Elapsed_1;
	lv_obj_t *Ride2_label_Elapsed_2;
	lv_obj_t *Ride2_label_Watts;
	lv_obj_t *Ride2_label_Watts_unit;
	lv_obj_t *Ride2_arc_Watts;
	lv_obj_t *Ride2_image_Footer;
	lv_obj_t *Ride2_line_H_Seperator;
	lv_obj_t *Ride2_line_V_Seperator;
	lv_obj_t *Ride2_btn_Previous;
	lv_obj_t *Ride2_btn_Previous_label;
	lv_obj_t *Ride2_btn_Home;
	lv_obj_t *Ride2_btn_Home_label;
	lv_obj_t *Ride2_btn_Next;
	lv_obj_t *Ride2_btn_Next_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_Overview(lv_ui *ui);
void setup_scr_Ride1(lv_ui *ui);
void setup_scr_Ride2(lv_ui *ui);
LV_IMG_DECLARE(_ebike_icn_heart_rate_23x17);
LV_IMG_DECLARE(_ebike_gauge_lines_193x164);
LV_IMG_DECLARE(_ebike_info_v_210x3);
LV_IMG_DECLARE(_ebike_icn_elevation_lost_21x18);
LV_IMG_DECLARE(_ebike_icn_average_speed_23x17);
LV_IMG_DECLARE(_info_h_3x120);
LV_IMG_DECLARE(_ebike_gauge_bg_233x234);
LV_IMG_DECLARE(_ebike_gps_arrow_28x48);
LV_IMG_DECLARE(_ebike_icn_round_per_minute_20x20);
LV_IMG_DECLARE(_ebike_gauge_battery_15x12);
LV_IMG_DECLARE(_ebike_gauge_numbers_166x134);
LV_IMG_DECLARE(_ebike_icn_calories_burned_21x14);
LV_IMG_DECLARE(_ebike_footer_line_1_22x4);
LV_IMG_DECLARE(_ebike_footer_line_2_22x4);
LV_IMG_DECLARE(_info_h_3x60);
LV_IMG_DECLARE(_ebike_icn_distance_travelled_21x14);
LV_IMG_DECLARE(_ebike_icn_elapsed_time_20x25);
LV_IMG_DECLARE(_ebike_icn_average_speed_big_40x31);
LV_IMG_DECLARE(_ebike_icn_elevation_gained_22x18);
LV_IMG_DECLARE(_ebike_header_bg_480x51);
LV_IMG_DECLARE(_bg1_480x320);
LV_IMG_DECLARE(_ebike_icn_distance_travelled_big_42x28);
LV_IMG_DECLARE(_info_h_211x3);
LV_IMG_DECLARE(_info_h_210x3);
LV_IMG_DECLARE(_ebike_footer_bg_480x35);
LV_IMG_DECLARE(_ebike_watts_182x75);
LV_IMG_DECLARE(_ebike_icn_remaining_distance_20x20);
LV_IMG_DECLARE(_ebike_gauge_battery_line_237x120);

#ifdef __cplusplus
}
#endif
#endif