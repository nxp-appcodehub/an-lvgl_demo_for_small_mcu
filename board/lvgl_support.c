/*
 * Copyright 2019-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "lvgl_support.h"
#include "lvgl.h"
#if defined(SDK_OS_FREE_RTOS)
#include "FreeRTOS.h"
#include "semphr.h"
#endif

#include "cp_lcd_controller.h"
#include "board.h"
#include "lvgl_support.h"
#include "fsl_gpio.h"
#include "fsl_debug_console.h"
#include "ns2009.h"
#include "lcd.h"
#include "fsl_spi_cmsis.h"
#include "fsl_i2c_cmsis.h"
#include "fsl_gpio.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* if you want to use touch screen instead of button, please comment out or delete this macro */
#define USE_INDEV_BUTTON

/* Button counts */
#define BUTTON_COUNT              3

/* Port Me, Start. */
#define BOARD_TOUCH_I2C           Driver_I2C1
#define BOARD_TOUCH_I2C_IRQ       FLEXCOMM1_IRQn
#define BOARD_TOUCH_I2C_FREQ_FUNC I2C1_GetFreq
#define BOARD_TOUCH_I2C_FREQ      CLOCK_GetFlexCommClkFreq(1U)
/* Port Me, End. */

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
#ifdef USE_INDEV_BUTTON
/* Will be called by the library to read the button */
static void button_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data);
/* Get ID  (0, 1, 2 ..) of the pressed button */
static int8_t button_get_pressed_id(void);
/*Test if `id` button is pressed or not*/
static bool button_is_pressed(uint8_t id);
#endif

static void DEMO_InitLcd(void);
static void DEMO_InitTouch(void);
static void DEMO_ReadTouch(lv_indev_drv_t *drv, lv_indev_data_t *data);
static void DEMO_FlushDisplay(lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p);
/*******************************************************************************
 * Variables
 ******************************************************************************/
static ns2009_handle_t touch_handle;
static volatile uint32_t spi_event;
static volatile bool spi_event_received;
static volatile uint32_t backligth_swith_time_counter=0;
static ns2009_handle_t touch_handle;
#if defined(SDK_OS_FREE_RTOS)
static SemaphoreHandle_t s_transferDone;
#else
static volatile bool s_transferDone;
#endif
SDK_ALIGN(static uint8_t s_frameBuffer[2][LCD_VIRTUAL_BUF_SIZE * LCD_FB_BYTE_PER_PIXEL], 4);

#ifdef USE_INDEV_BUTTON
lv_indev_t * indev_button;
#endif
volatile uint32_t g_data_complete=0;

/*******************************************************************************
 * Code
 ******************************************************************************/
void lv_port_pre_init(void)
{
}
void Reserved46_IRQHandler(void){
    g_data_complete = 1;
}
uint32_t BOARD_TOUCH_I2C_FREQ_FUNC(void)
{
	return BOARD_TOUCH_I2C_FREQ;
}


static void DEMO_InitLcd(void)
{
	CP_InitLcdPin();
	CLOCK_EnableClock(kCLOCK_Lcd_cp);                //Enable clock for lcd cp
	EnableIRQ(Reserved46_IRQn);		
	CP_Init();
	CP_Boot();
  g_data_complete = 1;
	
	LCD_Init(); //Initialize LCD

    gpio_pin_config_t lcd_config = {
        kGPIO_DigitalOutput,
        1,
    };     
    lcd_config.outputLogic = 1;
    GPIO_PinInit(GPIO, LCD_BL_PORT, LCD_BL, &lcd_config); //black light
}

void lv_port_disp_init(void)
{
	static lv_disp_draw_buf_t disp_buf;
	
	memset(s_frameBuffer, 0, sizeof(s_frameBuffer));
	lv_disp_draw_buf_init(&disp_buf, s_frameBuffer[0], s_frameBuffer[1], LCD_VIRTUAL_BUF_SIZE);
	
	/*-------------------------
	* Initialize your display
	* -----------------------*/
	DEMO_InitLcd();
	
	/*-----------------------------------
	* Register the display in LittlevGL
	*----------------------------------*/
	
	static lv_disp_drv_t disp_drv;      /*Descriptor of a display driver*/
	lv_disp_drv_init(&disp_drv); /*Basic initialization*/
	
	/*Set the resolution of the display*/
	disp_drv.hor_res = LCD_WIDTH;
	disp_drv.ver_res = LCD_HEIGHT;
	
	/*Used to copy the buffer's content to the display*/
	disp_drv.flush_cb = DEMO_FlushDisplay;
	
	/*Set a display buffer*/
	disp_drv.draw_buf = &disp_buf;
	
	/*Finally register the driver*/
	lv_disp_drv_register(&disp_drv);
}

static void DEMO_FlushDisplay(lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p)
{
	lv_coord_t x1 = area->y1;   //axis adjustment
	lv_coord_t y1 = area->x1;
	lv_coord_t x2 = area->y2;
	lv_coord_t y2 = area->x2;

	uint8_t data[4];
	const uint8_t *pdata = (const uint8_t *)color_p;
	uint32_t send_size   = (x2 - x1 + 1) * (y2 - y1 + 1) * LCD_FB_BYTE_PER_PIXEL;

	while(!g_data_complete)
	{
		
	}
	
	g_data_complete = 0;	
	
	/* set the coordinate of updated area of the LCD */
	LCD_SetDimensionCoord(x1, y1, x2, y2);
	CP_PrepareLcdData(pdata, send_size);

	/* Set EX flag to let lcd cp start to refresh */
	CP_StartRefreshLcd();
	/* Wait lcd cp refresh complete */	

	/* Wait lcd cp refresh complete */
//	CP_WaitRefreshLcdDone();

	lv_disp_flush_ready(disp_drv);
	
//	if(++backligth_swith_time_counter>10){
//	
//	     /* Define the init structure for the output LCD pin */
//    gpio_pin_config_t lcd_config = {
//        kGPIO_DigitalOutput,
//        1,
//    };     
//    lcd_config.outputLogic = 1;
//    GPIO_PinInit(GPIO, LCD_BL_PORT, LCD_BL, &lcd_config); //black light
//	}
	
}

