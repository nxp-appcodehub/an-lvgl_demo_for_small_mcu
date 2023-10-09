/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _LCD_CP_LCD_CONTROLLER_H_
#define _LCD_CP_LCD_CONTROLLER_H_

#include "stdint.h"

#define LCD_PORT    		0   /* LCD pins port */
#define LCD_RST_PORT    1   /* LCD pins port */
#define LCD_D0      0
#define LCD_D1      1
#define LCD_D2      2
#define LCD_D3      3
#define LCD_D4      20
#define LCD_D5      21
#define LCD_D6      6
#define LCD_D7      7
#define LCD_D8      8  
#define LCD_D9      9
#define LCD_D10     10
#define LCD_D11     27
#define LCD_D12     28
#define LCD_D13     29
#define LCD_D14     30
#define LCD_D15     31

#define LCD_RST     25//P1_25
#define LCD_DC      15//RS in spec
#define LCD_CS      18
#define LCD_WR      23
#define LCD_RD      22

/*!
 * @brief Initialize co-processor.
 *
 * This function initialize co-processor ready to work
 */
void CP_Init(void);

/*!
 * @brief co-processor boot up.
 *
 * This function boot co-processor to work
 */
void CP_Boot(void);

/*!
 * @brief Prepare LCD data for co-processor
 *
 * This function will prepare LCD data for co-processor to transmit these data to LCD
 *
 * @param pData Pointer points to LCD data
 * @param dataNum Byte number of LCD data
 */
void CP_PrepareLcdData(const uint32_t *pData, uint32_t dataNum);

/*!
 * @brief co-processor initialize LCD pins.
 *
 * This function initialize pins for co-processor access
 */
void CP_InitLcdPin(void);

/*!
 * @brief co-processor start refresh data to LCD.
 *
 * This function start co-processor to refresh LCD data to LCD
 */
void CP_StartRefreshLcd(void);

/*!
 * @brief  Wait co-processor refresh done
 *
 * This function will let system wait co-processor refresh done.
 */
void CP_WaitRefreshLcdDone(void);


#endif
