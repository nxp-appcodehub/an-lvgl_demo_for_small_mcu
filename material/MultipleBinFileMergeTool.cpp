// MultipleBinFileMergeTool.cpp : Defines the entry point for the console application.
//
/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
 
#include "stdafx.h"
#include "stdio.h"
#include "string.h"

#define _CRT_SECURE_NO_WARNINGS    1
#define FILE_NAME_MAX_LEN          200
#define FILE_PATH_MAX_LEN          300
#define FILE_FOLDER_PATH           "C://LocalData//BinMerge//Images//"
#define MERGED_FILE_PATH           "C://LocalData//BinMerge//Images//mergeBinFile.bin"
#define PER_READ_SIZE              100

FILE* imageSrcFile = NULL;
FILE* imageMergedDestFile = NULL;
FILE* recordFile;

typedef struct _FileInfo
{
	char fileName[FILE_NAME_MAX_LEN];
	unsigned int file_base_address;
	unsigned int file_size;
}FileInfo_t;

char FilePath[200];


char* FileNameArr[] = {
						"ebike_bg.bin",
						"ebike_header_bg.bin",
						"ebike_gps_arrow.bin",
						"ebike_icn_distance_travelled.bin",
						"ebike_icn_average_speed.bin",
						"ebike_icn_remaining_distance.bin",
						"ebike_icn_elapsed_time.bin",
						"ebike_info_h_210X3.bin",
						"ebike_info_v_3X210.bin",
						"ebike_gauge_bg.bin",
						"ebike_gauge_lines.bin",
						"ebike_gauge_numbers.bin",
						"ebike_gauge_needle.bin",
						"ebike_gauge_battery_line.bin",
						"ebike_gauge_battery.bin",
						"ebike_footer_bg.bin",
						"ebike_footer_line_1.bin",
						"ebike_footer_line_2.bin",
						"ebike_icn_elevation_gained.bin",
						"ebike_icn_elevation_lost.bin",
						"ebike_info_v_3X60.bin",
						"ebike_icn_distance_travelled_big.bin",
						"ebike_icn_average_speed_big.bin",
						"ebike_info_v_3X120.bin",
						"ebike_icn_calories_burned.bin",
						"ebike_icn_heart_rate.bin",
						"ebike_icn_round_per_minute.bin",
						"ebike_watts.bin"
                      };

/* File merge */
int fileMerge(const char * sourceFilePath, const char* destFilePath, FileInfo_t* pFileInfo)
{
	/* file size */
	long fileSize = 0;
	/* read buffer */
	unsigned char readBuffer[PER_READ_SIZE];
	/* read buffer fill counter */
	unsigned int readBufferFillCount = 0;
	/* remained read byte count */
	unsigned char readByteRemained = 0;

	/* Open source image file in binary read-only mode */
	imageSrcFile = fopen(sourceFilePath,"rb");
	if (imageSrcFile == NULL)
	{
		//printf("Source image file open failed!\n");
		return -1;
	}
	else
	{
		//printf("Source image file open successfully!\n");
	}

	/* Open destination image file in binary append plus mode */
	imageMergedDestFile = fopen(destFilePath,"ab+");
	if (imageMergedDestFile == NULL)
	{
		//printf("Destination merged image file open failed!\n");
		return -2;
	}
	else
	{
		//printf("Destination merged image file open successfully!\n");
	}

	/* get source image file size */
	fseek(imageSrcFile, 0L, SEEK_END);
	fileSize = ftell(imageSrcFile);
	pFileInfo->file_size = fileSize;
	/* reset source file pointer */
	fseek(imageSrcFile, 0L, SEEK_SET);

	/* get source binary file name */
	strcpy(pFileInfo->fileName, sourceFilePath);
	/* get source file base address in merged file */
	fseek(imageMergedDestFile, 0L, SEEK_END);
	pFileInfo->file_base_address = ftell(imageMergedDestFile);

	/* calculate buffer fill count */
	readBufferFillCount = fileSize / PER_READ_SIZE;
	/* calculate remained bytes */
	readByteRemained = fileSize % PER_READ_SIZE;

	for (unsigned int index = 0; index < readBufferFillCount; index++)
	{
		fread(readBuffer, PER_READ_SIZE, 1, imageSrcFile);
		fwrite(readBuffer, PER_READ_SIZE,1, imageMergedDestFile);
	}
	fread(readBuffer, readByteRemained, 1, imageSrcFile);
	fwrite(readBuffer, readByteRemained, 1, imageMergedDestFile);

	/* close source image file  */
	fclose(imageSrcFile);
	/* close destination merged image file */
	fclose(imageMergedDestFile);
}

void printFileInfo(FileInfo_t* pFileInfo, unsigned int index)
{
	if (pFileInfo != NULL)
	{
		printf("Source File Name:\n   %s\n", pFileInfo->fileName);
		printf("Source File Base Address:\n %u, %x\n", pFileInfo->file_base_address, pFileInfo->file_base_address);
		printf("Source File Size:\n %u,%x \n", pFileInfo->file_size, pFileInfo->file_size);

		recordFile = fopen("C://LocalData//BinMerge//Images//recordFile.txt","a+");
		if (recordFile != NULL)
		{
			fprintf(recordFile,"File%u:%s\n", index, pFileInfo->fileName);
			fprintf(recordFile, "Base address:%u %#x\n", pFileInfo->file_base_address, pFileInfo->file_base_address);
			fprintf(recordFile, "Size:%u %#x\n\n\n", pFileInfo->file_size, pFileInfo->file_size);
			fclose(recordFile);
		}
	}
	else
	{
		printf("No available file information!\n");
	}
}

int main()
{
	FileInfo_t FileInfoArr[30];
	unsigned int filecount = (sizeof(FileNameArr) / sizeof(FileNameArr[0]));

	printf("\r\n---------------------------------Bin Merge Start-----------------------------\r\n");
	/* Intialize File Information */

	for (unsigned int index = 0; index < filecount;index++)
	{
		sprintf(FilePath, "%s%s", FILE_FOLDER_PATH, FileNameArr[index]);
		fileMerge(FilePath, MERGED_FILE_PATH, &FileInfoArr[index]);
		printFileInfo(&FileInfoArr[index],index);
	}

	printf("\r\n---------------------------------Bin Merge End-------------------------------\r\n");
	getchar();

    return 0;
}

