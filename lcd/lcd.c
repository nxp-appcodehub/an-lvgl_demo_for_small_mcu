/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_common.h"
#include "fsl_debug_console.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

#include "lcd.h"
#include "stdlib.h"
#include "cp_lcd_controller.h"

uint16_t g_background_buffer[480*20];
extern const unsigned char gImage_nxp_log[12800];
uint8_t DftScanDir;
_lcd_dev lcddev;
#define LCD_RS_LOW      GPIO_PinWrite(GPIO, LCD_PORT, LCD_DC, 0)    //Transfer command
#define LCD_RS_HIGH     GPIO_PinWrite(GPIO, LCD_PORT, LCD_DC, 1)    //Transfer paramenters or display data
#define LCD_CS_LOW      GPIO_PinWrite(GPIO, LCD_PORT, LCD_CS, 0)    //Chip select
#define LCD_CS_HIGH     GPIO_PinWrite(GPIO, LCD_PORT, LCD_CS, 1)    //Chip deselect
#define LCD_WR_LOW      GPIO_PinWrite(GPIO, LCD_PORT, LCD_WR, 0)
#define LCD_WR_HIGH     GPIO_PinWrite(GPIO, LCD_PORT, LCD_WR, 1)
#define LCD_RST_LOW     GPIO_PinWrite(GPIO, LCD_RST_PORT, LCD_RST,0)
#define LCD_RST_HIGH    GPIO_PinWrite(GPIO, LCD_RST_PORT, LCD_RST,1)
#define LCD_RD_LOW      GPIO_PinWrite(GPIO, LCD_PORT, LCD_RD, 0)
#define LCD_RD_HIGH     GPIO_PinWrite(GPIO, LCD_PORT, LCD_RD, 1)
#define LCD_TEST_LOW    GPIO_PinWrite(GPIO, LCD_PORT, LCD_TEST, 0)  //test pin output low
#define LCD_TEST_HIGH   GPIO_PinWrite(GPIO, LCD_PORT, LCD_TEST, 1)  //test pin output high
#define PINFUNC_LCD_CP 15
#define PINFUNC_GPIO 0
static void LCD_WrCmd(uint8_t cmd)
{   
    uint32_t val = ((uint32_t)((cmd &0xCF)|((cmd &0x30) << 16)));
    LCD_RS_LOW;
    LCD_CS_LOW;
		LCD_WR_LOW;
    GPIO_PortMaskedWrite(GPIO, LCD_PORT, val);
	__NOP();
		LCD_WR_HIGH;
		__NOP();
		LCD_CS_HIGH;
}
static void LCD_WrData(uint16_t data)
{    
    uint32_t val = ((data & 0x7CF)|((data<<16)& 0xF8300000));
    LCD_RS_HIGH;
    LCD_CS_LOW;
    LCD_WR_LOW;
    GPIO_PortMaskedWrite(GPIO, LCD_PORT, val);
	__NOP();
	LCD_WR_HIGH;
	__NOP();
}

void LCD_WriteReg(uint8_t LCD_Reg, uint16_t LCD_RegValue)
{	
	LCD_WrCmd(LCD_Reg);
	LCD_WrData(LCD_RegValue);
}
void LCD_WriteRAM_Prepare(void)
{
 	LCD_WrCmd(lcddev.wramcmd);
}	

void LCD_WriteRAM(uint16_t RGB_Code)
{

	uint32_t val = ((RGB_Code & 0x7CF)|((RGB_Code << 16)& 0xF8300000));
	LCD_RS_HIGH;
  LCD_CS_LOW;
	LCD_WR_LOW;
  GPIO_PortMaskedWrite(GPIO, LCD_PORT, val);
	__NOP();
	LCD_WR_HIGH;
	__NOP();
	LCD_CS_HIGH;
}

/* Set all of data pins to output direction */
static void LCD_SetDataPinsOutput(void)
{
    /* Define the init structure for the output LCD pin */
    gpio_pin_config_t lcd_config = {
        kGPIO_DigitalOutput,
        1,
    };  
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D0,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D1,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D2,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D3,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D4,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D5,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D6,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D7,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D8,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D9,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D10, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D11, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D12, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D13, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D14, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D15, &lcd_config);   
}

/* Set all of data pins to input direction */
static void LCD_SetDataPinsInput(void)
{
    /* Define the init structure for the input LCD pin */
    gpio_pin_config_t lcd_config = {
        kGPIO_DigitalInput,
        1,
    };
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D0, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D1, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D2, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D3, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D4, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D5, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D6, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_D7, &lcd_config);
}

