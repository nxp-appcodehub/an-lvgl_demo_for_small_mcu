/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Ride2(lv_ui *ui){

	//Write codes Ride2
	ui->Ride2 = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_ride2_main_main_default
	static lv_style_t style_ride2_main_main_default;
	if (style_ride2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_main_main_default);
	else
		lv_style_init(&style_ride2_main_main_default);
	lv_style_set_bg_color(&style_ride2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_ride2_main_main_default, 0);
	lv_obj_add_style(ui->Ride2, &style_ride2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_container_Background
	ui->Ride2_container_Background = lv_obj_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_container_Background, 0, 0);
	lv_obj_set_size(ui->Ride2_container_Background, 480, 320);

	//Write style state: LV_STATE_DEFAULT for style_ride2_container_background_main_main_default
	static lv_style_t style_ride2_container_background_main_main_default;
	if (style_ride2_container_background_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_container_background_main_main_default);
	else
		lv_style_init(&style_ride2_container_background_main_main_default);
	lv_style_set_radius(&style_ride2_container_background_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_container_background_main_main_default, lv_color_make(0x16, 0x1d, 0x27));
	lv_style_set_bg_grad_color(&style_ride2_container_background_main_main_default, lv_color_make(0x16, 0x1d, 0x27));
	lv_style_set_bg_grad_dir(&style_ride2_container_background_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_container_background_main_main_default, 255);
	lv_style_set_border_color(&style_ride2_container_background_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_ride2_container_background_main_main_default, 0);
	lv_style_set_border_opa(&style_ride2_container_background_main_main_default, 255);
	lv_style_set_pad_left(&style_ride2_container_background_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_container_background_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_container_background_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_container_background_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_container_Background, &style_ride2_container_background_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_image_Header
	ui->Ride2_image_Header = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_Header, 0, 0);
	lv_obj_set_size(ui->Ride2_image_Header, 480, 51);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_header_main_main_default
	static lv_style_t style_ride2_image_header_main_main_default;
	if (style_ride2_image_header_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_header_main_main_default);
	else
		lv_style_init(&style_ride2_image_header_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_header_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_header_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_header_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_Header, &style_ride2_image_header_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_Header, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_Header,"F:/ebike_header_bg.bin");
	lv_img_set_pivot(ui->Ride2_image_Header, 0,0);
	lv_img_set_angle(ui->Ride2_image_Header, 0);

	//Write codes Ride2_label_Date
	ui->Ride2_label_Date = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Date, 20, 1);
	lv_obj_set_size(ui->Ride2_label_Date, 102, 19);
	lv_label_set_text(ui->Ride2_label_Date, "May 5,2022");
	lv_label_set_long_mode(ui->Ride2_label_Date, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Date, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_date_main_main_default
	static lv_style_t style_ride2_label_date_main_main_default;
	if (style_ride2_label_date_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_date_main_main_default);
	else
		lv_style_init(&style_ride2_label_date_main_main_default);
	lv_style_set_radius(&style_ride2_label_date_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_date_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_date_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_date_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_date_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_date_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride2_label_date_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_date_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_date_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_date_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_date_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_date_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Date, &style_ride2_label_date_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Title
	ui->Ride2_label_Title = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Title, 156, 7);
	lv_obj_set_size(ui->Ride2_label_Title, 165, 22);
	lv_label_set_text(ui->Ride2_label_Title, "RIDE DETAILS");
	lv_label_set_long_mode(ui->Ride2_label_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Title, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_title_main_main_default
	static lv_style_t style_ride2_label_title_main_main_default;
	if (style_ride2_label_title_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_title_main_main_default);
	else
		lv_style_init(&style_ride2_label_title_main_main_default);
	lv_style_set_radius(&style_ride2_label_title_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_title_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_title_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_title_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride2_label_title_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_title_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_title_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_title_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_title_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_title_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Title, &style_ride2_label_title_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Time
	ui->Ride2_label_Time = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Time, 360, 1);
	lv_obj_set_size(ui->Ride2_label_Time, 100, 16);
	lv_label_set_text(ui->Ride2_label_Time, "10:28 AM");
	lv_label_set_long_mode(ui->Ride2_label_Time, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Time, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_time_main_main_default
	static lv_style_t style_ride2_label_time_main_main_default;
	if (style_ride2_label_time_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_time_main_main_default);
	else
		lv_style_init(&style_ride2_label_time_main_main_default);
	lv_style_set_radius(&style_ride2_label_time_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_time_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_time_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_time_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride2_label_time_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_time_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_time_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_time_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_time_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_time_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Time, &style_ride2_label_time_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_image_GPS_icon
	ui->Ride2_image_GPS_icon = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_GPS_icon, 274, 60);
	lv_obj_set_size(ui->Ride2_image_GPS_icon, 28, 48);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_gps_icon_main_main_default
	static lv_style_t style_ride2_image_gps_icon_main_main_default;
	if (style_ride2_image_gps_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_gps_icon_main_main_default);
	else
		lv_style_init(&style_ride2_image_gps_icon_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_gps_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_gps_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_gps_icon_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_GPS_icon, &style_ride2_image_gps_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_GPS_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_GPS_icon,"F:/ebike_gps_arrow.bin");
	lv_img_set_pivot(ui->Ride2_image_GPS_icon, 0,0);
	lv_img_set_angle(ui->Ride2_image_GPS_icon, 0);

	//Write codes Ride2_image_Calories_icon
	ui->Ride2_image_Calories_icon = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_Calories_icon, 225, 130);
	lv_obj_set_size(ui->Ride2_image_Calories_icon, 19, 21);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_calories_icon_main_main_default
	static lv_style_t style_ride2_image_calories_icon_main_main_default;
	if (style_ride2_image_calories_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_calories_icon_main_main_default);
	else
		lv_style_init(&style_ride2_image_calories_icon_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_calories_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_calories_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_calories_icon_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_Calories_icon, &style_ride2_image_calories_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_Calories_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_Calories_icon,"F:/ebike_icn_calories_burned.bin");
	lv_img_set_pivot(ui->Ride2_image_Calories_icon, 0,0);
	lv_img_set_angle(ui->Ride2_image_Calories_icon, 0);

	//Write codes Ride2_image_Heart_icon
	ui->Ride2_image_Heart_icon = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_Heart_icon, 352, 130);
	lv_obj_set_size(ui->Ride2_image_Heart_icon, 24, 21);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_heart_icon_main_main_default
	static lv_style_t style_ride2_image_heart_icon_main_main_default;
	if (style_ride2_image_heart_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_heart_icon_main_main_default);
	else
		lv_style_init(&style_ride2_image_heart_icon_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_heart_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_heart_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_heart_icon_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_Heart_icon, &style_ride2_image_heart_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_Heart_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_Heart_icon,"F:/ebike_icn_heart_rate.bin");
	lv_img_set_pivot(ui->Ride2_image_Heart_icon, 0,0);
	lv_img_set_angle(ui->Ride2_image_Heart_icon, 0);

	//Write codes Ride2_image_Cadence_icon
	ui->Ride2_image_Cadence_icon = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_Cadence_icon, 225, 193);
	lv_obj_set_size(ui->Ride2_image_Cadence_icon, 20, 20);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_cadence_icon_main_main_default
	static lv_style_t style_ride2_image_cadence_icon_main_main_default;
	if (style_ride2_image_cadence_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_cadence_icon_main_main_default);
	else
		lv_style_init(&style_ride2_image_cadence_icon_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_cadence_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_cadence_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_cadence_icon_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_Cadence_icon, &style_ride2_image_cadence_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_Cadence_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_Cadence_icon,"F:/ebike_icn_round_per_minute.bin");
	lv_img_set_pivot(ui->Ride2_image_Cadence_icon, 0,0);
	lv_img_set_angle(ui->Ride2_image_Cadence_icon, 0);

	//Write codes Ride2_image_Elapsed_icon
	ui->Ride2_image_Elapsed_icon = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_Elapsed_icon, 352, 193);
	lv_obj_set_size(ui->Ride2_image_Elapsed_icon, 20, 25);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_elapsed_icon_main_main_default
	static lv_style_t style_ride2_image_elapsed_icon_main_main_default;
	if (style_ride2_image_elapsed_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_elapsed_icon_main_main_default);
	else
		lv_style_init(&style_ride2_image_elapsed_icon_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_elapsed_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_elapsed_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_elapsed_icon_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_Elapsed_icon, &style_ride2_image_elapsed_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_Elapsed_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_Elapsed_icon,"F:/ebike_icn_elapsed_time.bin");
	lv_img_set_pivot(ui->Ride2_image_Elapsed_icon, 0,0);
	lv_img_set_angle(ui->Ride2_image_Elapsed_icon, 0);

	//Write codes Ride2_label_Distance
	ui->Ride2_label_Distance = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Distance, 320, 49);
	lv_obj_set_size(ui->Ride2_label_Distance, 98, 20);
	lv_label_set_text(ui->Ride2_label_Distance, "3.1 KM");
	lv_label_set_long_mode(ui->Ride2_label_Distance, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Distance, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_distance_main_main_default
	static lv_style_t style_ride2_label_distance_main_main_default;
	if (style_ride2_label_distance_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_distance_main_main_default);
	else
		lv_style_init(&style_ride2_label_distance_main_main_default);
	lv_style_set_radius(&style_ride2_label_distance_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_distance_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_distance_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_distance_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_distance_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_distance_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride2_label_distance_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_distance_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_distance_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_distance_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_distance_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_distance_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Distance, &style_ride2_label_distance_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Direction
	ui->Ride2_label_Direction = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Direction, 320, 74);
	lv_obj_set_size(ui->Ride2_label_Direction, 147, 18);
	lv_label_set_text(ui->Ride2_label_Direction, "Turn right to");
	lv_label_set_long_mode(ui->Ride2_label_Direction, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Direction, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_direction_main_main_default
	static lv_style_t style_ride2_label_direction_main_main_default;
	if (style_ride2_label_direction_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_direction_main_main_default);
	else
		lv_style_init(&style_ride2_label_direction_main_main_default);
	lv_style_set_radius(&style_ride2_label_direction_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_direction_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_direction_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_direction_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_direction_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_direction_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_direction_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_direction_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_direction_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_direction_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_direction_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_direction_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Direction, &style_ride2_label_direction_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Street
	ui->Ride2_label_Street = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Street, 320, 97);
	lv_obj_set_size(ui->Ride2_label_Street, 147, 17);
	lv_label_set_text(ui->Ride2_label_Street, "Ed Bluestein Blvd");
	lv_label_set_long_mode(ui->Ride2_label_Street, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Street, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_street_main_main_default
	static lv_style_t style_ride2_label_street_main_main_default;
	if (style_ride2_label_street_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_street_main_main_default);
	else
		lv_style_init(&style_ride2_label_street_main_main_default);
	lv_style_set_radius(&style_ride2_label_street_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_street_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_street_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_street_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_street_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_street_main_main_default, lv_color_make(0xcc, 0xcc, 0xcc));
	lv_style_set_text_font(&style_ride2_label_street_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_street_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_street_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_street_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_street_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_street_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Street, &style_ride2_label_street_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Calories_1
	ui->Ride2_label_Calories_1 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Calories_1, 255, 118);
	lv_obj_set_size(ui->Ride2_label_Calories_1, 82, 36);
	lv_label_set_text(ui->Ride2_label_Calories_1, "Calories Burned");
	lv_label_set_long_mode(ui->Ride2_label_Calories_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Calories_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_calories_1_main_main_default
	static lv_style_t style_ride2_label_calories_1_main_main_default;
	if (style_ride2_label_calories_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_calories_1_main_main_default);
	else
		lv_style_init(&style_ride2_label_calories_1_main_main_default);
	lv_style_set_radius(&style_ride2_label_calories_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_calories_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_calories_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_calories_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_calories_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_calories_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_calories_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_calories_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_calories_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_calories_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_calories_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_calories_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Calories_1, &style_ride2_label_calories_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Calories_2
	ui->Ride2_label_Calories_2 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Calories_2, 225, 157);
	lv_obj_set_size(ui->Ride2_label_Calories_2, 70, 25);
	lv_label_set_text(ui->Ride2_label_Calories_2, "462");
	lv_label_set_long_mode(ui->Ride2_label_Calories_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Calories_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_calories_2_main_main_default
	static lv_style_t style_ride2_label_calories_2_main_main_default;
	if (style_ride2_label_calories_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_calories_2_main_main_default);
	else
		lv_style_init(&style_ride2_label_calories_2_main_main_default);
	lv_style_set_radius(&style_ride2_label_calories_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_calories_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_calories_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_calories_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_calories_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_calories_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride2_label_calories_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_calories_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_calories_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_calories_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_calories_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_calories_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Calories_2, &style_ride2_label_calories_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Calories_3
	ui->Ride2_label_Calories_3 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Calories_3, 304, 160);
	lv_obj_set_size(ui->Ride2_label_Calories_3, 40, 20);
	lv_label_set_text(ui->Ride2_label_Calories_3, "kcal");
	lv_label_set_long_mode(ui->Ride2_label_Calories_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Calories_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_calories_3_main_main_default
	static lv_style_t style_ride2_label_calories_3_main_main_default;
	if (style_ride2_label_calories_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_calories_3_main_main_default);
	else
		lv_style_init(&style_ride2_label_calories_3_main_main_default);
	lv_style_set_radius(&style_ride2_label_calories_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_calories_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_calories_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_calories_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_calories_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_calories_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_calories_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_calories_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_calories_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_calories_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_calories_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_calories_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Calories_3, &style_ride2_label_calories_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Heart_1
	ui->Ride2_label_Heart_1 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Heart_1, 382, 118);
	lv_obj_set_size(ui->Ride2_label_Heart_1, 82, 34);
	lv_label_set_text(ui->Ride2_label_Heart_1, "Heart Rate");
	lv_label_set_long_mode(ui->Ride2_label_Heart_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Heart_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_heart_1_main_main_default
	static lv_style_t style_ride2_label_heart_1_main_main_default;
	if (style_ride2_label_heart_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_heart_1_main_main_default);
	else
		lv_style_init(&style_ride2_label_heart_1_main_main_default);
	lv_style_set_radius(&style_ride2_label_heart_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_heart_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_heart_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_heart_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_heart_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_heart_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_heart_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_heart_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_heart_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_heart_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_heart_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_heart_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Heart_1, &style_ride2_label_heart_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Heart_2
	ui->Ride2_label_Heart_2 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Heart_2, 352, 157);
	lv_obj_set_size(ui->Ride2_label_Heart_2, 60, 25);
	lv_label_set_text(ui->Ride2_label_Heart_2, "118");
	lv_label_set_long_mode(ui->Ride2_label_Heart_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Heart_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_heart_2_main_main_default
	static lv_style_t style_ride2_label_heart_2_main_main_default;
	if (style_ride2_label_heart_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_heart_2_main_main_default);
	else
		lv_style_init(&style_ride2_label_heart_2_main_main_default);
	lv_style_set_radius(&style_ride2_label_heart_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_heart_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_heart_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_heart_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_heart_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_heart_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride2_label_heart_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_heart_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_heart_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_heart_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_heart_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_heart_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Heart_2, &style_ride2_label_heart_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Heart_3
	ui->Ride2_label_Heart_3 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Heart_3, 418, 160);
	lv_obj_set_size(ui->Ride2_label_Heart_3, 50, 17);
	lv_label_set_text(ui->Ride2_label_Heart_3, "BPM");
	lv_label_set_long_mode(ui->Ride2_label_Heart_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Heart_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_heart_3_main_main_default
	static lv_style_t style_ride2_label_heart_3_main_main_default;
	if (style_ride2_label_heart_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_heart_3_main_main_default);
	else
		lv_style_init(&style_ride2_label_heart_3_main_main_default);
	lv_style_set_radius(&style_ride2_label_heart_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_heart_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_heart_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_heart_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_heart_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_heart_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_heart_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_heart_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_heart_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_heart_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_heart_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_heart_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Heart_3, &style_ride2_label_heart_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Cadence_1
	ui->Ride2_label_Cadence_1 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Cadence_1, 255, 190);
	lv_obj_set_size(ui->Ride2_label_Cadence_1, 82, 36);
	lv_label_set_text(ui->Ride2_label_Cadence_1, "Cadence");
	lv_label_set_long_mode(ui->Ride2_label_Cadence_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Cadence_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_cadence_1_main_main_default
	static lv_style_t style_ride2_label_cadence_1_main_main_default;
	if (style_ride2_label_cadence_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_cadence_1_main_main_default);
	else
		lv_style_init(&style_ride2_label_cadence_1_main_main_default);
	lv_style_set_radius(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_cadence_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_cadence_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_cadence_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_cadence_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_cadence_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_cadence_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Cadence_1, &style_ride2_label_cadence_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Cadence_2
	ui->Ride2_label_Cadence_2 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Cadence_2, 225, 229);
	lv_obj_set_size(ui->Ride2_label_Cadence_2, 60, 25);
	lv_label_set_text(ui->Ride2_label_Cadence_2, "86");
	lv_label_set_long_mode(ui->Ride2_label_Cadence_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Cadence_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_cadence_2_main_main_default
	static lv_style_t style_ride2_label_cadence_2_main_main_default;
	if (style_ride2_label_cadence_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_cadence_2_main_main_default);
	else
		lv_style_init(&style_ride2_label_cadence_2_main_main_default);
	lv_style_set_radius(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_cadence_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_cadence_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_cadence_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_cadence_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride2_label_cadence_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_cadence_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Cadence_2, &style_ride2_label_cadence_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Cadence_3
	ui->Ride2_label_Cadence_3 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Cadence_3, 294, 232);
	lv_obj_set_size(ui->Ride2_label_Cadence_3, 47, 19);
	lv_label_set_text(ui->Ride2_label_Cadence_3, "RPM");
	lv_label_set_long_mode(ui->Ride2_label_Cadence_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Cadence_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_cadence_3_main_main_default
	static lv_style_t style_ride2_label_cadence_3_main_main_default;
	if (style_ride2_label_cadence_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_cadence_3_main_main_default);
	else
		lv_style_init(&style_ride2_label_cadence_3_main_main_default);
	lv_style_set_radius(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_cadence_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_cadence_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_cadence_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_cadence_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_cadence_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_cadence_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Cadence_3, &style_ride2_label_cadence_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Elapsed_1
	ui->Ride2_label_Elapsed_1 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Elapsed_1, 382, 190);
	lv_obj_set_size(ui->Ride2_label_Elapsed_1, 82, 36);
	lv_label_set_text(ui->Ride2_label_Elapsed_1, "Elapsed Time");
	lv_label_set_long_mode(ui->Ride2_label_Elapsed_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Elapsed_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_elapsed_1_main_main_default
	static lv_style_t style_ride2_label_elapsed_1_main_main_default;
	if (style_ride2_label_elapsed_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_elapsed_1_main_main_default);
	else
		lv_style_init(&style_ride2_label_elapsed_1_main_main_default);
	lv_style_set_radius(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_elapsed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_elapsed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_elapsed_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_elapsed_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_elapsed_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_elapsed_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Elapsed_1, &style_ride2_label_elapsed_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Elapsed_2
	ui->Ride2_label_Elapsed_2 = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Elapsed_2, 352, 229);
	lv_obj_set_size(ui->Ride2_label_Elapsed_2, 85, 25);
	lv_label_set_text(ui->Ride2_label_Elapsed_2, "46:28");
	lv_label_set_long_mode(ui->Ride2_label_Elapsed_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Elapsed_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_elapsed_2_main_main_default
	static lv_style_t style_ride2_label_elapsed_2_main_main_default;
	if (style_ride2_label_elapsed_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_elapsed_2_main_main_default);
	else
		lv_style_init(&style_ride2_label_elapsed_2_main_main_default);
	lv_style_set_radius(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_elapsed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_elapsed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_elapsed_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_elapsed_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride2_label_elapsed_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_elapsed_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Elapsed_2, &style_ride2_label_elapsed_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Watts
	ui->Ride2_label_Watts = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Watts, 77, 122);
	lv_obj_set_size(ui->Ride2_label_Watts, 46, 20);
	lv_label_set_text(ui->Ride2_label_Watts, "0");
	lv_label_set_long_mode(ui->Ride2_label_Watts, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Watts, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_watts_main_main_default
	static lv_style_t style_ride2_label_watts_main_main_default;
	if (style_ride2_label_watts_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_watts_main_main_default);
	else
		lv_style_init(&style_ride2_label_watts_main_main_default);
	lv_style_set_radius(&style_ride2_label_watts_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_watts_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_watts_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_watts_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_watts_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_watts_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride2_label_watts_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride2_label_watts_main_main_default, 2);
	lv_style_set_pad_left(&style_ride2_label_watts_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_watts_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_watts_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_watts_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Watts, &style_ride2_label_watts_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_label_Watts_unit
	ui->Ride2_label_Watts_unit = lv_label_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_label_Watts_unit, 63, 152);
	lv_obj_set_size(ui->Ride2_label_Watts_unit, 75, 24);
	lv_label_set_text(ui->Ride2_label_Watts_unit, "Watts");
	lv_label_set_long_mode(ui->Ride2_label_Watts_unit, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride2_label_Watts_unit, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride2_label_watts_unit_main_main_default
	static lv_style_t style_ride2_label_watts_unit_main_main_default;
	if (style_ride2_label_watts_unit_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_label_watts_unit_main_main_default);
	else
		lv_style_init(&style_ride2_label_watts_unit_main_main_default);
	lv_style_set_radius(&style_ride2_label_watts_unit_main_main_default, 0);
	lv_style_set_bg_color(&style_ride2_label_watts_unit_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride2_label_watts_unit_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_label_watts_unit_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_label_watts_unit_main_main_default, 0);
	lv_style_set_text_color(&style_ride2_label_watts_unit_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride2_label_watts_unit_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride2_label_watts_unit_main_main_default, 2);
	lv_style_set_pad_left(&style_ride2_label_watts_unit_main_main_default, 0);
	lv_style_set_pad_right(&style_ride2_label_watts_unit_main_main_default, 0);
	lv_style_set_pad_top(&style_ride2_label_watts_unit_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride2_label_watts_unit_main_main_default, 0);
	lv_obj_add_style(ui->Ride2_label_Watts_unit, &style_ride2_label_watts_unit_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride2_arc_Watts
	ui->Ride2_arc_Watts = lv_arc_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_arc_Watts, 1, 49);
	lv_obj_set_size(ui->Ride2_arc_Watts, 199, 212);

	//Write style state: LV_STATE_DEFAULT for style_ride2_arc_watts_main_main_default
	static lv_style_t style_ride2_arc_watts_main_main_default;
	if (style_ride2_arc_watts_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_arc_watts_main_main_default);
	else
		lv_style_init(&style_ride2_arc_watts_main_main_default);
	lv_style_set_bg_color(&style_ride2_arc_watts_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride2_arc_watts_main_main_default, lv_color_make(0xf6, 0xf6, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride2_arc_watts_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_arc_watts_main_main_default, 0);
	lv_style_set_border_width(&style_ride2_arc_watts_main_main_default, 0);
	lv_style_set_arc_color(&style_ride2_arc_watts_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_arc_width(&style_ride2_arc_watts_main_main_default, 3);
	lv_obj_add_style(ui->Ride2_arc_Watts, &style_ride2_arc_watts_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_ride2_arc_watts_main_indicator_default
	static lv_style_t style_ride2_arc_watts_main_indicator_default;
	if (style_ride2_arc_watts_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_arc_watts_main_indicator_default);
	else
		lv_style_init(&style_ride2_arc_watts_main_indicator_default);
	lv_style_set_arc_color(&style_ride2_arc_watts_main_indicator_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_arc_width(&style_ride2_arc_watts_main_indicator_default, 3);
	lv_obj_add_style(ui->Ride2_arc_Watts, &style_ride2_arc_watts_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_ride2_arc_watts_main_knob_default
	static lv_style_t style_ride2_arc_watts_main_knob_default;
	if (style_ride2_arc_watts_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_arc_watts_main_knob_default);
	else
		lv_style_init(&style_ride2_arc_watts_main_knob_default);
	lv_style_set_bg_color(&style_ride2_arc_watts_main_knob_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride2_arc_watts_main_knob_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride2_arc_watts_main_knob_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride2_arc_watts_main_knob_default, 0);
	lv_style_set_pad_all(&style_ride2_arc_watts_main_knob_default, 5);
	lv_obj_add_style(ui->Ride2_arc_Watts, &style_ride2_arc_watts_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_arc_set_bg_angles(ui->Ride2_arc_Watts, 0, 360);
	lv_arc_set_angles(ui->Ride2_arc_Watts, 90, 180);
	lv_arc_set_rotation(ui->Ride2_arc_Watts, 0);
	lv_obj_set_style_pad_top(ui->Ride2_arc_Watts, 5, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Ride2_arc_Watts, 5, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Ride2_arc_Watts, 5, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Ride2_arc_Watts, 5, LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->Ride2_arc_Watts, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->Ride2_arc_Watts, 0, LV_STATE_DEFAULT);

	//Write codes Ride2_image_Footer
	ui->Ride2_image_Footer = lv_img_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_image_Footer, 0, 279);
	lv_obj_set_size(ui->Ride2_image_Footer, 480, 35);

	//Write style state: LV_STATE_DEFAULT for style_ride2_image_footer_main_main_default
	static lv_style_t style_ride2_image_footer_main_main_default;
	if (style_ride2_image_footer_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_image_footer_main_main_default);
	else
		lv_style_init(&style_ride2_image_footer_main_main_default);
	lv_style_set_img_recolor(&style_ride2_image_footer_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride2_image_footer_main_main_default, 0);
	lv_style_set_img_opa(&style_ride2_image_footer_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_image_Footer, &style_ride2_image_footer_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride2_image_Footer, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride2_image_Footer,"F:/ebike_footer_bg.bin");
	lv_img_set_pivot(ui->Ride2_image_Footer, 0,0);
	lv_img_set_angle(ui->Ride2_image_Footer, 0);

	//Write codes Ride2_line_H_Seperator
	ui->Ride2_line_H_Seperator = lv_line_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_line_H_Seperator, 225, 180);
	lv_obj_set_size(ui->Ride2_line_H_Seperator, 240, 9);

	//Write style state: LV_STATE_DEFAULT for style_ride2_line_h_seperator_main_main_default
	static lv_style_t style_ride2_line_h_seperator_main_main_default;
	if (style_ride2_line_h_seperator_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_line_h_seperator_main_main_default);
	else
		lv_style_init(&style_ride2_line_h_seperator_main_main_default);
	lv_style_set_line_color(&style_ride2_line_h_seperator_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_ride2_line_h_seperator_main_main_default, 3);
	lv_style_set_line_rounded(&style_ride2_line_h_seperator_main_main_default, true);
	lv_obj_add_style(ui->Ride2_line_H_Seperator, &style_ride2_line_h_seperator_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Ride2_line_H_Seperator[] ={{0, 0},{240, 0},};
	lv_line_set_points(ui->Ride2_line_H_Seperator,Ride2_line_H_Seperator,2);

	//Write codes Ride2_line_V_Seperator
	ui->Ride2_line_V_Seperator = lv_line_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_line_V_Seperator, 340, 119);
	lv_obj_set_size(ui->Ride2_line_V_Seperator, 5, 138);

	//Write style state: LV_STATE_DEFAULT for style_ride2_line_v_seperator_main_main_default
	static lv_style_t style_ride2_line_v_seperator_main_main_default;
	if (style_ride2_line_v_seperator_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_line_v_seperator_main_main_default);
	else
		lv_style_init(&style_ride2_line_v_seperator_main_main_default);
	lv_style_set_line_color(&style_ride2_line_v_seperator_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_ride2_line_v_seperator_main_main_default, 3);
	lv_style_set_line_rounded(&style_ride2_line_v_seperator_main_main_default, true);
	lv_obj_add_style(ui->Ride2_line_V_Seperator, &style_ride2_line_v_seperator_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Ride2_line_V_Seperator[] ={{0, 0},{0, 240},};
	lv_line_set_points(ui->Ride2_line_V_Seperator,Ride2_line_V_Seperator,2);

	//Write codes Ride2_btn_Previous
	ui->Ride2_btn_Previous = lv_btn_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_btn_Previous, 178, 299);
	lv_obj_set_size(ui->Ride2_btn_Previous, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_ride2_btn_previous_main_main_default
	static lv_style_t style_ride2_btn_previous_main_main_default;
	if (style_ride2_btn_previous_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_btn_previous_main_main_default);
	else
		lv_style_init(&style_ride2_btn_previous_main_main_default);
	lv_style_set_radius(&style_ride2_btn_previous_main_main_default, 5);
	lv_style_set_bg_color(&style_ride2_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride2_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_ride2_btn_previous_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_ride2_btn_previous_main_main_default, 255);
	lv_style_set_shadow_color(&style_ride2_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_ride2_btn_previous_main_main_default, 0);
	lv_style_set_border_color(&style_ride2_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_ride2_btn_previous_main_main_default, 0);
	lv_style_set_border_opa(&style_ride2_btn_previous_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_btn_Previous, &style_ride2_btn_previous_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Ride2_btn_Previous_label = lv_label_create(ui->Ride2_btn_Previous);
	lv_label_set_text(ui->Ride2_btn_Previous_label, "<");
	lv_obj_set_style_text_color(ui->Ride2_btn_Previous_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ride2_btn_Previous_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Ride2_btn_Previous, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Ride2_btn_Previous_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Ride2_btn_Home
	ui->Ride2_btn_Home = lv_btn_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_btn_Home, 225, 299);
	lv_obj_set_size(ui->Ride2_btn_Home, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_ride2_btn_home_main_main_default
	static lv_style_t style_ride2_btn_home_main_main_default;
	if (style_ride2_btn_home_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_btn_home_main_main_default);
	else
		lv_style_init(&style_ride2_btn_home_main_main_default);
	lv_style_set_radius(&style_ride2_btn_home_main_main_default, 5);
	lv_style_set_bg_color(&style_ride2_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride2_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_ride2_btn_home_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_ride2_btn_home_main_main_default, 255);
	lv_style_set_shadow_color(&style_ride2_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_ride2_btn_home_main_main_default, 0);
	lv_style_set_border_color(&style_ride2_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_ride2_btn_home_main_main_default, 0);
	lv_style_set_border_opa(&style_ride2_btn_home_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_btn_Home, &style_ride2_btn_home_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Ride2_btn_Home_label = lv_label_create(ui->Ride2_btn_Home);
	lv_label_set_text(ui->Ride2_btn_Home_label, "^");
	lv_obj_set_style_text_color(ui->Ride2_btn_Home_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ride2_btn_Home_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Ride2_btn_Home, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Ride2_btn_Home_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Ride2_btn_Next
	ui->Ride2_btn_Next = lv_btn_create(ui->Ride2);
	lv_obj_set_pos(ui->Ride2_btn_Next, 272, 299);
	lv_obj_set_size(ui->Ride2_btn_Next, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_ride2_btn_next_main_main_default
	static lv_style_t style_ride2_btn_next_main_main_default;
	if (style_ride2_btn_next_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride2_btn_next_main_main_default);
	else
		lv_style_init(&style_ride2_btn_next_main_main_default);
	lv_style_set_radius(&style_ride2_btn_next_main_main_default, 5);
	lv_style_set_bg_color(&style_ride2_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride2_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_ride2_btn_next_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_ride2_btn_next_main_main_default, 255);
	lv_style_set_shadow_color(&style_ride2_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_ride2_btn_next_main_main_default, 0);
	lv_style_set_border_color(&style_ride2_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_ride2_btn_next_main_main_default, 0);
	lv_style_set_border_opa(&style_ride2_btn_next_main_main_default, 255);
	lv_obj_add_style(ui->Ride2_btn_Next, &style_ride2_btn_next_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Ride2_btn_Next_label = lv_label_create(ui->Ride2_btn_Next);
	lv_label_set_text(ui->Ride2_btn_Next_label, ">");
	lv_obj_set_style_text_color(ui->Ride2_btn_Next_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ride2_btn_Next_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Ride2_btn_Next, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Ride2_btn_Next_label, LV_ALIGN_CENTER, 0, 0);

	//Init events for screen
	events_init_Ride2(ui);
}