/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef __NS2009_H
#define __NS2009_H

#include <stdio.h>
#include <stdint.h>
#include "fsl_common.h"
#include "Driver_I2C.h"
/*! @brief NS2009 maximum number of simultaneously detected touches. */
#define NS2009_MAX_TOUCHES (2U)
/* clang-format off */
#define NS2009_SLV_ADDR                     0x48
#define NS2009_IOCTL_SET_CALBRATION         0x1
/* clang-format on */
#ifdef __cplusplus
extern "C"{
#endif // __cplusplus
typedef struct _ns2009_handle
{
    ARM_DRIVER_I2C *i2c_driver;
    volatile uint32_t i2c_event;
    volatile bool i2c_event_received;
    uint8_t touch_buf[1];
} ns2009_handle_t;

typedef enum _touch_event
{
    kTouch_Down     = 0, /*!< The state changed to touched. */
    kTouch_Up       = 1, /*!< The state changed to not touched. */
    kTouch_Contact  = 2, /*!< There is a continuous touch being detected. */
    kTouch_Reserved = 3  /*!< No touch information available. */
} touch_event_t;

typedef struct _touch_point
{
    touch_event_t TOUCH_EVENT; /*!< Indicates the state or event of the touch point. */
    uint8_t TOUCH_ID; /*!< Id of the touch point. This numeric value stays constant between down and up event. */
    uint16_t TOUCH_X; /*!< X coordinate of the touch point */
    uint16_t TOUCH_Y; /*!< Y coordinate of the touch point */
} touch_point_t;

enum
{
    NS2009_LOW_POWER_READ_X = 0xc0,
    NS2009_LOW_POWER_READ_Y = 0xd0,
    NS2009_LOW_POWER_READ_Z1 = 0xe0,
    NS2009_LOW_POWER_READ_Z2 = 0xf0,
};
enum event_type
{
    TOUCH_NONE = 0,
    TOUCH_BEGIN,
    TOUCH_MOVE,
    TOUCH_END
};

struct ts_ns2009_event_t
{
    enum event_type type;
    int x, y;
} __attribute__((aligned(8)));

struct ts_ns2009_pdata_t
{
    struct tsfilter_t *filter;
    struct ts_ns2009_event_t *event;
    int x, y;
    int press;
} __attribute__((aligned(8)));

void NS2009_EventHandler(ns2009_handle_t *handle, uint32_t i2c_event);
status_t NS2009_GetSingleTouch(ns2009_handle_t *handle, touch_event_t *touch_event, int *touch_x, int *touch_y);
status_t NS2009_ReadTouchData(ns2009_handle_t *handle, uint8_t coord_axes);
status_t NS2009_Init(ns2009_handle_t *handle, ARM_DRIVER_I2C *i2c_driver);

uint8_t ns2009_read(uint8_t cmd, int *val);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif