
/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _LCD_H_
#define _LCD_H_
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
#define LCD_BL_PORT  1
#define LCD_BL       4



 
typedef struct  
{										    
	uint16_t width;		
	uint16_t height;		
	uint16_t id;			
	uint8_t  dir;				
	uint8_t	 wramcmd;		
	uint8_t  setxcmd;		
	uint8_t  setycmd;		
}_lcd_dev; 	  


#define L2R_U2D  0 
#define L2R_D2U  1 
#define R2L_U2D  2 
#define R2L_D2U  3

#define U2D_L2R  4 
#define U2D_R2L  5 
#define D2U_L2R  6 
#define D2U_R2L  7 



#define WHITE    		0xFFFF
#define BLACK   		0x0000	  
#define BLUE    		0x001F  
#define BRED    		0XF81F
#define GRED 			 	0XFFE0
#define GBLUE			 	0X07FF
#define RED        	0xF800
#define MAGENTA    	0xF81F
#define GREEN     	0x07E0
#define CYAN      	0x7FFF
#define YELLOW    	0xFFE0
#define BROWN 			0XBC40 
#define BRRED 			0XFC07 
#define GRAY  			0X8430 
															  
void LCD_Init(void);												
void LCD_WR_REG(uint8_t);
void LCD_WR_DATA(uint16_t);
void LCD_WriteReg(uint8_t LCD_Reg, uint16_t LCD_RegValue);
uint16_t LCD_ReadReg(uint8_t LCD_Reg);
void LCD_WriteRAM_Prepare(void);
void LCD_WriteRAM(uint16_t RGB_Code);		  
void LCD_Scan_Dir(uint8_t dir);							
void LCD_Display_Dir(uint8_t dir);					
void LCD_SetDimensionCoord(uint32_t x0, uint32_t y0, uint32_t x1, uint32_t y1);
void LCD_Refresh(void);

#endif


