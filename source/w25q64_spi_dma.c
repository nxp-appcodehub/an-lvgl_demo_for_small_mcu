/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "w25q64_spi_dma.h"
#include "fsl_spi.h"
#include "fsl_spi_dma.h"
#include "fsl_iocon.h"
#include "fsl_dma.h"
#include "pin_mux.h"

spi_dma_handle_t SPI_Master_DMAHandle;
volatile bool isTransferCompleted = false;

static void SPI_MasterUserCallback(SPI_Type *base, spi_dma_handle_t *handle, status_t status, void *userData)
{
	if (status == kStatus_Success)
  {
		isTransferCompleted = true;
  }
}

void HS_SPI_InitPins(void)
{
	IOCON->PIO[0][26] = ((IOCON->PIO[0][26] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT026 (pin 40) is configured as HS_SPI_MOSI. */
                         | IOCON_PIO_FUNC(0x09u)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_26_DIGIMODE_DIGITAL));

	IOCON->PIO[1][1] = ((IOCON->PIO[1][1] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT11 (pin 39) is configured as HS_SPI_SSEL1. */
                        | IOCON_PIO_FUNC(PIO1_1_FUNC_ALT5)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_1_DIGIMODE_DIGITAL));

	IOCON->PIO[1][2] = ((IOCON->PIO[1][2] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT12 (pin 41) is configured as HS_SPI_SCK. */
                        | IOCON_PIO_FUNC(PIO1_2_FUNC_ALT6)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_2_DIGIMODE_DIGITAL));

	IOCON->PIO[1][3] = ((IOCON->PIO[1][3] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT13 (pin 42) is configured as HS_SPI_MISO. */
                        | IOCON_PIO_FUNC(PIO1_3_FUNC_ALT6)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_3_DIGIMODE_DIGITAL));
}

void HS_SPI_MasterInit(void)
{
	spi_master_config_t spiMasterConfig = {0};
  uint32_t srcClock_Hz = CLOCK_GetHsLspiClkFreq();

	SPI_MasterGetDefaultConfig(&spiMasterConfig);
  spiMasterConfig.sselNum = (spi_ssel_t)1;
  spiMasterConfig.sselPol = (spi_spol_t)kSPI_SpolActiveAllLow;
  spiMasterConfig.baudRate_Bps = 48000000;

  SPI_MasterInit(SPI8, &spiMasterConfig, srcClock_Hz);
}

void HS_SPI_MasterDMAInit(void)
{
	static dma_handle_t Tx_DMAHandle;
	static dma_handle_t Rx_DMAHandle;
	
  DMA_Init(DMA0);
	DMA_EnableChannel(DMA0, 3);
	DMA_EnableChannel(DMA0, 2);
	DMA_SetChannelPriority(DMA0, 3, kDMA_ChannelPriority3);
	DMA_SetChannelPriority(DMA0, 2, kDMA_ChannelPriority2);
	DMA_CreateHandle(&Tx_DMAHandle, DMA0, 3);
	DMA_CreateHandle(&Rx_DMAHandle, DMA0, 2);
		
	SPI_MasterTransferCreateHandleDMA(
	                                   SPI8, 
																		 &SPI_Master_DMAHandle, 
																		 SPI_MasterUserCallback, 
																		 NULL, 
																		 &Tx_DMAHandle,
                                     &Rx_DMAHandle
																	 );
}

void HS_SPI_Init(void)
{
  CLOCK_AttachClk(kFRO_HF_DIV_to_HSLSPI);
  RESET_PeripheralReset(kHSLSPI_RST_SHIFT_RSTn);
	
	HS_SPI_InitPins();
	HS_SPI_MasterInit();
	HS_SPI_MasterDMAInit();
}

void W25Q64_Read(uint8_t* pBuffer,uint32_t ReadAddr,uint16_t NumByteToRead)
{
	spi_transfer_t spiMasterXfer;
	uint8_t spiTxBuffer[4];
	
	spiTxBuffer[0] = 0x03;
	spiTxBuffer[1] = (uint8_t)((ReadAddr)>>16);
	spiTxBuffer[2] = (uint8_t)((ReadAddr)>>8);
	spiTxBuffer[3] = (uint8_t)((ReadAddr));

	spiMasterXfer.txData      = spiTxBuffer;
	spiMasterXfer.rxData      = pBuffer;
	spiMasterXfer.dataSize    =  4;
	spiMasterXfer.configFlags = kSPI_FrameDelay;

	isTransferCompleted = false;
	SPI_MasterTransferDMA(SPI8, &SPI_Master_DMAHandle, &spiMasterXfer);
	while(isTransferCompleted == false);

	while(NumByteToRead >1024)
	{
		spiMasterXfer.txData      = spiTxBuffer;
		spiMasterXfer.rxData      = pBuffer;
		spiMasterXfer.dataSize    = 1024;
		spiMasterXfer.configFlags = kSPI_FrameDelay;
		
		isTransferCompleted = false;
		SPI_MasterTransferDMA(SPI8, &SPI_Master_DMAHandle, &spiMasterXfer);
		while(isTransferCompleted == false);
		
		pBuffer  =pBuffer + 1024;
		NumByteToRead = NumByteToRead - 1024;
	}

	spiMasterXfer.txData      = spiTxBuffer;
	spiMasterXfer.rxData      = pBuffer;
	spiMasterXfer.dataSize    = NumByteToRead % 1024;
	spiMasterXfer.configFlags = kSPI_FrameAssert;

	isTransferCompleted = false;
	SPI_MasterTransferDMA(SPI8, &SPI_Master_DMAHandle, &spiMasterXfer);
	while(isTransferCompleted == false);
}