/* Initialize all pins of LCD */
void LCD_InitPins(void)
{
    /* Define the init structure for the output LCD pin */
    gpio_pin_config_t lcd_config = {
        kGPIO_DigitalOutput,
        1,
    };    
		IOCON->PIO[0][LCD_D0]    = (2<<4) | (1<<6)|(1<<8); //pull-up enable|Fast-mode|Digital mode enable
		IOCON->PIO[0][LCD_D1]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D2]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D3]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D4]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D5]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D6]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D7]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D8]    = (2<<4) | (1<<6)|(1<<8); //pull-up enable|Fast-mode|Digital mode enable
		IOCON->PIO[0][LCD_D9]    = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D10]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D11]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D12]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D13]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D14]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_D15]   = (2<<4) | (1<<6)|(1<<8);

		IOCON->PIO[0][LCD_DC]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_CS]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_WR]   = (2<<4) | (1<<6)|(1<<8);
		IOCON->PIO[0][LCD_RD]   = (2<<4) | (1<<6)|(1<<8);
		
		LCD_SetDataPinsOutput();

    GPIO_PinInit(GPIO, LCD_RST_PORT, LCD_RST, &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_DC,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_CS,  &lcd_config);
    GPIO_PinInit(GPIO, LCD_PORT, LCD_WR,  &lcd_config);  
    GPIO_PinInit(GPIO, LCD_PORT, LCD_RD,  &lcd_config);

//     /* Define the init structure for the output LCD pin */
//    gpio_pin_config_t lcd_config = {
//        kGPIO_DigitalOutput,
//        1,
//    };     
//    lcd_config.outputLogic = 1;
//    GPIO_PinInit(GPIO, LCD_BL_PORT, LCD_BL, &lcd_config); //black light

    //Mask port0, pin[13:20] to enable, 0:enable reading & writing, 1:disable writing, read result is always 0
       GPIO_PortMaskedSet(GPIO, LCD_PORT, 0x07CFF830);    
}

/**
 * brief    Initialize LCD pins
 * param    None
 * return   None
 */
void CP_InitLcdPin(void)
{  // configure pins
    IOCON->PIO[0][LCD_D0]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8); //PINFUNC_LCD_CP|pull-up enable|Fast-mode|Digital mode enable
    IOCON->PIO[0][LCD_D1]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D2]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D3]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D4]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D5]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D6]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D7]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D8]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8); 
    IOCON->PIO[0][LCD_D9]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D10]  = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D11]  = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D12]  = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D13]  = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D14]  = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_D15]  = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
     
    IOCON->PIO[0][LCD_CS]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);
    IOCON->PIO[0][LCD_WR]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);  
//    IOCON->PIO[0][LCD_DC]   = PINFUNC_LCD_CP | (2<<4) | (1<<6)|(1<<8);  
}


void delayms(uint32_t cnt)
{
    SDK_DelayAtLeastUs(cnt*1000, CLOCK_GetCoreSysClkFreq());
}

void LCD_SetCursor(uint16_t Xpos, uint16_t Ypos)
{	 
	LCD_WrCmd(lcddev.setxcmd); 
	LCD_WrData(Xpos>>8); 
	LCD_WrData(Xpos&0xFF);	
	LCD_WrData(Xpos>>8); 
	LCD_WrData(Xpos&0xFF);	
  	
	LCD_WrCmd(lcddev.setycmd); 
	LCD_WrData(Ypos>>8); 
	LCD_WrData(Ypos&0xFF);
	LCD_WrData(Ypos>>8); 
	LCD_WrData(Ypos&0xFF);	
}
 	   
