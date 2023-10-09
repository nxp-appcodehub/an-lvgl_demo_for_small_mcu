/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl/lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

/* Screen information update timer */
lv_timer_t * ebike_timer = NULL;

/***************************************Screen information************************************************************/
const char *turn_dist[]={"3.1KM","3.0KM","2.9KM","2.8KM","2.7KM","2.6KM","2.5KM","2.4KM","2.3KM","2.2KM", NULL};
const char *trav_dist[]={"12.7","12.8","12.9","13.0","13.1","13.2","13.3","13.4","13.5","13.6", NULL};
const char *rema_dist[]={"18.3","18.2","18.1","18.0","17.9","17.8","17.7","17.6","17.5","17.4", NULL};
const char *aver_speed[]={"16.1","16.2","16.1","16.0","15.9","16.0","16.1","16.2","16.3","16.2", NULL};
const char *elap_time[]={"46:28","46:29","46:30","46:31","46:32","46:33","46:34","46:35","46:36","46:37", NULL};
const char *elev_gain[]={"25.1","25.3","25.4","25.2","25.0","24.8","24.7","25.8","26.5","24.2", NULL};
const char *elev_lost[]={"10.2","11.8","12.0","11.9","14.7","16.2","14.3","17.5","13.6","11.8", NULL};
const char *elev_grap[]={"15.3","15.4","15.5","15.6","15.6","15.5","15.6","15.5","15.4","15.3", NULL};
const char *calo_burn[]={"462","462","463","463","464","465","466","466","467","468", NULL};
const char *heart_rate[]={"118","119","120","124","123","121","119","118","121","124", NULL};
const char *cadence[]={"86","84","83","85","88","92","96","98","89","86", NULL};
const char *watts[]={"15.7","15.8","15.8","15.9","16.0","16.0","16.1","16.2","16.3","16.4", NULL};
static int chart_val[100];
const int  gauge_val[]={27,26,25,24,23,22,21,20,19,19,20,20,21,21,22,23,24,23,22,21,20,20,19,18,17,16,15,15,15,16,17,18,19,20,21,21,22,22,21,20,19,19,19,20,21,22,23,24,25,26,26,27,28,28,28};
const char *speed_num_1[]={"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29", NULL};
const char *speed_num_2[]={"27","26","25","24","23","22","21","20","19","19","20","20","21","21","22","23","24","23","22","21","20","20","19","18","17","16","15","15","15","16","17","18","19","20","21","21","22","22","21","20","19","19","19","20","21","22","23","24","25","26","26","27","28","28","28"};
static int  chart_val[100];
/***************************************Screen information************************************************************/
	
/* Chart data initialization */
void ride_1_screen_chart_init(void)
{
	int cnt = 0, i = 0;

  lv_chart_set_update_mode(guider_ui.Ride1_chart_Elevation, LV_CHART_UPDATE_MODE_SHIFT);

	for(cnt = 0 ; cnt < 20 ; cnt++, i++)
	{
		chart_val[i] = 10 + cnt;
	}
	for(cnt = 0 ; cnt < 10 ; cnt++, i++)
	{
		chart_val[i] = 29 - cnt;
	}
	for(cnt = 0 ; cnt < 10 ; cnt++, i++)
	{
		chart_val[i] = 19 + cnt;
	}
	for(cnt = 0 ; cnt < 20 ; cnt++, i++)
	{
		chart_val[i] = 29 - cnt;
	}
	for(cnt = 0 ; cnt < 10 ; cnt++, i++)
	{
		chart_val[i] = 9 + cnt;
	}
	for(cnt = 0 ; cnt < 10 ; cnt++, i++)
	{
		chart_val[i] = 19 - cnt;
	}
	for(cnt = 0 ; cnt < 10 ; cnt++, i++)
	{
		chart_val[i] = 9 + cnt;
	}
	for(cnt = 0 ; cnt < 10 ; cnt++, i++)
	{
		chart_val[i] = 19 - cnt;
	}
}

/* Overview screen information update callback function */
void overview_timer_callback(lv_timer_t * timer)
{
	static int i = 0;
	static uint8_t speed = 0;
	static uint8_t speedDir = 0;
	
	if(i > 9)
	{
		i = 0;
	}
	
	lv_label_set_text(guider_ui.Overview_label_Distance, turn_dist[i]);
	lv_label_set_text(guider_ui.Overview_label_Travelled_2, trav_dist[i]);
	lv_label_set_text(guider_ui.Overview_label_Speed_2, aver_speed[i]);
	lv_label_set_text(guider_ui.Overview_label_Remain_2, rema_dist[i]);
	lv_label_set_text(guider_ui.Overview_label_Elapsed_2, elap_time[i]);
	i++;
	
	if(speedDir == 0)
	{
		speed++;
		if(speed == 40)
		{
			speedDir = 1;
		}
	}
	else
	{
		speed--;
		if(speed == 0)
		{
			speedDir = 0;
		}
	}
	lv_label_set_text_fmt(guider_ui.Overview_label_Meter_speed, "%d", speed);
	lv_meter_set_indicator_value(
	                             guider_ui.Overview_meter_Speed, 
	                             Overview_meter_Speed_scale_1_ndline_0, 
	                             speed);
}

/* Ride 1 screen information update callback function */
void ride1_timer_callback(lv_timer_t * timer)
{
	static int i = 0,j=0;
	
	if(i > 9)
	{
		i = 0;
	}

	lv_label_set_text(guider_ui.Ride1_label_Distance_2, trav_dist[i]);
	lv_label_set_text(guider_ui.Ride1_label_Speed_2, aver_speed[i]);
	lv_label_set_text(guider_ui.Ride1_label_Gain_2, elev_gain[i]);
	lv_label_set_text(guider_ui.Ride1_label_Lost_2, elev_lost[i]);
	lv_label_set_text(guider_ui.Ride1_label_Elev_1,  elev_grap[i]);
  
	lv_chart_set_next_value(guider_ui.Ride1_chart_Elevation, pchart_ser, chart_val[j++]);
	lv_chart_refresh(guider_ui.Ride1_chart_Elevation);
	if(j > 99)
	{
		j = 0;
	}
		
	i++;
}

/* Ride 2 screen information update callback function */
void ride2_timer_callback(lv_timer_t * timer)
{
	static int i = 0;

	if(i > 9)
	{
		i = 0;
	}

	lv_label_set_text(guider_ui.Ride2_label_Distance,    turn_dist[i]);
	lv_label_set_text(guider_ui.Ride2_label_Calories_2,  calo_burn[i]);
	lv_label_set_text(guider_ui.Ride2_label_Heart_2, heart_rate[i]);
	lv_label_set_text(guider_ui.Ride2_label_Cadence_2, cadence[i]);
	lv_label_set_text(guider_ui.Ride2_label_Elapsed_2, elap_time[i]);
	lv_label_set_text(guider_ui.Ride2_label_Watts, watts[i]);

	i++;
}

/* Create a timer for updating screen information periodically */
void create_system_timer(void)
{
	/* create a new timer for screen information update */
	ebike_timer = lv_timer_create(overview_timer_callback, 120,  NULL);
}

void custom_init(lv_ui *ui)
{
  /* Add your codes here */
	ride_1_screen_chart_init();
}

