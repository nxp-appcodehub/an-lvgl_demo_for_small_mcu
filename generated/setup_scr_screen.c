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


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
	static lv_style_t style_screen_main_main_default;
	if (style_screen_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_default);
	else
		lv_style_init(&style_screen_main_main_default);
	lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_main_main_default, 0);
	lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_chart_1
	ui->screen_chart_1 = lv_chart_create(ui->screen);
	lv_obj_set_pos(ui->screen_chart_1, 50, 45);
	lv_obj_set_size(ui->screen_chart_1, 205, 155);

	//Write style state: LV_STATE_DEFAULT for style_screen_chart_1_main_main_default
	static lv_style_t style_screen_chart_1_main_main_default;
	if (style_screen_chart_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_chart_1_main_main_default);
	else
		lv_style_init(&style_screen_chart_1_main_main_default);
	lv_style_set_bg_color(&style_screen_chart_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_chart_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_chart_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_chart_1_main_main_default, 255);
	lv_style_set_pad_left(&style_screen_chart_1_main_main_default, 5);
	lv_style_set_pad_right(&style_screen_chart_1_main_main_default, 5);
	lv_style_set_pad_top(&style_screen_chart_1_main_main_default, 5);
	lv_style_set_pad_bottom(&style_screen_chart_1_main_main_default, 5);
	lv_style_set_line_color(&style_screen_chart_1_main_main_default, lv_color_make(0xe8, 0xe8, 0xe8));
	lv_style_set_line_width(&style_screen_chart_1_main_main_default, 2);
	lv_style_set_line_opa(&style_screen_chart_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_chart_1, &style_screen_chart_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_chart_set_type(ui->screen_chart_1, LV_CHART_TYPE_LINE);
	lv_chart_set_range(ui->screen_chart_1,LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_div_line_count(ui->screen_chart_1, 3, 5);
	lv_chart_set_point_count(ui->screen_chart_1, 5);
	lv_chart_series_t * screen_chart_1_0 = lv_chart_add_series(ui->screen_chart_1, lv_color_make(0x00, 0x00, 0x00), LV_CHART_AXIS_PRIMARY_Y);
	lv_chart_set_next_value(ui->screen_chart_1, screen_chart_1_0, 1);
	lv_chart_set_next_value(ui->screen_chart_1, screen_chart_1_0, 20);
	lv_chart_set_next_value(ui->screen_chart_1, screen_chart_1_0, 30);
	lv_chart_set_next_value(ui->screen_chart_1, screen_chart_1_0, 40);
	lv_chart_set_next_value(ui->screen_chart_1, screen_chart_1_0, 5);
}