void LCD_Scan_Dir(uint8_t dir)
{
	uint16_t regval=0;
	uint8_t dirreg=0;
	uint16_t temp;  
	switch(dir)
	{
		case 0:dir=6;break;
		case 1:dir=7;break;
		case 2:dir=4;break;
		case 3:dir=5;break;
		case 4:dir=1;break;
		case 5:dir=0;break;
		case 6:dir=3;break;
		case 7:dir=2;break;	     
	}
	switch(dir)
	{
		case L2R_U2D:
			regval|=(0<<7)|(0<<6)|(0<<5); 
			break;
		case L2R_D2U:
			regval|=(1<<7)|(0<<6)|(0<<5); 
			break;
		case R2L_U2D:
			regval|=(0<<7)|(1<<6)|(0<<5); 
			break;
		case R2L_D2U:
			regval|=(1<<7)|(1<<6)|(0<<5); 
			break;	 
		case U2D_L2R:
			regval|=(0<<7)|(0<<6)|(1<<5); 
			break;
		case U2D_R2L:
			regval|=(0<<7)|(1<<6)|(1<<5); 
			break;
		case D2U_L2R:
			regval|=(1<<7)|(0<<6)|(1<<5); 
			break;
		case D2U_R2L:
			regval|=(1<<7)|(1<<6)|(1<<5); 
			break;	 
	}
	dirreg=0X36; 
  regval|=0x08;	
	LCD_WriteReg(dirreg,regval);
			
	LCD_WrCmd(lcddev.setxcmd); 
	LCD_WrData(0);LCD_WrData(0);
	LCD_WrData((lcddev.width-1)>>8);LCD_WrData((lcddev.width-1)&0XFF);
	LCD_WrCmd(lcddev.setycmd); 
	LCD_WrData(0);LCD_WrData(0);
	LCD_WrData((lcddev.height-1)>>8);LCD_WrData((lcddev.height-1)&0XFF);  
} 


#define LCD_WIDTH            480
#define LCD_HEIGHT           320
void LCD_Display_Dir(uint8_t dir)
{
	if(dir==0)			
	{
		lcddev.dir=0;	
		lcddev.width=LCD_HEIGHT;
		lcddev.height=LCD_WIDTH;

		lcddev.wramcmd=0X2C;
		lcddev.setxcmd=0X2A;
		lcddev.setycmd=0X2B;  
    DftScanDir=L2R_U2D;		//D2U_R2L;//

	}else		
	{	  				
		lcddev.dir=1;	
		lcddev.width=LCD_WIDTH;
		lcddev.height=LCD_HEIGHT;

		lcddev.wramcmd=0X2C;
		lcddev.setxcmd=0X2A;
		lcddev.setycmd=0X2B;  
    DftScanDir=L2R_U2D;		
		
	} 
	LCD_Scan_Dir(DftScanDir);	
}

void LCD_SetDimensionCoord(uint32_t x0, uint32_t y0, uint32_t x1, uint32_t y1)
{ 
		LCD_InitPins();    						 //Initialize pins for LCD
			
		LCD_WrCmd(0x2B);                //Page Address Set
		LCD_WrData((uint8_t)(x0>>8));   //Start Page[15:8]
		LCD_WrData((uint8_t)(x0>>0));   //Start Page[7:0]
		LCD_WrData((uint8_t)(x1>>8));   //End Page[15:8]
		LCD_WrData((uint8_t)(x1>>0));   //End page[7:0]
			
		LCD_WrCmd(0x2A);                //Column Address Set
		LCD_WrData((uint8_t)(y0>>8));   //Start Column[15:8]
		LCD_WrData((uint8_t)(y0>>0));   //Start Column[7:0]
		LCD_WrData((uint8_t)(y1>>8));   //End of Column[15:8]
		LCD_WrData((uint8_t)(y1>>0));   //End of Column[7:0]
			
		LCD_WrCmd(0x2C);                //memory write
	  LCD_RS_HIGH;


		CP_InitLcdPin();                //Set pin to lcd cp function, and wait lcd cp refresh  
}

void LCD_Clear(uint16_t color)
{
	uint32_t index=0;      
	uint32_t totalpoint=lcddev.width;
	totalpoint*=lcddev.height; 

	LCD_WrCmd(lcddev.setxcmd); 
	LCD_WrData(0);LCD_WrData(0);
	LCD_WrData((lcddev.width-1)>>8);LCD_WrData((lcddev.width-1)&0XFF);
	LCD_WrCmd(lcddev.setycmd); 
	LCD_WrData(0);LCD_WrData(0);
	LCD_WrData((lcddev.height-1)>>8);LCD_WrData((lcddev.height-1)&0XFF);  

	LCD_WriteRAM_Prepare();       
	for(index=0;index<totalpoint;index++)
	{
		LCD_WriteRAM(color);	   
	}
}


