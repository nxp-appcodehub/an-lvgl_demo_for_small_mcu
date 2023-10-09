/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"

/* Create GUI page and load it */
void setup_ui(lv_ui *ui)
{
	/* create all the widgets on the first screen */
	setup_scr_Overview(ui);
	/* show the first screen */
	lv_scr_load(ui->Overview);
}
