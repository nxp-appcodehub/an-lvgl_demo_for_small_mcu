/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"
#include "custom.h"

/* Event initialization */
void events_init(lv_ui *ui)
{
	create_system_timer();
}

/* Callback for btn_Next on Overview screen */
static void Overview_btn_Next_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{/* Click event */	
			/* Get the display of the active screen */
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			/* Judge the previous screen and next screen to load are all free */
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer, ride1_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Ride1(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Ride1, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;

		default:
		break;
	}
}

/* Callback for btn_Previous on Overview screen */
static void Overview_btn_Previous_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{/* Click event */	
			/* Get the display of the active screen */
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			/* Judge the previous screen and next screen to load are all free */
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer,ride2_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Ride2(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Ride2, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;

		default:
		break;
	}
}

/* Event configuration for Overview screen */
void events_init_Overview(lv_ui *ui)
{
	/* Add event for btn_Next */
	lv_obj_add_event_cb(ui->Overview_btn_Next, Overview_btn_Next_event_handler, LV_EVENT_ALL, NULL);
	/* Add event for btn_Previous */
	lv_obj_add_event_cb(ui->Overview_btn_Previous, Overview_btn_Previous_event_handler, LV_EVENT_ALL, NULL);
}

/* Callback for btn_Next on Ride 1 screen */
static void Ride1_btn_Next_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{/* Click event */	
			/* Get the display of the active screen */			
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		  /* Judge the previous screen and next screen to load are all free */  	
			if ((d->prev_scr == NULL) && (d->scr_to_load == NULL))
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer,ride2_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Ride2(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Ride2, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;
		
		default:
		break;
	}
}

/* Callback for btn_Home on Ride 1 screen */
static void Ride1_btn_Home_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{
			/* Get the display of the active screen */	
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			/* Judge the previous screen and next screen to load are all free */  
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer,overview_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Overview(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Overview, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;
		
		default:
		break;
	}
}

/* Callback for btn_Previous on Ride 1 screen */
static void Ride1_btn_Previous_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{/* Click event */	
			/* Get the display of the active screen */			
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		  /* Judge the previous screen and next screen to load are all free */  	
			if ((d->prev_scr == NULL) && (d->scr_to_load == NULL))
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer,overview_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Overview(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Overview, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;
		
		default:
		break;
	}
}

/* Event configuration for Ride 1 screen */
void events_init_Ride1(lv_ui *ui)
{
	/* Add event for btn_Next */
	lv_obj_add_event_cb(ui->Ride1_btn_Next, Ride1_btn_Next_event_handler, LV_EVENT_ALL, NULL);
	/* Add event for btn_Home */
	lv_obj_add_event_cb(ui->Ride1_btn_Home, Ride1_btn_Home_event_handler, LV_EVENT_ALL, NULL);
	/* Add event for btn_Previous */
	lv_obj_add_event_cb(ui->Ride1_btn_Previous, Ride1_btn_Previous_event_handler, LV_EVENT_ALL, NULL);
}

/* Callback for btn_Next on Ride 2 screen */
static void Ride2_btn_Next_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{/* Click event */
			/* Get the display of the active screen */
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			/* Judge the previous screen and next screen to load are all free */  
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer,overview_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Overview(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Overview, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;
		
	  default:
		break;
	}
}

/* Callback for btn_Home on Ride 2 screen */
static void Ride2_btn_Home_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{
			/* Get the display of the active screen */
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			/* Judge the previous screen and next screen to load are all free */ 
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer,overview_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Overview(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Overview, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;
		
		default:
		break;
	}
}

/* Callback for btn_Previous on Ride 2 screen */
static void Ride2_btn_Previous_event_handler(lv_event_t *e)
{
	/* Get the code of event type */
	lv_event_code_t code = lv_event_get_code(e);
	
	switch (code)
	{
		case LV_EVENT_CLICKED:
		{
			/* Get the display of the active screen */
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			/* Judge the previous screen and next screen to load are all free */ 
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
			{
				/* Change screen information update operation function to adapt new screen */
				lv_timer_set_cb(ebike_timer, ride1_timer_callback);
				
				/* Create all widgets for new screen */
				setup_scr_Ride1(&guider_ui);
				/* Show new screen */
				lv_scr_load_anim(guider_ui.Ride1, LV_SCR_LOAD_ANIM_NONE, 1, 0, true);
			}
		}
		break;
		
		default:
		break;
	}
}

/* Event configuration for Ride 2 screen */
void events_init_Ride2(lv_ui *ui)
{
	/* Add event for btn_Next */
	lv_obj_add_event_cb(ui->Ride2_btn_Next, Ride2_btn_Next_event_handler, LV_EVENT_ALL, NULL);
	/* Add event for btn_Home */
	lv_obj_add_event_cb(ui->Ride2_btn_Home, Ride2_btn_Home_event_handler, LV_EVENT_ALL, NULL);
	/* Add event for btn_previous */
	lv_obj_add_event_cb(ui->Ride2_btn_Previous, Ride2_btn_Previous_event_handler, LV_EVENT_ALL, NULL);
}