void lv_port_indev_init(void)
{
	static lv_indev_drv_t indev_drv;
	
#ifdef USE_INDEV_BUTTON
	/*------------------
	* Button
	* -----------------*/
	
	/*Initialize your button */
	
	/*Register a button input device*/
	lv_indev_drv_init(&indev_drv);
	indev_drv.type = LV_INDEV_TYPE_BUTTON;
	indev_drv.read_cb = button_read;
	indev_button = lv_indev_drv_register(&indev_drv);
	
	/*Assign buttons to points on the screen*/
  static const lv_point_t btn_points[BUTTON_COUNT] = 
	{
		{242, 299},   /* Button 0 -> x:242; y:299 */
		{289, 299},   /* Button 1 -> x:289; y:299 */
		{195, 299}    /* Button 2 -> x:195; y:299 */
  };
  lv_indev_set_button_points(indev_button, btn_points);
	
#else
	/*------------------
	* Touchpad
	* -----------------*/
	
	/*Initialize your touchpad */
	DEMO_InitTouch();
	
	/*Register a touchpad input device*/
	lv_indev_drv_init(&indev_drv);
	indev_drv.type    = LV_INDEV_TYPE_POINTER;
	indev_drv.read_cb = DEMO_ReadTouch;
	lv_indev_drv_register(&indev_drv);
#endif
}

static void I2C_MasterSignalEvent(uint32_t event)
{
  /* Notify touch driver about status of the IO operation */
	NS2009_EventHandler(&touch_handle, event);
}

/*Initialize your touchpad*/
static void DEMO_InitTouch(void)
{
	status_t status;
	touch_event_t touch_event;
	static int touch_x = 0;
	static int touch_y = 0;
	
	/* The FreeRTOS kernel APIs are not used in I2C ISR, so the
	* interrupt priority could be set to 0.
	*/
	NVIC_SetPriority(BOARD_TOUCH_I2C_IRQ, 0);
	
	/* attach 12 MHz clock to I2C0 */
	CLOCK_AttachClk(kFRO12M_to_FLEXCOMM1);
	
	/*Init I2C1 */
	BOARD_TOUCH_I2C.Initialize(I2C_MasterSignalEvent);
	BOARD_TOUCH_I2C.PowerControl(ARM_POWER_FULL);
	BOARD_TOUCH_I2C.Control(ARM_I2C_BUS_SPEED, ARM_I2C_BUS_SPEED_FAST_PLUS);
	
	status = NS2009_Init(&touch_handle, &BOARD_TOUCH_I2C);
	if (status != kStatus_Success)
	{
		PRINTF("Touch panel init failed\n");
		assert(0);
	}
}

/* Will be called by the library to read the touchpad */
static void DEMO_ReadTouch(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
	touch_event_t touch_event;
	static int touch_x = 0;
	static int touch_y = 0;
	
	data->state = LV_INDEV_STATE_REL;
	
	if (kStatus_Success == NS2009_GetSingleTouch(&touch_handle, &touch_event, &touch_x, &touch_y))
	{
		if (touch_event == kTouch_Down)
		{
			data->state = LV_INDEV_STATE_PR;
		}
	}
	if((touch_x > 0)&&(touch_x < 480)&&(touch_y > 0)&&(touch_y < 320))
	{
		/*Set the last pressed coordinates*/
		data->point.x =  LCD_WIDTH - touch_x;
		data->point.y =  touch_y;
		//PRINTF("X=%d, Y=%d ,S=%d\r\n", data->point.x, data->point.y,data->state);
	}
}

#ifdef USE_INDEV_BUTTON
/*Test if `id` button is pressed or not*/
static bool button_is_pressed(uint8_t id)
{
	/*Your code comes here*/
	switch(id)
	{
		case 0:
		{
			if(GPIO_PinRead(GPIO, 1, 23) == 0)
			{/* Home */
				return true;
			}
		}
		break;
		
		case 1:
		{
			if(GPIO_PinRead(GPIO, 1, 5) == 0)
			{/* Down */
				return true;
			}
		}
		break;
		
		case 2:
		{
			if(GPIO_PinRead(GPIO, 1, 21) == 0)
			{/* Up */
				return true;
			}
		}
		break;
		
		default:
		{
		}
		break;
	}
	
	return false;
}

/* Get ID  (0, 1, 2 ..) of the pressed button */
static int8_t button_get_pressed_id(void)
{
	uint8_t i;
	
	/* Check to buttons see which is being pressed (assume there are 2 buttons) */
	for(i = 0; i < BUTTON_COUNT; i++) 
	{
		/* Return the pressed button's ID */
		if(button_is_pressed(i)) 
		{
			return i;
		}
	}
	
	/* No button pressed */
	return -1;
}

/* Will be called by the library to read the button */
static void button_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data)
{
	static uint8_t last_btn = 0;
	
	/* Get the pressed button's ID */
	int8_t btn_act = button_get_pressed_id();
	
	if(btn_act >= 0) 
	{
		data->state = LV_INDEV_STATE_PR;
		last_btn = btn_act;
	}
	else 
	{
		data->state = LV_INDEV_STATE_REL;
	}
	
	/* Save the last pressed button's ID */
	data->btn_id = last_btn;
}
#endif


