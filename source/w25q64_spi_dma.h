/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _W25Q64_SPI_DMA_H_
#define _W25Q64_SPI_DMA_H_
#include "stdint.h"

/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_26_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_1_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 5. */
#define PIO1_1_FUNC_ALT5 0x05u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_2_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 6. */
#define PIO1_2_FUNC_ALT6 0x06u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_3_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 6. */
#define PIO1_3_FUNC_ALT6 0x06u

void HS_SPI_Init(void);
void W25Q64_Read(uint8_t* pBuffer,uint32_t ReadAddr,uint16_t NumByteToRead);

#endif

