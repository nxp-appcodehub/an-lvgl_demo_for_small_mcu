/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "ns2009.h"
#include "stdint.h"
#include "fsl_debug_console.h"

typedef struct _ns2009_touch_point
{
    uint8_t XH;
    uint8_t XL;
    uint8_t YH;
    uint8_t YL;
    uint8_t WEIGHT;
    uint8_t MISC;
} ns2009_touch_point_t;

typedef struct _ns2009_touch_data
{
    uint8_t value_high_8bit;
    uint8_t value_low_8bit;
} ns2009_touch_data_t;

#define TOUCH_POINT_GET_EVENT(T) ((touch_event_t)((T).XH >> 6))
#define TOUCH_POINT_GET_ID(T)    ((T).YH >> 4)
#define TOUCH_POINT_GET_X(T)     ((((T).XH & 0x0f) << 8) | (T).XL)
#define TOUCH_POINT_GET_Y(T)     ((((T).YH & 0x0f) << 8) | (T).YL)

uint8_t ns2009_read(uint8_t cmd, int *val)
{
    uint8_t ret, buf[2];
    if (ret != 0)
        return 0;
    if (val)
        *val = (buf[0] << 4) | (buf[1] >> 4);
    return 1;
}

void NS2009_EventHandler(ns2009_handle_t *handle, uint32_t i2c_event)
{
    handle->i2c_event          = i2c_event;
    handle->i2c_event_received = true;
}

static uint32_t NS_2009_WaitEvent(ns2009_handle_t *handle)
{
    uint32_t i2c_event;

    while (!(handle->i2c_event_received))
        ;

    i2c_event                  = handle->i2c_event;
    handle->i2c_event_received = false;

    return i2c_event;
}

status_t NS2009_Init(ns2009_handle_t *handle, ARM_DRIVER_I2C *i2c_driver)
{
    status_t status = kStatus_Success;
    uint8_t i2c_buf[2];

    assert(handle);
    assert(i2c_driver);

    if (!handle || !i2c_driver)
    {
        return kStatus_InvalidArgument;
    }

    handle->i2c_driver = i2c_driver;


    return status;
}

status_t NS2009_ReadTouchData(ns2009_handle_t *handle, uint8_t coord_axes)
{
    status_t status = kStatus_Success;
    uint8_t i2c_buf[1];
    uint8_t coord_axes_cmd;

    assert(handle);

    if (!handle || !(handle->i2c_driver))
    {
        return kStatus_InvalidArgument;
    }
    coord_axes_cmd = coord_axes;

    if (handle->i2c_driver->MasterTransmit(NS2009_SLV_ADDR, &coord_axes_cmd, 1, true) != ARM_DRIVER_OK)
    {
        status = kStatus_Fail;
    }
    else if (NS_2009_WaitEvent(handle) != ARM_I2C_EVENT_TRANSFER_DONE)
    {
        status = kStatus_Fail;
    }
    else if (handle->i2c_driver->MasterReceive(NS2009_SLV_ADDR, handle->touch_buf, 2, false) != ARM_DRIVER_OK)
    {
        status = kStatus_Fail;
    }
    else if (NS_2009_WaitEvent(handle) != ARM_I2C_EVENT_TRANSFER_DONE)
    {
        status = kStatus_Fail;
    }

    return status;
}
status_t NS2009_GetSingleTouch(ns2009_handle_t *handle, touch_event_t *touch_event, int *touch_x, int *touch_y)
{
    status_t status;
    touch_event_t touch_event_local;
    uint8_t coord_axes_cmd;
    uint16_t coord_axes_res[3];
		coord_axes_cmd = NS2009_LOW_POWER_READ_X;
    status = NS2009_ReadTouchData(handle, coord_axes_cmd);
		if (status == kStatus_Success)
			{	
				coord_axes_res[0] = ((handle->touch_buf[1])|(handle->touch_buf[0]<<8))>>4;
		  }

		coord_axes_cmd = NS2009_LOW_POWER_READ_Y;
    status = NS2009_ReadTouchData(handle, coord_axes_cmd);
		if (status == kStatus_Success)
			{	
				coord_axes_res[1] = ((handle->touch_buf[1])|(handle->touch_buf[0]<<8))>>4;
		  }

		coord_axes_cmd = NS2009_LOW_POWER_READ_Z1;
    status = NS2009_ReadTouchData(handle, coord_axes_cmd);
		if (status == kStatus_Success)
			{	
				coord_axes_res[2] = ((handle->touch_buf[1])|(handle->touch_buf[0]<<8))>>4;
		  }
 
 /* Update coordinates only if there is touch detected */
		if ((coord_axes_res[2] > 70) &&(coord_axes_res[2] <2000))
		{
				if (touch_x)
				{
						*touch_x = coord_axes_res[1]*480/4096;
				}
				if (touch_y)
				{
						*touch_y = coord_axes_res[0]*320/4096;
				}
				*touch_event = kTouch_Down;
				
//			 PRINTF("coord_axes_res:X=%d, Y=%d, Z=%d \r\n", coord_axes_res[0],coord_axes_res[1],coord_axes_res[2]);
//			 PRINTF("coord_axes_res:X=%d, Y=%d, Z=%d \r\n", *touch_x,*touch_y,coord_axes_res[2]);
		}else{
				*touch_event = kTouch_Up;
		}		
    return status;
}


