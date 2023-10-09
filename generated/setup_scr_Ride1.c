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

lv_chart_series_t *pchart_ser;

void setup_scr_Ride1(lv_ui *ui){

	//Write codes Ride1
	ui->Ride1 = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_ride1_main_main_default
	static lv_style_t style_ride1_main_main_default;
	if (style_ride1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_main_main_default);
	else
		lv_style_init(&style_ride1_main_main_default);
	lv_style_set_bg_color(&style_ride1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_ride1_main_main_default, 0);
	lv_obj_add_style(ui->Ride1, &style_ride1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_container_Background
	ui->Ride1_container_Background = lv_obj_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_container_Background, 0, 0);
	lv_obj_set_size(ui->Ride1_container_Background, 480, 320);

	//Write style state: LV_STATE_DEFAULT for style_ride1_container_background_main_main_default
	static lv_style_t style_ride1_container_background_main_main_default;
	if (style_ride1_container_background_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_container_background_main_main_default);
	else
		lv_style_init(&style_ride1_container_background_main_main_default);
	lv_style_set_radius(&style_ride1_container_background_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_container_background_main_main_default, lv_color_make(0x16, 0x1d, 0x27));
	lv_style_set_bg_grad_color(&style_ride1_container_background_main_main_default, lv_color_make(0x16, 0x1d, 0x27));
	lv_style_set_bg_grad_dir(&style_ride1_container_background_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_container_background_main_main_default, 255);
	lv_style_set_border_color(&style_ride1_container_background_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_ride1_container_background_main_main_default, 0);
	lv_style_set_border_opa(&style_ride1_container_background_main_main_default, 255);
	lv_style_set_pad_left(&style_ride1_container_background_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_container_background_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_container_background_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_container_background_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_container_Background, &style_ride1_container_background_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_image_Header
	ui->Ride1_image_Header = lv_img_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_image_Header, 0, 0);
	lv_obj_set_size(ui->Ride1_image_Header, 480, 51);

	//Write style state: LV_STATE_DEFAULT for style_ride1_image_header_main_main_default
	static lv_style_t style_ride1_image_header_main_main_default;
	if (style_ride1_image_header_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_image_header_main_main_default);
	else
		lv_style_init(&style_ride1_image_header_main_main_default);
	lv_style_set_img_recolor(&style_ride1_image_header_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride1_image_header_main_main_default, 0);
	lv_style_set_img_opa(&style_ride1_image_header_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_image_Header, &style_ride1_image_header_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride1_image_Header, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride1_image_Header,"F:/ebike_header_bg.bin");
	lv_img_set_pivot(ui->Ride1_image_Header, 0,0);
	lv_img_set_angle(ui->Ride1_image_Header, 0);

	//Write codes Ride1_label_Date
	ui->Ride1_label_Date = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Date, 20, 1);
	lv_obj_set_size(ui->Ride1_label_Date, 102, 19);
	lv_label_set_text(ui->Ride1_label_Date, "May 5,2022");
	lv_label_set_long_mode(ui->Ride1_label_Date, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Date, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_date_main_main_default
	static lv_style_t style_ride1_label_date_main_main_default;
	if (style_ride1_label_date_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_date_main_main_default);
	else
		lv_style_init(&style_ride1_label_date_main_main_default);
	lv_style_set_radius(&style_ride1_label_date_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_date_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_date_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_date_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_date_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_date_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride1_label_date_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_date_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_date_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_date_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_date_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_date_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Date, &style_ride1_label_date_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Title
	ui->Ride1_label_Title = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Title, 156, 7);
	lv_obj_set_size(ui->Ride1_label_Title, 165, 22);
	lv_label_set_text(ui->Ride1_label_Title, "RIDE DETAILS");
	lv_label_set_long_mode(ui->Ride1_label_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Title, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_title_main_main_default
	static lv_style_t style_ride1_label_title_main_main_default;
	if (style_ride1_label_title_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_title_main_main_default);
	else
		lv_style_init(&style_ride1_label_title_main_main_default);
	lv_style_set_radius(&style_ride1_label_title_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_title_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_title_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_title_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride1_label_title_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride1_label_title_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_title_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_title_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_title_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_title_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Title, &style_ride1_label_title_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Time
	ui->Ride1_label_Time = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Time, 360, 1);
	lv_obj_set_size(ui->Ride1_label_Time, 100, 16);
	lv_label_set_text(ui->Ride1_label_Time, "10:28 AM");
	lv_label_set_long_mode(ui->Ride1_label_Time, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Time, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_time_main_main_default
	static lv_style_t style_ride1_label_time_main_main_default;
	if (style_ride1_label_time_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_time_main_main_default);
	else
		lv_style_init(&style_ride1_label_time_main_main_default);
	lv_style_set_radius(&style_ride1_label_time_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_time_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_time_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_time_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_ride1_label_time_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_time_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_time_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_time_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_time_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_time_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Time, &style_ride1_label_time_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Distance_1
	ui->Ride1_label_Distance_1 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Distance_1, 290, 55);
	lv_obj_set_size(ui->Ride1_label_Distance_1, 166, 17);
	lv_label_set_text(ui->Ride1_label_Distance_1, "Distance Travelled");
	lv_label_set_long_mode(ui->Ride1_label_Distance_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Distance_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_distance_1_main_main_default
	static lv_style_t style_ride1_label_distance_1_main_main_default;
	if (style_ride1_label_distance_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_distance_1_main_main_default);
	else
		lv_style_init(&style_ride1_label_distance_1_main_main_default);
	lv_style_set_radius(&style_ride1_label_distance_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_distance_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_distance_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_distance_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_distance_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_distance_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_distance_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_distance_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_distance_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_distance_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_distance_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_distance_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Distance_1, &style_ride1_label_distance_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_image_Distance
	ui->Ride1_image_Distance = lv_img_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_image_Distance, 240, 80);
	lv_obj_set_size(ui->Ride1_image_Distance, 42, 28);

	//Write style state: LV_STATE_DEFAULT for style_ride1_image_distance_main_main_default
	static lv_style_t style_ride1_image_distance_main_main_default;
	if (style_ride1_image_distance_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_image_distance_main_main_default);
	else
		lv_style_init(&style_ride1_image_distance_main_main_default);
	lv_style_set_img_recolor(&style_ride1_image_distance_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride1_image_distance_main_main_default, 0);
	lv_style_set_img_opa(&style_ride1_image_distance_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_image_Distance, &style_ride1_image_distance_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride1_image_Distance, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride1_image_Distance,"F:/ebike_icn_distance_travelled_big.bin");
	lv_img_set_pivot(ui->Ride1_image_Distance, 0,0);
	lv_img_set_angle(ui->Ride1_image_Distance, 0);

	//Write codes Ride1_label_Distance_2
	ui->Ride1_label_Distance_2 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Distance_2, 290, 90);
	lv_obj_set_size(ui->Ride1_label_Distance_2, 95, 23);
	lv_label_set_text(ui->Ride1_label_Distance_2, "12.7");
	lv_label_set_long_mode(ui->Ride1_label_Distance_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Distance_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_distance_2_main_main_default
	static lv_style_t style_ride1_label_distance_2_main_main_default;
	if (style_ride1_label_distance_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_distance_2_main_main_default);
	else
		lv_style_init(&style_ride1_label_distance_2_main_main_default);
	lv_style_set_radius(&style_ride1_label_distance_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_distance_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_distance_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_distance_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_distance_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_distance_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride1_label_distance_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride1_label_distance_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_distance_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_distance_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_distance_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_distance_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Distance_2, &style_ride1_label_distance_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Distance_3
	ui->Ride1_label_Distance_3 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Distance_3, 420, 93);
	lv_obj_set_size(ui->Ride1_label_Distance_3, 31, 30);
	lv_label_set_text(ui->Ride1_label_Distance_3, "km");
	lv_label_set_long_mode(ui->Ride1_label_Distance_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Distance_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_distance_3_main_main_default
	static lv_style_t style_ride1_label_distance_3_main_main_default;
	if (style_ride1_label_distance_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_distance_3_main_main_default);
	else
		lv_style_init(&style_ride1_label_distance_3_main_main_default);
	lv_style_set_radius(&style_ride1_label_distance_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_distance_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_distance_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_distance_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_distance_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_distance_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_distance_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_distance_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_distance_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_distance_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_distance_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_distance_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Distance_3, &style_ride1_label_distance_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_line_H_Seperator_1
	ui->Ride1_line_H_Seperator_1 = lv_line_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_line_H_Seperator_1, 230, 117);
	lv_obj_set_size(ui->Ride1_line_H_Seperator_1, 230, 9);

	//Write style state: LV_STATE_DEFAULT for style_ride1_line_h_seperator_1_main_main_default
	static lv_style_t style_ride1_line_h_seperator_1_main_main_default;
	if (style_ride1_line_h_seperator_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_line_h_seperator_1_main_main_default);
	else
		lv_style_init(&style_ride1_line_h_seperator_1_main_main_default);
	lv_style_set_line_color(&style_ride1_line_h_seperator_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_ride1_line_h_seperator_1_main_main_default, 3);
	lv_style_set_line_rounded(&style_ride1_line_h_seperator_1_main_main_default, true);
	lv_obj_add_style(ui->Ride1_line_H_Seperator_1, &style_ride1_line_h_seperator_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Ride1_line_H_Seperator_1[] ={{0, 0},{230, 0},};
	lv_line_set_points(ui->Ride1_line_H_Seperator_1,Ride1_line_H_Seperator_1,2);

	//Write codes Ride1_line_H_Seperator_2
	ui->Ride1_line_H_Seperator_2 = lv_line_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_line_H_Seperator_2, 230, 187);
	lv_obj_set_size(ui->Ride1_line_H_Seperator_2, 230, 9);

	//Write style state: LV_STATE_DEFAULT for style_ride1_line_h_seperator_2_main_main_default
	static lv_style_t style_ride1_line_h_seperator_2_main_main_default;
	if (style_ride1_line_h_seperator_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_line_h_seperator_2_main_main_default);
	else
		lv_style_init(&style_ride1_line_h_seperator_2_main_main_default);
	lv_style_set_line_color(&style_ride1_line_h_seperator_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_ride1_line_h_seperator_2_main_main_default, 3);
	lv_style_set_line_rounded(&style_ride1_line_h_seperator_2_main_main_default, true);
	lv_obj_add_style(ui->Ride1_line_H_Seperator_2, &style_ride1_line_h_seperator_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Ride1_line_H_Seperator_2[] ={{0, 0},{230, 0},};
	lv_line_set_points(ui->Ride1_line_H_Seperator_2,Ride1_line_H_Seperator_2,2);

	//Write codes Ride1_line_V_Seperator
	ui->Ride1_line_V_Seperator = lv_line_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_line_V_Seperator, 350, 200);
	lv_obj_set_size(ui->Ride1_line_V_Seperator, 3, 80);

	//Write style state: LV_STATE_DEFAULT for style_ride1_line_v_seperator_main_main_default
	static lv_style_t style_ride1_line_v_seperator_main_main_default;
	if (style_ride1_line_v_seperator_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_line_v_seperator_main_main_default);
	else
		lv_style_init(&style_ride1_line_v_seperator_main_main_default);
	lv_style_set_line_color(&style_ride1_line_v_seperator_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_ride1_line_v_seperator_main_main_default, 3);
	lv_style_set_line_rounded(&style_ride1_line_v_seperator_main_main_default, true);
	lv_obj_add_style(ui->Ride1_line_V_Seperator, &style_ride1_line_v_seperator_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t Ride1_line_V_Seperator[] ={{0, 0},{0, 80},};
	lv_line_set_points(ui->Ride1_line_V_Seperator,Ride1_line_V_Seperator,2);

	//Write codes Ride1_label_Speed_1
	ui->Ride1_label_Speed_1 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Speed_1, 298, 132);
	lv_obj_set_size(ui->Ride1_label_Speed_1, 166, 23);
	lv_label_set_text(ui->Ride1_label_Speed_1, "Average Speed");
	lv_label_set_long_mode(ui->Ride1_label_Speed_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Speed_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_speed_1_main_main_default
	static lv_style_t style_ride1_label_speed_1_main_main_default;
	if (style_ride1_label_speed_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_speed_1_main_main_default);
	else
		lv_style_init(&style_ride1_label_speed_1_main_main_default);
	lv_style_set_radius(&style_ride1_label_speed_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_speed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_speed_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_speed_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_speed_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_speed_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_speed_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_speed_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_speed_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_speed_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_speed_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_speed_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Speed_1, &style_ride1_label_speed_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_image_Speed
	ui->Ride1_image_Speed = lv_img_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_image_Speed, 240, 150);
	lv_obj_set_size(ui->Ride1_image_Speed, 40, 31);

	//Write style state: LV_STATE_DEFAULT for style_ride1_image_speed_main_main_default
	static lv_style_t style_ride1_image_speed_main_main_default;
	if (style_ride1_image_speed_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_image_speed_main_main_default);
	else
		lv_style_init(&style_ride1_image_speed_main_main_default);
	lv_style_set_img_recolor(&style_ride1_image_speed_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride1_image_speed_main_main_default, 0);
	lv_style_set_img_opa(&style_ride1_image_speed_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_image_Speed, &style_ride1_image_speed_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride1_image_Speed, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride1_image_Speed,"F:/ebike_icn_average_speed_big.bin");
	lv_img_set_pivot(ui->Ride1_image_Speed, 0,0);
	lv_img_set_angle(ui->Ride1_image_Speed, 0);

	//Write codes Ride1_label_Speed_2
	ui->Ride1_label_Speed_2 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Speed_2, 290, 160);
	lv_obj_set_size(ui->Ride1_label_Speed_2, 78, 23);
	lv_label_set_text(ui->Ride1_label_Speed_2, "16.1");
	lv_label_set_long_mode(ui->Ride1_label_Speed_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Speed_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_speed_2_main_main_default
	static lv_style_t style_ride1_label_speed_2_main_main_default;
	if (style_ride1_label_speed_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_speed_2_main_main_default);
	else
		lv_style_init(&style_ride1_label_speed_2_main_main_default);
	lv_style_set_radius(&style_ride1_label_speed_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_speed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_speed_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_speed_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_speed_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_speed_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride1_label_speed_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride1_label_speed_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_speed_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_speed_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_speed_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_speed_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Speed_2, &style_ride1_label_speed_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Speed_3
	ui->Ride1_label_Speed_3 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Speed_3, 411, 163);
	lv_obj_set_size(ui->Ride1_label_Speed_3, 50, 19);
	lv_label_set_text(ui->Ride1_label_Speed_3, "km/h");
	lv_label_set_long_mode(ui->Ride1_label_Speed_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Speed_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_speed_3_main_main_default
	static lv_style_t style_ride1_label_speed_3_main_main_default;
	if (style_ride1_label_speed_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_speed_3_main_main_default);
	else
		lv_style_init(&style_ride1_label_speed_3_main_main_default);
	lv_style_set_radius(&style_ride1_label_speed_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_speed_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_speed_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_speed_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_speed_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_speed_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_speed_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_speed_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_speed_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_speed_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_speed_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_speed_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Speed_3, &style_ride1_label_speed_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Gain_1
	ui->Ride1_label_Gain_1 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Gain_1, 265, 205);
	lv_obj_set_size(ui->Ride1_label_Gain_1, 81, 36);
	lv_label_set_text(ui->Ride1_label_Gain_1, "Elevation Gained");
	lv_label_set_long_mode(ui->Ride1_label_Gain_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Gain_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_gain_1_main_main_default
	static lv_style_t style_ride1_label_gain_1_main_main_default;
	if (style_ride1_label_gain_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_gain_1_main_main_default);
	else
		lv_style_init(&style_ride1_label_gain_1_main_main_default);
	lv_style_set_radius(&style_ride1_label_gain_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_gain_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_gain_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_gain_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_gain_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_gain_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_gain_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_gain_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_gain_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_gain_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_gain_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_gain_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Gain_1, &style_ride1_label_gain_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_image_Eleva_gain
	ui->Ride1_image_Eleva_gain = lv_img_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_image_Eleva_gain, 236, 205);
	lv_obj_set_size(ui->Ride1_image_Eleva_gain, 22, 18);

	//Write style state: LV_STATE_DEFAULT for style_ride1_image_eleva_gain_main_main_default
	static lv_style_t style_ride1_image_eleva_gain_main_main_default;
	if (style_ride1_image_eleva_gain_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_image_eleva_gain_main_main_default);
	else
		lv_style_init(&style_ride1_image_eleva_gain_main_main_default);
	lv_style_set_img_recolor(&style_ride1_image_eleva_gain_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride1_image_eleva_gain_main_main_default, 0);
	lv_style_set_img_opa(&style_ride1_image_eleva_gain_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_image_Eleva_gain, &style_ride1_image_eleva_gain_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride1_image_Eleva_gain, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride1_image_Eleva_gain,"F:/ebike_icn_elevation_gained.bin");
	lv_img_set_pivot(ui->Ride1_image_Eleva_gain, 0,0);
	lv_img_set_angle(ui->Ride1_image_Eleva_gain, 0);

	//Write codes Ride1_label_Gain_2
	ui->Ride1_label_Gain_2 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Gain_2, 236, 254);
	lv_obj_set_size(ui->Ride1_label_Gain_2, 69, 21);
	lv_label_set_text(ui->Ride1_label_Gain_2, "25.1");
	lv_label_set_long_mode(ui->Ride1_label_Gain_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Gain_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_gain_2_main_main_default
	static lv_style_t style_ride1_label_gain_2_main_main_default;
	if (style_ride1_label_gain_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_gain_2_main_main_default);
	else
		lv_style_init(&style_ride1_label_gain_2_main_main_default);
	lv_style_set_radius(&style_ride1_label_gain_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_gain_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_gain_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_gain_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_gain_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_gain_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride1_label_gain_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride1_label_gain_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_gain_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_gain_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_gain_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_gain_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Gain_2, &style_ride1_label_gain_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Gain_3
	ui->Ride1_label_Gain_3 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Gain_3, 317, 257);
	lv_obj_set_size(ui->Ride1_label_Gain_3, 23, 21);
	lv_label_set_text(ui->Ride1_label_Gain_3, "m");
	lv_label_set_long_mode(ui->Ride1_label_Gain_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Gain_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_gain_3_main_main_default
	static lv_style_t style_ride1_label_gain_3_main_main_default;
	if (style_ride1_label_gain_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_gain_3_main_main_default);
	else
		lv_style_init(&style_ride1_label_gain_3_main_main_default);
	lv_style_set_radius(&style_ride1_label_gain_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_gain_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_gain_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_gain_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_gain_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_gain_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_gain_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_gain_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_gain_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_gain_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_gain_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_gain_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Gain_3, &style_ride1_label_gain_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Lost_1
	ui->Ride1_label_Lost_1 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Lost_1, 392, 205);
	lv_obj_set_size(ui->Ride1_label_Lost_1, 80, 36);
	lv_label_set_text(ui->Ride1_label_Lost_1, "Elevation Lost");
	lv_label_set_long_mode(ui->Ride1_label_Lost_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Lost_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_lost_1_main_main_default
	static lv_style_t style_ride1_label_lost_1_main_main_default;
	if (style_ride1_label_lost_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_lost_1_main_main_default);
	else
		lv_style_init(&style_ride1_label_lost_1_main_main_default);
	lv_style_set_radius(&style_ride1_label_lost_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_lost_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_lost_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_lost_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_lost_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_lost_1_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_lost_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_lost_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_lost_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_lost_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_lost_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_lost_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Lost_1, &style_ride1_label_lost_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_image_Eleva_lost
	ui->Ride1_image_Eleva_lost = lv_img_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_image_Eleva_lost, 363, 205);
	lv_obj_set_size(ui->Ride1_image_Eleva_lost, 21, 18);

	//Write style state: LV_STATE_DEFAULT for style_ride1_image_eleva_lost_main_main_default
	static lv_style_t style_ride1_image_eleva_lost_main_main_default;
	if (style_ride1_image_eleva_lost_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_image_eleva_lost_main_main_default);
	else
		lv_style_init(&style_ride1_image_eleva_lost_main_main_default);
	lv_style_set_img_recolor(&style_ride1_image_eleva_lost_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride1_image_eleva_lost_main_main_default, 0);
	lv_style_set_img_opa(&style_ride1_image_eleva_lost_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_image_Eleva_lost, &style_ride1_image_eleva_lost_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride1_image_Eleva_lost, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride1_image_Eleva_lost,"F:/ebike_icn_elevation_lost.bin");
	lv_img_set_pivot(ui->Ride1_image_Eleva_lost, 0,0);
	lv_img_set_angle(ui->Ride1_image_Eleva_lost, 0);

	//Write codes Ride1_label_Lost_2
	ui->Ride1_label_Lost_2 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Lost_2, 363, 254);
	lv_obj_set_size(ui->Ride1_label_Lost_2, 66, 21);
	lv_label_set_text(ui->Ride1_label_Lost_2, "10.2");
	lv_label_set_long_mode(ui->Ride1_label_Lost_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Lost_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_lost_2_main_main_default
	static lv_style_t style_ride1_label_lost_2_main_main_default;
	if (style_ride1_label_lost_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_lost_2_main_main_default);
	else
		lv_style_init(&style_ride1_label_lost_2_main_main_default);
	lv_style_set_radius(&style_ride1_label_lost_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_lost_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_lost_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_lost_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_lost_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_lost_2_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride1_label_lost_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride1_label_lost_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_lost_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_lost_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_lost_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_lost_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Lost_2, &style_ride1_label_lost_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Lost_3
	ui->Ride1_label_Lost_3 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Lost_3, 437, 257);
	lv_obj_set_size(ui->Ride1_label_Lost_3, 26, 20);
	lv_label_set_text(ui->Ride1_label_Lost_3, "m");
	lv_label_set_long_mode(ui->Ride1_label_Lost_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Lost_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_lost_3_main_main_default
	static lv_style_t style_ride1_label_lost_3_main_main_default;
	if (style_ride1_label_lost_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_lost_3_main_main_default);
	else
		lv_style_init(&style_ride1_label_lost_3_main_main_default);
	lv_style_set_radius(&style_ride1_label_lost_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_lost_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_ride1_label_lost_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_ride1_label_lost_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_lost_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_lost_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_lost_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_lost_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_lost_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_lost_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_lost_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_lost_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Lost_3, &style_ride1_label_lost_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_image_Footer
	ui->Ride1_image_Footer = lv_img_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_image_Footer, 0, 279);
	lv_obj_set_size(ui->Ride1_image_Footer, 480, 35);

	//Write style state: LV_STATE_DEFAULT for style_ride1_image_footer_main_main_default
	static lv_style_t style_ride1_image_footer_main_main_default;
	if (style_ride1_image_footer_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_image_footer_main_main_default);
	else
		lv_style_init(&style_ride1_image_footer_main_main_default);
	lv_style_set_img_recolor(&style_ride1_image_footer_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_ride1_image_footer_main_main_default, 0);
	lv_style_set_img_opa(&style_ride1_image_footer_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_image_Footer, &style_ride1_image_footer_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Ride1_image_Footer, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Ride1_image_Footer,"F:/ebike_footer_bg.bin");
	lv_img_set_pivot(ui->Ride1_image_Footer, 0,0);
	lv_img_set_angle(ui->Ride1_image_Footer, 0);

	//Write codes Ride1_chart_Elevation
	ui->Ride1_chart_Elevation = lv_chart_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_chart_Elevation, 30, 62);
	lv_obj_set_size(ui->Ride1_chart_Elevation, 180, 155);

	//Write style state: LV_STATE_DEFAULT for style_ride1_chart_elevation_main_main_default
	static lv_style_t style_ride1_chart_elevation_main_main_default;
	if (style_ride1_chart_elevation_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_chart_elevation_main_main_default);
	else
		lv_style_init(&style_ride1_chart_elevation_main_main_default);
	lv_style_set_bg_color(&style_ride1_chart_elevation_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride1_chart_elevation_main_main_default, lv_color_make(0x40, 0x40, 0x40));
	lv_style_set_bg_grad_dir(&style_ride1_chart_elevation_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_chart_elevation_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_chart_elevation_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_chart_elevation_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_chart_elevation_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_chart_elevation_main_main_default, 0);
	lv_style_set_line_color(&style_ride1_chart_elevation_main_main_default, lv_color_make(0xe8, 0xe8, 0xe8));
	lv_style_set_line_width(&style_ride1_chart_elevation_main_main_default, 1);
	lv_style_set_line_opa(&style_ride1_chart_elevation_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_chart_Elevation, &style_ride1_chart_elevation_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_chart_set_type(ui->Ride1_chart_Elevation, LV_CHART_TYPE_LINE);
	lv_chart_set_range(ui->Ride1_chart_Elevation,LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_div_line_count(ui->Ride1_chart_Elevation, 5, 5);
	lv_chart_set_point_count(ui->Ride1_chart_Elevation, 100);
	lv_chart_series_t * Ride1_chart_Elevation_0 = lv_chart_add_series(ui->Ride1_chart_Elevation, lv_color_make(0x00, 0x80, 0xff), LV_CHART_AXIS_PRIMARY_Y);
	
	// EthanCheng Added
	int cnt = 0;
	for(cnt = 0 ; cnt < 20 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 10 + cnt);
	}
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 29 - cnt);
	}
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 19 + cnt);
	}
	for(cnt = 0 ; cnt < 20 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 29 - cnt);
	}
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 9 + cnt);
	}
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 19 - cnt);
	}
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 9 + cnt);
	}
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 19 - cnt);
	}
	pchart_ser = Ride1_chart_Elevation_0;
	
	
	lv_chart_set_next_value(ui->Ride1_chart_Elevation, Ride1_chart_Elevation_0, 10);
	
	//Write codes Ride1_label_Elev_0
	ui->Ride1_label_Elev_0 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_0, 51, 68);
	lv_obj_set_size(ui->Ride1_label_Elev_0, 144, 21);
	lv_label_set_text(ui->Ride1_label_Elev_0, "Elevation Graph");
	lv_label_set_long_mode(ui->Ride1_label_Elev_0, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_0, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_0_main_main_default
	static lv_style_t style_ride1_label_elev_0_main_main_default;
	if (style_ride1_label_elev_0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_0_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_0_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_0_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_0_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_0_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_0_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_0_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_0_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_0_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_0_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_0_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_0_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_0, &style_ride1_label_elev_0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_1
	ui->Ride1_label_Elev_1 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_1, 63, 96);
	lv_obj_set_size(ui->Ride1_label_Elev_1, 71, 18);
	lv_label_set_text(ui->Ride1_label_Elev_1, "15.3");
	lv_label_set_long_mode(ui->Ride1_label_Elev_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_1_main_main_default
	static lv_style_t style_ride1_label_elev_1_main_main_default;
	if (style_ride1_label_elev_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_1_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_1_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_1_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_1_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_1_main_main_default, lv_color_make(0x00, 0x80, 0xff));
	lv_style_set_text_font(&style_ride1_label_elev_1_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_ride1_label_elev_1_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_1_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_1_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_1_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_1, &style_ride1_label_elev_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_2
	ui->Ride1_label_Elev_2 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_2, 149, 98);
	lv_obj_set_size(ui->Ride1_label_Elev_2, 20, 18);
	lv_label_set_text(ui->Ride1_label_Elev_2, "m");
	lv_label_set_long_mode(ui->Ride1_label_Elev_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_2_main_main_default
	static lv_style_t style_ride1_label_elev_2_main_main_default;
	if (style_ride1_label_elev_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_2_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_2_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_2_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_2_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_2_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_2_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_2_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_2_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_2_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_2_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_2, &style_ride1_label_elev_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_3
	ui->Ride1_label_Elev_3 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_3, 109, 248);
	lv_obj_set_size(ui->Ride1_label_Elev_3, 32, 18);
	lv_label_set_text(ui->Ride1_label_Elev_3, "Km");
	lv_label_set_long_mode(ui->Ride1_label_Elev_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_3, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_3_main_main_default
	static lv_style_t style_ride1_label_elev_3_main_main_default;
	if (style_ride1_label_elev_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_3_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_3_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_3_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_3_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_3_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_3_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_3_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_3_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_3_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_3, &style_ride1_label_elev_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_4
	ui->Ride1_label_Elev_4 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_4, 13, 34);
	lv_obj_set_size(ui->Ride1_label_Elev_4, 59, 22);
	lv_label_set_text(ui->Ride1_label_Elev_4, "Meter");
	lv_label_set_long_mode(ui->Ride1_label_Elev_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_4, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_4_main_main_default
	static lv_style_t style_ride1_label_elev_4_main_main_default;
	if (style_ride1_label_elev_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_4_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_4_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_4_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_4_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_4_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_4_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_4_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_4_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_4_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_4_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_4_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_4_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_4, &style_ride1_label_elev_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_5
	ui->Ride1_label_Elev_5 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_5, 39, 227);
	lv_obj_set_size(ui->Ride1_label_Elev_5, 13, 18);
	lv_label_set_text(ui->Ride1_label_Elev_5, "5");
	lv_label_set_long_mode(ui->Ride1_label_Elev_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_5, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_5_main_main_default
	static lv_style_t style_ride1_label_elev_5_main_main_default;
	if (style_ride1_label_elev_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_5_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_5_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_5_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_5_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_5_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_5_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_5_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_5_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_5_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_5_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_5_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_5_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_5, &style_ride1_label_elev_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_6
	ui->Ride1_label_Elev_6 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_6, 63, 227);
	lv_obj_set_size(ui->Ride1_label_Elev_6, 18, 16);
	lv_label_set_text(ui->Ride1_label_Elev_6, "10");
	lv_label_set_long_mode(ui->Ride1_label_Elev_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_6, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_6_main_main_default
	static lv_style_t style_ride1_label_elev_6_main_main_default;
	if (style_ride1_label_elev_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_6_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_6_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_6_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_6_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_6_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_6_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_6_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_6_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_6_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_6_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_6_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_6_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_6, &style_ride1_label_elev_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_7
	ui->Ride1_label_Elev_7 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_7, 96, 227);
	lv_obj_set_size(ui->Ride1_label_Elev_7, 18, 16);
	lv_label_set_text(ui->Ride1_label_Elev_7, "15");
	lv_label_set_long_mode(ui->Ride1_label_Elev_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_7, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_7_main_main_default
	static lv_style_t style_ride1_label_elev_7_main_main_default;
	if (style_ride1_label_elev_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_7_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_7_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_7_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_7_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_7_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_7_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_7_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_7_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_7_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_7_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_7_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_7_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_7, &style_ride1_label_elev_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_8
	ui->Ride1_label_Elev_8 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_8, 127, 227);
	lv_obj_set_size(ui->Ride1_label_Elev_8, 24, 16);
	lv_label_set_text(ui->Ride1_label_Elev_8, "20");
	lv_label_set_long_mode(ui->Ride1_label_Elev_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_8, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_8_main_main_default
	static lv_style_t style_ride1_label_elev_8_main_main_default;
	if (style_ride1_label_elev_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_8_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_8_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_8_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_8_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_8_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_8_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_8_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_8_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_8_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_8_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_8_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_8_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_8, &style_ride1_label_elev_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_9
	ui->Ride1_label_Elev_9 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_9, 158, 227);
	lv_obj_set_size(ui->Ride1_label_Elev_9, 22, 17);
	lv_label_set_text(ui->Ride1_label_Elev_9, "25");
	lv_label_set_long_mode(ui->Ride1_label_Elev_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_9, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_9_main_main_default
	static lv_style_t style_ride1_label_elev_9_main_main_default;
	if (style_ride1_label_elev_9_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_9_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_9_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_9_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_9_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_9_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_9_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_9_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_9_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_9_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_9_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_9_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_9_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_9, &style_ride1_label_elev_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_10
	ui->Ride1_label_Elev_10 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_10, 187, 227);
	lv_obj_set_size(ui->Ride1_label_Elev_10, 22, 17);
	lv_label_set_text(ui->Ride1_label_Elev_10, "30");
	lv_label_set_long_mode(ui->Ride1_label_Elev_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_10, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_10_main_main_default
	static lv_style_t style_ride1_label_elev_10_main_main_default;
	if (style_ride1_label_elev_10_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_10_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_10_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_10_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_10_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_10_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_10_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_10_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_10_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_10_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_10_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_10_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_10_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_10, &style_ride1_label_elev_10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_11
	ui->Ride1_label_Elev_11 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_11, 4, 200);
	lv_obj_set_size(ui->Ride1_label_Elev_11, 21, 25);
	lv_label_set_text(ui->Ride1_label_Elev_11, "10");
	lv_label_set_long_mode(ui->Ride1_label_Elev_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_11, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_11_main_main_default
	static lv_style_t style_ride1_label_elev_11_main_main_default;
	if (style_ride1_label_elev_11_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_11_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_11_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_11_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_11_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_11_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_11_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_11_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_11_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_11_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_11_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_11_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_11_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_11_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_11_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_11, &style_ride1_label_elev_11_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_12
	ui->Ride1_label_Elev_12 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_12, 4, 175);
	lv_obj_set_size(ui->Ride1_label_Elev_12, 23, 17);
	lv_label_set_text(ui->Ride1_label_Elev_12, "20");
	lv_label_set_long_mode(ui->Ride1_label_Elev_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_12, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_12_main_main_default
	static lv_style_t style_ride1_label_elev_12_main_main_default;
	if (style_ride1_label_elev_12_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_12_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_12_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_12_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_12_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_12_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_12_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_12_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_12_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_12_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_12_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_12_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_12_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_12_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_12_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_12, &style_ride1_label_elev_12_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_13
	ui->Ride1_label_Elev_13 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_13, 4, 150);
	lv_obj_set_size(ui->Ride1_label_Elev_13, 24, 16);
	lv_label_set_text(ui->Ride1_label_Elev_13, "30");
	lv_label_set_long_mode(ui->Ride1_label_Elev_13, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_13, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_13_main_main_default
	static lv_style_t style_ride1_label_elev_13_main_main_default;
	if (style_ride1_label_elev_13_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_13_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_13_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_13_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_13_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_13_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_13_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_13_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_13_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_13_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_13_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_13_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_13_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_13_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_13_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_13, &style_ride1_label_elev_13_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_14
	ui->Ride1_label_Elev_14 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_14, 4, 125);
	lv_obj_set_size(ui->Ride1_label_Elev_14, 25, 20);
	lv_label_set_text(ui->Ride1_label_Elev_14, "40");
	lv_label_set_long_mode(ui->Ride1_label_Elev_14, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_14, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_14_main_main_default
	static lv_style_t style_ride1_label_elev_14_main_main_default;
	if (style_ride1_label_elev_14_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_14_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_14_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_14_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_14_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_14_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_14_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_14_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_14_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_14_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_14_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_14_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_14_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_14_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_14_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_14, &style_ride1_label_elev_14_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_label_Elev_15
	ui->Ride1_label_Elev_15 = lv_label_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_label_Elev_15, 4, 100);
	lv_obj_set_size(ui->Ride1_label_Elev_15, 24, 18);
	lv_label_set_text(ui->Ride1_label_Elev_15, "50");
	lv_label_set_long_mode(ui->Ride1_label_Elev_15, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->Ride1_label_Elev_15, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_ride1_label_elev_15_main_main_default
	static lv_style_t style_ride1_label_elev_15_main_main_default;
	if (style_ride1_label_elev_15_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_label_elev_15_main_main_default);
	else
		lv_style_init(&style_ride1_label_elev_15_main_main_default);
	lv_style_set_radius(&style_ride1_label_elev_15_main_main_default, 0);
	lv_style_set_bg_color(&style_ride1_label_elev_15_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_ride1_label_elev_15_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_ride1_label_elev_15_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_label_elev_15_main_main_default, 0);
	lv_style_set_text_color(&style_ride1_label_elev_15_main_main_default, lv_color_make(0x9e, 0x9e, 0x9e));
	lv_style_set_text_font(&style_ride1_label_elev_15_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_ride1_label_elev_15_main_main_default, 0);
	lv_style_set_pad_left(&style_ride1_label_elev_15_main_main_default, 0);
	lv_style_set_pad_right(&style_ride1_label_elev_15_main_main_default, 0);
	lv_style_set_pad_top(&style_ride1_label_elev_15_main_main_default, 0);
	lv_style_set_pad_bottom(&style_ride1_label_elev_15_main_main_default, 0);
	lv_obj_add_style(ui->Ride1_label_Elev_15, &style_ride1_label_elev_15_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ride1_btn_Previous
	ui->Ride1_btn_Previous = lv_btn_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_btn_Previous, 178, 299);
	lv_obj_set_size(ui->Ride1_btn_Previous, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_ride1_btn_previous_main_main_default
	static lv_style_t style_ride1_btn_previous_main_main_default;
	if (style_ride1_btn_previous_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_btn_previous_main_main_default);
	else
		lv_style_init(&style_ride1_btn_previous_main_main_default);
	lv_style_set_radius(&style_ride1_btn_previous_main_main_default, 5);
	lv_style_set_bg_color(&style_ride1_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride1_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_ride1_btn_previous_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_btn_previous_main_main_default, 255);
	lv_style_set_shadow_color(&style_ride1_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_ride1_btn_previous_main_main_default, 0);
	lv_style_set_border_color(&style_ride1_btn_previous_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_ride1_btn_previous_main_main_default, 0);
	lv_style_set_border_opa(&style_ride1_btn_previous_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_btn_Previous, &style_ride1_btn_previous_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Ride1_btn_Previous_label = lv_label_create(ui->Ride1_btn_Previous);
	lv_label_set_text(ui->Ride1_btn_Previous_label, "<");
	lv_obj_set_style_text_color(ui->Ride1_btn_Previous_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ride1_btn_Previous_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Ride1_btn_Previous, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Ride1_btn_Previous_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Ride1_btn_Home
	ui->Ride1_btn_Home = lv_btn_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_btn_Home, 225, 299);
	lv_obj_set_size(ui->Ride1_btn_Home, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_ride1_btn_home_main_main_default
	static lv_style_t style_ride1_btn_home_main_main_default;
	if (style_ride1_btn_home_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_btn_home_main_main_default);
	else
		lv_style_init(&style_ride1_btn_home_main_main_default);
	lv_style_set_radius(&style_ride1_btn_home_main_main_default, 5);
	lv_style_set_bg_color(&style_ride1_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride1_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_ride1_btn_home_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_btn_home_main_main_default, 255);
	lv_style_set_shadow_color(&style_ride1_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_ride1_btn_home_main_main_default, 0);
	lv_style_set_border_color(&style_ride1_btn_home_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_ride1_btn_home_main_main_default, 0);
	lv_style_set_border_opa(&style_ride1_btn_home_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_btn_Home, &style_ride1_btn_home_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Ride1_btn_Home_label = lv_label_create(ui->Ride1_btn_Home);
	lv_label_set_text(ui->Ride1_btn_Home_label, "^");
	lv_obj_set_style_text_color(ui->Ride1_btn_Home_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ride1_btn_Home_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Ride1_btn_Home, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Ride1_btn_Home_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes Ride1_btn_Next
	ui->Ride1_btn_Next = lv_btn_create(ui->Ride1);
	lv_obj_set_pos(ui->Ride1_btn_Next, 272, 299);
	lv_obj_set_size(ui->Ride1_btn_Next, 35, 13);

	//Write style state: LV_STATE_DEFAULT for style_ride1_btn_next_main_main_default
	static lv_style_t style_ride1_btn_next_main_main_default;
	if (style_ride1_btn_next_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_ride1_btn_next_main_main_default);
	else
		lv_style_init(&style_ride1_btn_next_main_main_default);
	lv_style_set_radius(&style_ride1_btn_next_main_main_default, 5);
	lv_style_set_bg_color(&style_ride1_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_ride1_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_ride1_btn_next_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_ride1_btn_next_main_main_default, 255);
	lv_style_set_shadow_color(&style_ride1_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_shadow_opa(&style_ride1_btn_next_main_main_default, 0);
	lv_style_set_border_color(&style_ride1_btn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_ride1_btn_next_main_main_default, 0);
	lv_style_set_border_opa(&style_ride1_btn_next_main_main_default, 255);
	lv_obj_add_style(ui->Ride1_btn_Next, &style_ride1_btn_next_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->Ride1_btn_Next_label = lv_label_create(ui->Ride1_btn_Next);
	lv_label_set_text(ui->Ride1_btn_Next_label, ">");
	lv_obj_set_style_text_color(ui->Ride1_btn_Next_label, lv_color_make(0xff, 0xff, 0xff), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ride1_btn_Next_label, &lv_font_montserratMedium_20, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->Ride1_btn_Next, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->Ride1_btn_Next_label, LV_ALIGN_CENTER, 0, 0);

	//Init events for screen
	events_init_Ride1(ui);
}