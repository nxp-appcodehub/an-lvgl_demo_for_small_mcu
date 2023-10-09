/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_ctimer.h"
#include "fsl_iocon.h"
#include "fsl_clock.h"

#define IOCON_PIO_FUNC3         0x03u         /*!<@brief Selects pin function 3 */
#define IOCON_PIO_MODE_INACT    0x00u         /*!<@brief No addition pin function */
#define IOCON_PIO_SLEW_STANDARD 0x00u         /*!<@brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_INV_DI        0x00u         /*!<@brief Input function is not inverted */
#define IOCON_PIO_DIGITAL_EN    0x0100u       /*!<@brief Enables digital function */
#define IOCON_PIO_OPENDRAIN_DI  0x00u         /*!<@brief Open drain is disabled */

volatile uint32_t g_pwmPeriod   = 0U;
volatile uint32_t g_pulsePeriod = 0U;

status_t CTIMER_GetPwmPeriodValue(uint32_t pwmFreqHz, uint8_t dutyCyclePercent, uint32_t timerClock_Hz)
{
    /* Calculate PWM period match value */
    g_pwmPeriod = (timerClock_Hz / pwmFreqHz) - 1U;

    /* Calculate pulse width match value */
    g_pulsePeriod = (g_pwmPeriod + 1U) * (100 - dutyCyclePercent) / 100;

    return kStatus_Success;
}

/*
 * The purpose of pressure test is that The purpose of the stress test is to determine 
 * whether a multi-screen application can switch screens stably for a long time
 * The specific timing ideas are as follows:
 * 1. Add button support in lvgl_support.c. For details, please refer to the lv_port_indev_init function 
 *    and button-related functions, such as button_is_pressed, button_get_pressed_id, button_read
 * 2. Modify the button coordinates defined in btn_points to the button coordinates used for screen switching 
 *    in the UI interface
 * 3. Here we use the Ctimer of LPC55xx to set the match time, generate a PWM wave with a certain period 
 *    and duty cycle, and then connect the match output pin to the input of the hardware button, which can 
 *    simulate manual pressing of the screen
 * Here, I want to P1_22(Ctimer 2 match 3) as PWM output
*/
uint32_t srcClock_Hz;
uint32_t timerClock;
void pressure_test(void)
{
	/* CTimer configuration structure */
	ctimer_config_t config;
	/* Source clock frequency of Ctimer 2 */
	
	
	const uint32_t port1_pin22_config = (/* Pin is configured as CTIMER2_MAT1 */
                                        IOCON_PIO_FUNC3 |
                                        /* No addition pin function */
                                        IOCON_PIO_MODE_INACT |
                                        /* Standard mode, output slew rate control is enabled */
                                        IOCON_PIO_SLEW_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI);
  /* PORT1 PIN22 is configured as CTIMER2_MAT3 */
  IOCON_PinMuxSet(IOCON, 1U, 22U, port1_pin22_config);
	 
	
	/* Use 12 MHz clock for Ctimer2 */
  CLOCK_AttachClk(kFRO_HF_to_CTIMER2);
	
	/* CTimer0 counter uses the AHB clock, some CTimer1 modules use the Aysnc clock */
  srcClock_Hz = CLOCK_GetCTimerClkFreq(2U);
	
	CTIMER_GetDefaultConfig(&config);
	//config.prescale = 100;
  timerClock = srcClock_Hz / (config.prescale + 1);

  CTIMER_Init(CTIMER2, &config);
  CTIMER_GetPwmPeriodValue(1, 80, timerClock);
  CTIMER_SetupPwmPeriod(CTIMER2, kCTIMER_Match_1, kCTIMER_Match_3, g_pwmPeriod, g_pulsePeriod, false);
  CTIMER_StartTimer(CTIMER2);
}