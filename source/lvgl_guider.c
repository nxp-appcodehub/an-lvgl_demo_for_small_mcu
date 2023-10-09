/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "FreeRTOS.h"
#include "task.h"

#include "fsl_debug_console.h"
#include "fsl_power.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "w25q64_spi_dma.h"

#include "lvgl_support.h"
#include "lvgl.h"
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"
#include "lv_port_fs.h"
#include "pressure_test.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/


/*******************************************************************************
 * Variables
 ******************************************************************************/

static volatile bool s_lvgl_initialized = false;
lv_ui guider_ui;

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

#if LV_USE_LOG
static void print_cb(lv_log_level_t level, const char *file, uint32_t line, const char *func, const char *buf)
{
    /*Use only the file name not the path*/
    size_t p;

    for (p = strlen(file); p > 0; p--)
    {
        if (file[p] == '/' || file[p] == '\\')
        {
            p++; /*Skip the slash*/
            break;
        }
    }

    static const char *lvl_prefix[] = {"Trace", "Info", "Warn", "Error", "User"};

    PRINTF("\r%s: %s \t(%s #%d %s())\n", lvl_prefix[level], buf, &file[p], line, func);
}
#endif

static void AppTask(void *param)
{
#if LV_USE_LOG
    lv_log_register_print_cb(print_cb);
#endif

    lv_port_pre_init();
    lv_init();
    lv_port_disp_init();
    lv_port_indev_init();
		/* File system support for SPI Flash */
    lv_port_fs_init();
	
    s_lvgl_initialized = true;

    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    for (;;)
    {
        lv_task_handler();
        vTaskDelay(5);
    }
}

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief    Main function
 * @date     20220630
 * @function 1.add gauge meter and chart, the most important, fix conflict bewteen screen information update and screen switching
 *           2.change font as montserrat, change font size as 16 and 20, adjust UI widget position
 *           3.rebuild event_init.c, place ebike_timer creation code in events_init function
 *           4.add new input device - external hardware button to control UI page switching, see USE_INDEV_BUTTON in lvgl_support.c
 *             if you click Home button, screen will switched back to home page, and if you click Down button, screen will switch next screen
 *           5.reconstruct project architecture     
 */
int main(void)
{
	BaseType_t stat;

	/* Init board hardware. */
	/* set BOD VBAT level to 1.65V */
  POWER_SetBodVbatLevel(kPOWER_BodVbatLevel1650mv, kPOWER_BodHystLevel50mv, false);
  /* attach main clock divide to FLEXCOMM0 (debug console) */
  CLOCK_AttachClk(BOARD_DEBUG_UART_CLK_ATTACH);
	/* attach 12 MHz clock to SPI8 */
	CLOCK_AttachClk(kFRO_HF_DIV_to_HSLSPI);
	
  BOARD_InitPins();
  BOARD_BootClockPLL150M();
  BOARD_InitDebugConsole();
	/* Initialize SPI of w25q64 */
  HS_SPI_Init();
  //pressure_test();
	
  stat = xTaskCreate(AppTask, "lvgl", configMINIMAL_STACK_SIZE + 800, NULL, tskIDLE_PRIORITY + 2, NULL);

  if (pdPASS != stat)
  {
		PRINTF("Failed to create lvgl task");
    while (1)
    ;
  }

  vTaskStartScheduler();

  for (;;)
  {
  } /* should never get here */
}

/*!
 * @brief Malloc failed hook.
 */
void vApplicationMallocFailedHook(void)
{
	for (;;)
  ;
}

/*!
 * @brief FreeRTOS tick hook.
 */
void vApplicationTickHook(void)
{
	if (s_lvgl_initialized)
	{
			lv_tick_inc(1);
	}
}

/*!
 * @brief Stack overflow hook.
 */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
	(void)pcTaskName;
	(void)xTask;
	
	for (;;)
  ;
}