void LCD_Init(void)
{    
		CLOCK_EnableClock(kCLOCK_Gpio0);
		GPIO_PortInit(GPIO, 0);

		LCD_InitPins();  
	  PRINTF("File%s, line %d\r\n",__FILE__, __LINE__);
	
		LCD_RST_HIGH;
		delayms(10);
		LCD_RST_LOW;
		delayms(10);
		LCD_RST_HIGH;
		delayms(10);
		LCD_RD_HIGH;
	
		//************* Start Initial Sequence **********// 	
		LCD_WrCmd(0XF7);    	
		LCD_WrData(0xA9); 	
		LCD_WrData(0x51); 	
		LCD_WrData(0x2C); 	
		LCD_WrData(0x82);

		LCD_WrCmd(0XEC);    	
		LCD_WrData(0x00); 	
		LCD_WrData(0x02); 	
		LCD_WrData(0x03); 	
		LCD_WrData(0x7A);

		LCD_WrCmd(0xC0); 	
		LCD_WrData(0x13); 	
		LCD_WrData(0x13); 	
			
		LCD_WrCmd(0xC1); 	
		LCD_WrData(0x41); 	
			
		LCD_WrCmd(0xC5); 	
		LCD_WrData(0x00); 	
		LCD_WrData(0x28); 	
		LCD_WrData(0x80);
			
		LCD_WrCmd(0xB1);   //Frame rate 70HZ  	
		LCD_WrData(0xB0);
		LCD_WrData(0x11);	
			
		LCD_WrCmd(0xB4); 	
		LCD_WrData(0x02);   	
			
		LCD_WrCmd(0xB6); //RGB/MCU Interface Control	
		LCD_WrData(0x02);   //MCU	
		LCD_WrData(0x22); 

		LCD_WrCmd(0xB7); 	
		LCD_WrData(0xc6); 

		LCD_WrCmd(0xBE); 	
		LCD_WrData(0x00); 
		LCD_WrData(0x04);	
			
		LCD_WrCmd(0xE9); 	
		LCD_WrData(0x00);

		LCD_WrCmd(0xF4); 	
		LCD_WrData(0x00); 
		LCD_WrData(0x00);
		LCD_WrData(0x0f);	
			
		LCD_WrCmd(0xE0); 	
		LCD_WrData(0x00); 	
		LCD_WrData(0x04); 	
		LCD_WrData(0x0E); 	
		LCD_WrData(0x08); 	
		LCD_WrData(0x17); 	
		LCD_WrData(0x0A); 	
		LCD_WrData(0x40); 	
		LCD_WrData(0x79); 	
		LCD_WrData(0x4D); 	
		LCD_WrData(0x07); 	
		LCD_WrData(0x0E); 	
		LCD_WrData(0x0A); 	
		LCD_WrData(0x1A); 	
		LCD_WrData(0x1D); 	
		LCD_WrData(0x0F);  	
			
		LCD_WrCmd(0xE1); 	
		LCD_WrData(0x00); 	
		LCD_WrData(0x1B); 	
		LCD_WrData(0x1F); 	
		LCD_WrData(0x02); 	
		LCD_WrData(0x10); 	
		LCD_WrData(0x05); 	
		LCD_WrData(0x32); 	
		LCD_WrData(0x34); 	
		LCD_WrData(0x43); 	
		LCD_WrData(0x02); 	
		LCD_WrData(0x0A); 	
		LCD_WrData(0x09); 	
		LCD_WrData(0x33); 	
		LCD_WrData(0x37); 	
		LCD_WrData(0x0F); 


		LCD_WrCmd(0xF4);     
		LCD_WrData(0x00);
		LCD_WrData(0x00);
		LCD_WrData(0x0f);	
			
		LCD_WrCmd(0x36); 	
		LCD_WrData(0x08); 			
		LCD_WrCmd(0x3A);  //Interface Mode Control	
		LCD_WrData(0x55);  //0x66 18bit; 0x55 16bit			
		LCD_WrCmd(0x11); 	
		delayms(10); 	
		LCD_WrCmd(0x29); 	
		delayms(10);	
		LCD_Display_Dir(0);		 
//		LCD_Clear(BLUE);		
		
}

#if 0
void LCD_Set_Window(uint16_t sx,uint16_t sy,uint16_t width,uint16_t height)
{   
	width=sx+width-1;
	height=sy+height-1;

	LCD_WrCmd(lcddev.setxcmd);
	LCD_WrData(sx>>8);  
	LCD_WrData(sx&0XFF);	  
	LCD_WrData(width>>8);   
	LCD_WrData(width&0XFF);   
	LCD_WrCmd(lcddev.setycmd);
	LCD_WrData(sy>>8);   
	LCD_WrData(sy&0XFF);  
	LCD_WrData(height>>8);   
	LCD_WrData(height&0XFF); 
	
	LCD_WrCmd(0x2C);                //memory write
	CP_InitLcdPin();                //Set pin to lcd cp function, and wait lcd cp refresh	
}
#endif

