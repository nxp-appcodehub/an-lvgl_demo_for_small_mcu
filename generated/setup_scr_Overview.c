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

lv_meter_indicator_t* Overview_meter_Speed_scale_1_ndline_0;

void setup_scr_Overview(lv_ui *ui){

	//Write codes Overview
	ui->Overview = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_overview_main_main_default
	static lv_style_t style_overview_main_main_default;
	if (style_overview_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_main_main_default);
	else
		lv_style_init(&style_overview_main_main_default);
	lv_style_set_bg_color(&style_overview_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_overview_main_main_default, 0);
	lv_obj_add_style(ui->Overview, &style_overview_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_container_Background
	ui->Overview_container_Background = lv_obj_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_container_Background, 0, 0);
	lv_obj_set_size(ui->Overview_container_Background, 480, 320);

	//Write style state: LV_STATE_DEFAULT for style_overview_container_background_main_main_default
	static lv_style_t style_overview_container_background_main_main_default;
	if (style_overview_container_background_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_container_background_main_main_default);
	else
		lv_style_init(&style_overview_container_background_main_main_default);
	lv_style_set_radius(&style_overview_container_background_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_container_background_main_main_default, lv_color_make(0x16, 0x1d, 0x27));
	lv_style_set_bg_grad_color(&style_overview_container_background_main_main_default, lv_color_make(0x16, 0x1d, 0x27));
	lv_style_set_bg_grad_dir(&style_overview_container_background_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_container_background_main_main_default, 255);
	lv_style_set_border_color(&style_overview_container_background_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_overview_container_background_main_main_default, 0);
	lv_style_set_border_opa(&style_overview_container_background_main_main_default, 255);
	lv_style_set_pad_left(&style_overview_container_background_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_container_background_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_container_background_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_container_background_main_main_default, 0);
	lv_obj_add_style(ui->Overview_container_Background, &style_overview_container_background_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_image_Header
	ui->Overview_image_Header = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_Header, 0, 0);
	lv_obj_set_size(ui->Overview_image_Header, 480, 51);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_header_main_main_default
	static lv_style_t style_overview_image_header_main_main_default;
	if (style_overview_image_header_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_header_main_main_default);
	else
		lv_style_init(&style_overview_image_header_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_header_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_header_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_header_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_Header, &style_overview_image_header_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_Header, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_Header,"F:/ebike_header_bg.bin");
	lv_img_set_pivot(ui->Overview_image_Header, 0,0);
	lv_img_set_angle(ui->Overview_image_Header, 0);

	//Write codes Overview_label_Date
	ui->Overview_label_Date = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Date, 20, 1);
	lv_obj_set_size(ui->Overview_label_Date, 102, 19);
	lv_label_set_text(ui->Overview_label_Date, "May 5,2022");
	lv_label_set_long_mode(ui->Overview_label_Date, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Date, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_date_main_main_default
	static lv_style_t style_overview_label_date_main_main_default;
	if (style_overview_label_date_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_date_main_main_default);
	else
		lv_style_init(&style_overview_label_date_main_main_default);
	lv_style_set_radius(&style_overview_label_date_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_date_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_date_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_date_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_date_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_date_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_label_date_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_date_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_date_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_date_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_date_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_date_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Date, &style_overview_label_date_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Title
	ui->Overview_label_Title = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Title, 180, 5);
	lv_obj_set_size(ui->Overview_label_Title, 120, 23);
	lv_label_set_text(ui->Overview_label_Title, "OVERVIEW");
	lv_label_set_long_mode(ui->Overview_label_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Title, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_title_main_main_default
	static lv_style_t style_overview_label_title_main_main_default;
	if (style_overview_label_title_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_title_main_main_default);
	else
		lv_style_init(&style_overview_label_title_main_main_default);
	lv_style_set_radius(&style_overview_label_title_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_title_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_title_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_title_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_label_title_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_title_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_title_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_title_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_title_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_title_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Title, &style_overview_label_title_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Time
	ui->Overview_label_Time = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Time, 360, 1);
	lv_obj_set_size(ui->Overview_label_Time, 100, 16);
	lv_label_set_text(ui->Overview_label_Time, "10:28 AM");
	lv_label_set_long_mode(ui->Overview_label_Time, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Time, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_time_main_main_default
	static lv_style_t style_overview_label_time_main_main_default;
	if (style_overview_label_time_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_time_main_main_default);
	else
		lv_style_init(&style_overview_label_time_main_main_default);
	lv_style_set_radius(&style_overview_label_time_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_time_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_time_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_time_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_label_time_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_time_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_time_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_time_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_time_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_time_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Time, &style_overview_label_time_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_image_GPS_icon
	ui->Overview_image_GPS_icon = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_GPS_icon, 274, 60);
	lv_obj_set_size(ui->Overview_image_GPS_icon, 28, 48);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_gps_icon_main_main_default
	static lv_style_t style_overview_image_gps_icon_main_main_default;
	if (style_overview_image_gps_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_gps_icon_main_main_default);
	else
		lv_style_init(&style_overview_image_gps_icon_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_gps_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_gps_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_gps_icon_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_GPS_icon, &style_overview_image_gps_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_GPS_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_GPS_icon,"F:/ebike_gps_arrow.bin");
	lv_img_set_pivot(ui->Overview_image_GPS_icon, 0,0);
	lv_img_set_angle(ui->Overview_image_GPS_icon, 0);

	//Write codes Overview_image_Travelled_icon
	ui->Overview_image_Travelled_icon = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_Travelled_icon, 225, 130);
	lv_obj_set_size(ui->Overview_image_Travelled_icon, 21, 14);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_travelled_icon_main_main_default
	static lv_style_t style_overview_image_travelled_icon_main_main_default;
	if (style_overview_image_travelled_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_travelled_icon_main_main_default);
	else
		lv_style_init(&style_overview_image_travelled_icon_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_travelled_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_travelled_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_travelled_icon_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_Travelled_icon, &style_overview_image_travelled_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_Travelled_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_Travelled_icon,"F:/ebike_icn_distance_travelled.bin");
	lv_img_set_pivot(ui->Overview_image_Travelled_icon, 0,0);
	lv_img_set_angle(ui->Overview_image_Travelled_icon, 0);

	//Write codes Overview_image_Speed_icon
	ui->Overview_image_Speed_icon = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_Speed_icon, 352, 130);
	lv_obj_set_size(ui->Overview_image_Speed_icon, 23, 17);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_speed_icon_main_main_default
	static lv_style_t style_overview_image_speed_icon_main_main_default;
	if (style_overview_image_speed_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_speed_icon_main_main_default);
	else
		lv_style_init(&style_overview_image_speed_icon_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_speed_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_speed_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_speed_icon_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_Speed_icon, &style_overview_image_speed_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_Speed_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_Speed_icon,"F:/ebike_icn_average_speed.bin");
	lv_img_set_pivot(ui->Overview_image_Speed_icon, 0,0);
	lv_img_set_angle(ui->Overview_image_Speed_icon, 0);

	//Write codes Overview_image_Remain_icon
	ui->Overview_image_Remain_icon = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_Remain_icon, 225, 193);
	lv_obj_set_size(ui->Overview_image_Remain_icon, 20, 20);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_remain_icon_main_main_default
	static lv_style_t style_overview_image_remain_icon_main_main_default;
	if (style_overview_image_remain_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_remain_icon_main_main_default);
	else
		lv_style_init(&style_overview_image_remain_icon_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_remain_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_remain_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_remain_icon_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_Remain_icon, &style_overview_image_remain_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_Remain_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_Remain_icon,"F:/ebike_icn_remaining_distance.bin");
	lv_img_set_pivot(ui->Overview_image_Remain_icon, 0,0);
	lv_img_set_angle(ui->Overview_image_Remain_icon, 0);

	//Write codes Overview_image_Elapsed_icon
	ui->Overview_image_Elapsed_icon = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_Elapsed_icon, 352, 193);
	lv_obj_set_size(ui->Overview_image_Elapsed_icon, 20, 25);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_elapsed_icon_main_main_default
	static lv_style_t style_overview_image_elapsed_icon_main_main_default;
	if (style_overview_image_elapsed_icon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_elapsed_icon_main_main_default);
	else
		lv_style_init(&style_overview_image_elapsed_icon_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_elapsed_icon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_elapsed_icon_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_elapsed_icon_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_Elapsed_icon, &style_overview_image_elapsed_icon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_Elapsed_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_Elapsed_icon,"F:/ebike_icn_elapsed_time.bin");
	lv_img_set_pivot(ui->Overview_image_Elapsed_icon, 0,0);
	lv_img_set_angle(ui->Overview_image_Elapsed_icon, 0);

	//Write codes Overview_label_Distance
	ui->Overview_label_Distance = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Distance, 320, 49);
	lv_obj_set_size(ui->Overview_label_Distance, 98, 20);
	lv_label_set_text(ui->Overview_label_Distance, "3.1 KM");
	lv_label_set_long_mode(ui->Overview_label_Distance, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Distance, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_distance_main_main_default
	static lv_style_t style_overview_label_distance_main_main_default;
	if (style_overview_label_distance_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_distance_main_main_default);
	else
		lv_style_init(&style_overview_label_distance_main_main_default);
	lv_style_set_radius(&style_overview_label_distance_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_distance_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_distance_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_distance_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_distance_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_distance_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_label_distance_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_distance_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_distance_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_distance_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_distance_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_distance_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Distance, &style_overview_label_distance_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Direction
	ui->Overview_label_Direction = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Direction, 320, 74);
	lv_obj_set_size(ui->Overview_label_Direction, 147, 18);
	lv_label_set_text(ui->Overview_label_Direction, "Turn right to");
	lv_label_set_long_mode(ui->Overview_label_Direction, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Direction, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_direction_main_main_default
	static lv_style_t style_overview_label_direction_main_main_default;
	if (style_overview_label_direction_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_direction_main_main_default);
	else
		lv_style_init(&style_overview_label_direction_main_main_default);
	lv_style_set_radius(&style_overview_label_direction_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_direction_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_direction_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_direction_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_direction_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_direction_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_direction_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_direction_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_direction_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_direction_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_direction_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_direction_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Direction, &style_overview_label_direction_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Street
	ui->Overview_label_Street = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Street, 320, 97);
	lv_obj_set_size(ui->Overview_label_Street, 147, 17);
	lv_label_set_text(ui->Overview_label_Street, "Ed Bluestein Blvd");
	lv_label_set_long_mode(ui->Overview_label_Street, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Street, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_street_main_main_default
	static lv_style_t style_overview_label_street_main_main_default;
	if (style_overview_label_street_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_street_main_main_default);
	else
		lv_style_init(&style_overview_label_street_main_main_default);
	lv_style_set_radius(&style_overview_label_street_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_street_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_street_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_street_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_street_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_street_main_main_default, lv_color_make(0xcc, 0xcc, 0xcc));
	lv_style_set_text_font(&style_overview_label_street_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_street_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_street_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_street_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_street_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_street_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Street, &style_overview_label_street_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Travelled_1
	ui->Overview_label_Travelled_1 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Travelled_1, 255, 118);
	lv_obj_set_size(ui->Overview_label_Travelled_1, 82, 36);
	lv_label_set_text(ui->Overview_label_Travelled_1, "Distance Travelled");
	lv_label_set_long_mode(ui->Overview_label_Travelled_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Travelled_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_travelled_1_main_main_default
	static lv_style_t style_overview_label_travelled_1_main_main_default;
	if (style_overview_label_travelled_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_travelled_1_main_main_default);
	else
		lv_style_init(&style_overview_label_travelled_1_main_main_default);
	lv_style_set_radius(&style_overview_label_travelled_1_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_travelled_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_travelled_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_travelled_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_travelled_1_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_travelled_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_travelled_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_travelled_1_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_travelled_1_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_travelled_1_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_travelled_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_travelled_1_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Travelled_1, &style_overview_label_travelled_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Travelled_2
	ui->Overview_label_Travelled_2 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Travelled_2, 225, 157);
	lv_obj_set_size(ui->Overview_label_Travelled_2, 70, 25);
	lv_label_set_text(ui->Overview_label_Travelled_2, "12.7");
	lv_label_set_long_mode(ui->Overview_label_Travelled_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Travelled_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_travelled_2_main_main_default
	static lv_style_t style_overview_label_travelled_2_main_main_default;
	if (style_overview_label_travelled_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_travelled_2_main_main_default);
	else
		lv_style_init(&style_overview_label_travelled_2_main_main_default);
	lv_style_set_radius(&style_overview_label_travelled_2_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_travelled_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_travelled_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_travelled_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_travelled_2_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_travelled_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_overview_label_travelled_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_travelled_2_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_travelled_2_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_travelled_2_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_travelled_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_travelled_2_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Travelled_2, &style_overview_label_travelled_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Travelled_3
	ui->Overview_label_Travelled_3 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Travelled_3, 304, 160);
	lv_obj_set_size(ui->Overview_label_Travelled_3, 40, 20);
	lv_label_set_text(ui->Overview_label_Travelled_3, "km");
	lv_label_set_long_mode(ui->Overview_label_Travelled_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Travelled_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_travelled_3_main_main_default
	static lv_style_t style_overview_label_travelled_3_main_main_default;
	if (style_overview_label_travelled_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_travelled_3_main_main_default);
	else
		lv_style_init(&style_overview_label_travelled_3_main_main_default);
	lv_style_set_radius(&style_overview_label_travelled_3_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_travelled_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_travelled_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_travelled_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_travelled_3_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_travelled_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_travelled_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_travelled_3_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_travelled_3_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_travelled_3_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_travelled_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_travelled_3_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Travelled_3, &style_overview_label_travelled_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Speed_1
	ui->Overview_label_Speed_1 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Speed_1, 382, 118);
	lv_obj_set_size(ui->Overview_label_Speed_1, 82, 37);
	lv_label_set_text(ui->Overview_label_Speed_1, "Average Speed");
	lv_label_set_long_mode(ui->Overview_label_Speed_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Speed_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_speed_1_main_main_default
	static lv_style_t style_overview_label_speed_1_main_main_default;
	if (style_overview_label_speed_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_speed_1_main_main_default);
	else
		lv_style_init(&style_overview_label_speed_1_main_main_default);
	lv_style_set_radius(&style_overview_label_speed_1_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_speed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_speed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_speed_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_speed_1_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_speed_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_speed_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_speed_1_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_speed_1_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_speed_1_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_speed_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_speed_1_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Speed_1, &style_overview_label_speed_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Speed_2
	ui->Overview_label_Speed_2 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Speed_2, 352, 157);
	lv_obj_set_size(ui->Overview_label_Speed_2, 70, 25);
	lv_label_set_text(ui->Overview_label_Speed_2, "16.1");
	lv_label_set_long_mode(ui->Overview_label_Speed_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Speed_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_speed_2_main_main_default
	static lv_style_t style_overview_label_speed_2_main_main_default;
	if (style_overview_label_speed_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_speed_2_main_main_default);
	else
		lv_style_init(&style_overview_label_speed_2_main_main_default);
	lv_style_set_radius(&style_overview_label_speed_2_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_speed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_speed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_speed_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_speed_2_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_speed_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_overview_label_speed_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_speed_2_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_speed_2_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_speed_2_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_speed_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_speed_2_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Speed_2, &style_overview_label_speed_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Speed_3
	ui->Overview_label_Speed_3 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Speed_3, 430, 160);
	lv_obj_set_size(ui->Overview_label_Speed_3, 50, 17);
	lv_label_set_text(ui->Overview_label_Speed_3, "km/h");
	lv_label_set_long_mode(ui->Overview_label_Speed_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Speed_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_speed_3_main_main_default
	static lv_style_t style_overview_label_speed_3_main_main_default;
	if (style_overview_label_speed_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_speed_3_main_main_default);
	else
		lv_style_init(&style_overview_label_speed_3_main_main_default);
	lv_style_set_radius(&style_overview_label_speed_3_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_speed_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_speed_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_speed_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_speed_3_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_speed_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_speed_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_speed_3_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_speed_3_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_speed_3_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_speed_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_speed_3_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Speed_3, &style_overview_label_speed_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Remain_1
	ui->Overview_label_Remain_1 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Remain_1, 255, 190);
	lv_obj_set_size(ui->Overview_label_Remain_1, 82, 36);
	lv_label_set_text(ui->Overview_label_Remain_1, "Remain Distance");
	lv_label_set_long_mode(ui->Overview_label_Remain_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Remain_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_remain_1_main_main_default
	static lv_style_t style_overview_label_remain_1_main_main_default;
	if (style_overview_label_remain_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_remain_1_main_main_default);
	else
		lv_style_init(&style_overview_label_remain_1_main_main_default);
	lv_style_set_radius(&style_overview_label_remain_1_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_remain_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_remain_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_remain_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_remain_1_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_remain_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_remain_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_remain_1_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_remain_1_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_remain_1_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_remain_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_remain_1_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Remain_1, &style_overview_label_remain_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Remain_2
	ui->Overview_label_Remain_2 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Remain_2, 225, 229);
	lv_obj_set_size(ui->Overview_label_Remain_2, 70, 25);
	lv_label_set_text(ui->Overview_label_Remain_2, "18.3");
	lv_label_set_long_mode(ui->Overview_label_Remain_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Remain_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_remain_2_main_main_default
	static lv_style_t style_overview_label_remain_2_main_main_default;
	if (style_overview_label_remain_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_remain_2_main_main_default);
	else
		lv_style_init(&style_overview_label_remain_2_main_main_default);
	lv_style_set_radius(&style_overview_label_remain_2_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_remain_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_remain_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_remain_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_remain_2_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_remain_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_overview_label_remain_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_remain_2_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_remain_2_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_remain_2_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_remain_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_remain_2_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Remain_2, &style_overview_label_remain_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Remain_3
	ui->Overview_label_Remain_3 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Remain_3, 304, 232);
	lv_obj_set_size(ui->Overview_label_Remain_3, 40, 20);
	lv_label_set_text(ui->Overview_label_Remain_3, "km");
	lv_label_set_long_mode(ui->Overview_label_Remain_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Remain_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_remain_3_main_main_default
	static lv_style_t style_overview_label_remain_3_main_main_default;
	if (style_overview_label_remain_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_remain_3_main_main_default);
	else
		lv_style_init(&style_overview_label_remain_3_main_main_default);
	lv_style_set_radius(&style_overview_label_remain_3_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_remain_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_remain_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_remain_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_remain_3_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_remain_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_remain_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_remain_3_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_remain_3_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_remain_3_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_remain_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_remain_3_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Remain_3, &style_overview_label_remain_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Elapsed_1
	ui->Overview_label_Elapsed_1 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Elapsed_1, 382, 190);
	lv_obj_set_size(ui->Overview_label_Elapsed_1, 82, 36);
	lv_label_set_text(ui->Overview_label_Elapsed_1, "Elapsed Time");
	lv_label_set_long_mode(ui->Overview_label_Elapsed_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Elapsed_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_elapsed_1_main_main_default
	static lv_style_t style_overview_label_elapsed_1_main_main_default;
	if (style_overview_label_elapsed_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_elapsed_1_main_main_default);
	else
		lv_style_init(&style_overview_label_elapsed_1_main_main_default);
	lv_style_set_radius(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_elapsed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_elapsed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_elapsed_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_elapsed_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_overview_label_elapsed_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_elapsed_1_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Elapsed_1, &style_overview_label_elapsed_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Elapsed_2
	ui->Overview_label_Elapsed_2 = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Elapsed_2, 352, 229);
	lv_obj_set_size(ui->Overview_label_Elapsed_2, 85, 25);
	lv_label_set_text(ui->Overview_label_Elapsed_2, "46:28");
	lv_label_set_long_mode(ui->Overview_label_Elapsed_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Elapsed_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_elapsed_2_main_main_default
	static lv_style_t style_overview_label_elapsed_2_main_main_default;
	if (style_overview_label_elapsed_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_elapsed_2_main_main_default);
	else
		lv_style_init(&style_overview_label_elapsed_2_main_main_default);
	lv_style_set_radius(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_elapsed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_elapsed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_elapsed_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_elapsed_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_overview_label_elapsed_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_left(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_elapsed_2_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Elapsed_2, &style_overview_label_elapsed_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Meter_speed
	ui->Overview_label_Meter_speed = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Meter_speed, 86, 184);
	lv_obj_set_size(ui->Overview_label_Meter_speed, 46, 20);
	lv_label_set_text(ui->Overview_label_Meter_speed, "0");
	lv_label_set_long_mode(ui->Overview_label_Meter_speed, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Meter_speed, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_meter_speed_main_main_default
	static lv_style_t style_overview_label_meter_speed_main_main_default;
	if (style_overview_label_meter_speed_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_meter_speed_main_main_default);
	else
		lv_style_init(&style_overview_label_meter_speed_main_main_default);
	lv_style_set_radius(&style_overview_label_meter_speed_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_meter_speed_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_meter_speed_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_meter_speed_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_meter_speed_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_meter_speed_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_label_meter_speed_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_meter_speed_main_main_default, 2);
	lv_style_set_pad_left(&style_overview_label_meter_speed_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_meter_speed_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_meter_speed_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_meter_speed_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Meter_speed, &style_overview_label_meter_speed_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_label_Meter_speed_unit
	ui->Overview_label_Meter_speed_unit = lv_label_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_label_Meter_speed_unit, 72, 212);
	lv_obj_set_size(ui->Overview_label_Meter_speed_unit, 75, 24);
	lv_label_set_text(ui->Overview_label_Meter_speed_unit, "km/h");
	lv_label_set_long_mode(ui->Overview_label_Meter_speed_unit, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Overview_label_Meter_speed_unit, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_overview_label_meter_speed_unit_main_main_default
	static lv_style_t style_overview_label_meter_speed_unit_main_main_default;
	if (style_overview_label_meter_speed_unit_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_label_meter_speed_unit_main_main_default);
	else
		lv_style_init(&style_overview_label_meter_speed_unit_main_main_default);
	lv_style_set_radius(&style_overview_label_meter_speed_unit_main_main_default, 0);
	lv_style_set_bg_color(&style_overview_label_meter_speed_unit_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_overview_label_meter_speed_unit_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_overview_label_meter_speed_unit_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_label_meter_speed_unit_main_main_default, 0);
	lv_style_set_text_color(&style_overview_label_meter_speed_unit_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_label_meter_speed_unit_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_overview_label_meter_speed_unit_main_main_default, 2);
	lv_style_set_pad_left(&style_overview_label_meter_speed_unit_main_main_default, 0);
	lv_style_set_pad_right(&style_overview_label_meter_speed_unit_main_main_default, 0);
	lv_style_set_pad_top(&style_overview_label_meter_speed_unit_main_main_default, 0);
	lv_style_set_pad_bottom(&style_overview_label_meter_speed_unit_main_main_default, 0);
	lv_obj_add_style(ui->Overview_label_Meter_speed_unit, &style_overview_label_meter_speed_unit_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Overview_image_Footer
	ui->Overview_image_Footer = lv_img_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_image_Footer, 0, 279);
	lv_obj_set_size(ui->Overview_image_Footer, 480, 35);

	//Write style state: LV_STATE_DEFAULT for style_overview_image_footer_main_main_default
	static lv_style_t style_overview_image_footer_main_main_default;
	if (style_overview_image_footer_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_image_footer_main_main_default);
	else
		lv_style_init(&style_overview_image_footer_main_main_default);
	lv_style_set_img_recolor(&style_overview_image_footer_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_overview_image_footer_main_main_default, 0);
	lv_style_set_img_opa(&style_overview_image_footer_main_main_default, 255);
	lv_obj_add_style(ui->Overview_image_Footer, &style_overview_image_footer_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Overview_image_Footer, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Overview_image_Footer,"F:/ebike_footer_bg.bin");
	lv_img_set_pivot(ui->Overview_image_Footer, 0,0);
	lv_img_set_angle(ui->Overview_image_Footer, 0);

	//Write codes Overview_line_H_Seperator
	ui->Overview_line_H_Seperator = lv_line_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_line_H_Seperator, 225, 180);
	lv_obj_set_size(ui->Overview_line_H_Seperator, 240, 9);

	//Write style state: LV_STATE_DEFAULT for style_overview_line_h_seperator_main_main_default
	static lv_style_t style_overview_line_h_seperator_main_main_default;
	if (style_overview_line_h_seperator_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_line_h_seperator_main_main_default);
	else
		lv_style_init(&style_overview_line_h_seperator_main_main_default);
	lv_style_set_line_color(&style_overview_line_h_seperator_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_overview_line_h_seperator_main_main_default, 3);
	lv_style_set_line_rounded(&style_overview_line_h_seperator_main_main_default, true);
	lv_obj_add_style(ui->Overview_line_H_Seperator, &style_overview_line_h_seperator_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Overview_line_H_Seperator[] ={{0, 0},{240, 0},};
	lv_line_set_points(ui->Overview_line_H_Seperator,Overview_line_H_Seperator,2);

	//Write codes Overview_line_V_Seperator
	ui->Overview_line_V_Seperator = lv_line_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_line_V_Seperator, 340, 119);
	lv_obj_set_size(ui->Overview_line_V_Seperator, 5, 138);

	//Write style state: LV_STATE_DEFAULT for style_overview_line_v_seperator_main_main_default
	static lv_style_t style_overview_line_v_seperator_main_main_default;
	if (style_overview_line_v_seperator_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_line_v_seperator_main_main_default);
	else
		lv_style_init(&style_overview_line_v_seperator_main_main_default);
	lv_style_set_line_color(&style_overview_line_v_seperator_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_overview_line_v_seperator_main_main_default, 3);
	lv_style_set_line_rounded(&style_overview_line_v_seperator_main_main_default, true);
	lv_obj_add_style(ui->Overview_line_V_Seperator, &style_overview_line_v_seperator_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Overview_line_V_Seperator[] ={{0, 0},{0, 240},};
	lv_line_set_points(ui->Overview_line_V_Seperator,Overview_line_V_Seperator,2);

	//Write codes Overview_btn_Previous
	ui->Overview_btn_Previous = lv_btn_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_btn_Previous, 178, 299);
	lv_obj_set_size(ui->Overview_btn_Previous, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_overview_btn_previous_main_main_default
	static lv_style_t style_overview_btn_previous_main_main_default;
	if (style_overview_btn_previous_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_btn_previous_main_main_default);
	else
		lv_style_init(&style_overview_btn_previous_main_main_default);
	lv_style_set_radius(&style_overview_btn_previous_main_main_default, 5);
	lv_style_set_bg_color(&style_overview_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_overview_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_overview_btn_previous_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_overview_btn_previous_main_main_default, 255);
	lv_style_set_shadow_color(&style_overview_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_overview_btn_previous_main_main_default, 0);
	lv_style_set_border_color(&style_overview_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_overview_btn_previous_main_main_default, 0);
	lv_style_set_border_opa(&style_overview_btn_previous_main_main_default, 255);
	lv_obj_add_style(ui->Overview_btn_Previous, &style_overview_btn_previous_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Overview_btn_Previous_label = lv_label_create(ui->Overview_btn_Previous);
	lv_label_set_text(ui->Overview_btn_Previous_label, "<");
	lv_obj_set_style_text_color(ui->Overview_btn_Previous_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Overview_btn_Previous_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Overview_btn_Previous, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Overview_btn_Previous_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Overview_btn_Home
	ui->Overview_btn_Home = lv_btn_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_btn_Home, 225, 299);
	lv_obj_set_size(ui->Overview_btn_Home, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_overview_btn_home_main_main_default
	static lv_style_t style_overview_btn_home_main_main_default;
	if (style_overview_btn_home_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_btn_home_main_main_default);
	else
		lv_style_init(&style_overview_btn_home_main_main_default);
	lv_style_set_radius(&style_overview_btn_home_main_main_default, 5);
	lv_style_set_bg_color(&style_overview_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_overview_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_overview_btn_home_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_overview_btn_home_main_main_default, 255);
	lv_style_set_shadow_color(&style_overview_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_overview_btn_home_main_main_default, 0);
	lv_style_set_border_color(&style_overview_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_overview_btn_home_main_main_default, 0);
	lv_style_set_border_opa(&style_overview_btn_home_main_main_default, 255);
	lv_obj_add_style(ui->Overview_btn_Home, &style_overview_btn_home_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Overview_btn_Home_label = lv_label_create(ui->Overview_btn_Home);
	lv_label_set_text(ui->Overview_btn_Home_label, "^");
	lv_obj_set_style_text_color(ui->Overview_btn_Home_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Overview_btn_Home_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Overview_btn_Home, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Overview_btn_Home_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Overview_btn_Next
	ui->Overview_btn_Next = lv_btn_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_btn_Next, 272, 299);
	lv_obj_set_size(ui->Overview_btn_Next, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_overview_btn_next_main_main_default
	static lv_style_t style_overview_btn_next_main_main_default;
	if (style_overview_btn_next_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_btn_next_main_main_default);
	else
		lv_style_init(&style_overview_btn_next_main_main_default);
	lv_style_set_radius(&style_overview_btn_next_main_main_default, 5);
	lv_style_set_bg_color(&style_overview_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_overview_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_overview_btn_next_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_overview_btn_next_main_main_default, 255);
	lv_style_set_shadow_color(&style_overview_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_overview_btn_next_main_main_default, 0);
	lv_style_set_border_color(&style_overview_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_overview_btn_next_main_main_default, 0);
	lv_style_set_border_opa(&style_overview_btn_next_main_main_default, 255);
	lv_obj_add_style(ui->Overview_btn_Next, &style_overview_btn_next_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Overview_btn_Next_label = lv_label_create(ui->Overview_btn_Next);
	lv_label_set_text(ui->Overview_btn_Next_label, ">");
	lv_obj_set_style_text_color(ui->Overview_btn_Next_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Overview_btn_Next_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Overview_btn_Next, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Overview_btn_Next_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Overview_meter_Speed
	ui->Overview_meter_Speed = lv_meter_create(ui->Overview);
	lv_obj_set_pos(ui->Overview_meter_Speed, 8, 50);
	lv_obj_set_size(ui->Overview_meter_Speed, 202, 202);

	//add scale Overview_meter_Speed_scale_1
	lv_meter_scale_t *Overview_meter_Speed_scale_1 = lv_meter_add_scale(ui->Overview_meter_Speed);
	lv_meter_set_scale_ticks(ui->Overview_meter_Speed, Overview_meter_Speed_scale_1, 41, 2, 8, lv_color_make(0xff, 0xff, 0xff));
	lv_meter_set_scale_major_ticks(ui->Overview_meter_Speed, Overview_meter_Speed_scale_1, 5, 5, 12, lv_color_make(0xf7, 0xef, 0x18), 10);
	lv_meter_set_scale_range(ui->Overview_meter_Speed, Overview_meter_Speed_scale_1, 0, 40, 240, 150);

	//add needle line for Overview_meter_Speed_scale_1
	Overview_meter_Speed_scale_1_ndline_0 = lv_meter_add_needle_line(ui->Overview_meter_Speed, Overview_meter_Speed_scale_1, 3, lv_color_make(0xff, 0x00, 0x00), -21);
	lv_meter_set_indicator_value(ui->Overview_meter_Speed, Overview_meter_Speed_scale_1_ndline_0, 24);

	//Write style state: LV_STATE_DEFAULT for style_overview_meter_speed_main_main_default
	static lv_style_t style_overview_meter_speed_main_main_default;
	if (style_overview_meter_speed_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_overview_meter_speed_main_main_default);
	else
		lv_style_init(&style_overview_meter_speed_main_main_default);
	lv_style_set_bg_color(&style_overview_meter_speed_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_overview_meter_speed_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_overview_meter_speed_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_overview_meter_speed_main_main_default, 0);
	lv_obj_add_style(ui->Overview_meter_Speed, &style_overview_meter_speed_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_overview_meter_speed_main_ticks_default
	static lv_style_t style_overview_meter_speed_main_ticks_default;
	if (style_overview_meter_speed_main_ticks_default.prop_cnt > 1)
		lv_style_reset(&style_overview_meter_speed_main_ticks_default);
	else
		lv_style_init(&style_overview_meter_speed_main_ticks_default);
	lv_style_set_text_color(&style_overview_meter_speed_main_ticks_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_overview_meter_speed_main_ticks_default, &lv_font_montserratMedium_16);
	lv_obj_add_style(ui->Overview_meter_Speed, &style_overview_meter_speed_main_ticks_default, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_Overview(ui);
}