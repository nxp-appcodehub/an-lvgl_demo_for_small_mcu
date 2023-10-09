/**
 * @file lv_port_fs_templ.c
 *
 */

 /*Copy this file as "lv_port_fs.c" and set this value to "1" to enable content*/
#if 1

/*********************
 *      INCLUDES
 *********************/
#include "lv_port_fs.h"
#include "stdio.h"
#include "w25q64_spi_dma.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/* Create a type to store the required data about your file.
 * If you are using a File System library
 * it already should have a File type.
 * For example FatFS has `FIL`. In this case use `typedef FIL file_t`*/
typedef struct {
    /*Add the data you need to store about a file*/
    uint32_t base_addr;
    uint32_t offset;
    uint32_t size;	
}file_t;

/*Similarly to `file_t` create a type for directory reading too */
typedef struct {
    /*Add the data you need to store about directory reading*/
    uint32_t dummy1;
    uint32_t dummy2;
}dir_t;

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void fs_init(void);
static bool fs_ready_cb(struct _lv_fs_drv_t * drv);
static void* fs_open(struct _lv_fs_drv_t * drv, const char * path, lv_fs_mode_t mode);
static lv_fs_res_t fs_close (lv_fs_drv_t * drv, void * file_p);
static lv_fs_res_t fs_read (lv_fs_drv_t * drv, void * file_p, void * buf, uint32_t btr, uint32_t * br);
static lv_fs_res_t fs_write(lv_fs_drv_t * drv, void * file_p, const void * buf, uint32_t btw, uint32_t * bw);
static lv_fs_res_t fs_seek (lv_fs_drv_t * drv, void * file_p, uint32_t pos, lv_fs_whence_t whence);
static lv_fs_res_t fs_size (lv_fs_drv_t * drv, void * file_p, uint32_t * size_p);
static lv_fs_res_t fs_tell (lv_fs_drv_t * drv, void * file_p, uint32_t * pos_p);
static lv_fs_res_t fs_remove (lv_fs_drv_t * drv, const char *path);
static lv_fs_res_t fs_trunc (lv_fs_drv_t * drv, void * file_p);
static lv_fs_res_t fs_rename (lv_fs_drv_t * drv, const char * oldname, const char * newname);
static lv_fs_res_t fs_free (lv_fs_drv_t * drv, uint32_t * total_p, uint32_t * free_p);
static lv_fs_res_t fs_dir_open (lv_fs_drv_t * drv, void * rddir_p, const char *path);
static lv_fs_res_t fs_dir_read (lv_fs_drv_t * drv, void * rddir_p, char *fn);
static lv_fs_res_t fs_dir_close (lv_fs_drv_t * drv, void * rddir_p);

/**********************
 *  STATIC VARIABLES
 **********************/
static file_t FIL;
uint32_t userData;
/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_port_fs_init(void)
{
	static lv_fs_drv_t fs_drv;

    /*----------------------------------------------------
     * Initialize your storage device and File System
     * -------------------------------------------------*/
    fs_init();

    /*---------------------------------------------------
     * Register the file system interface in LVGL
     *--------------------------------------------------*/
    /* Add a simple drive to open images */
    lv_fs_drv_init(&fs_drv);

    /*Set up fields...*/
    fs_drv.ready_cb = fs_ready_cb;
    fs_drv.letter = 'F';
    fs_drv.open_cb = fs_open;
    fs_drv.close_cb = fs_close;
    fs_drv.read_cb = fs_read;
    fs_drv.write_cb = fs_write;
    fs_drv.seek_cb = fs_seek;
    fs_drv.tell_cb = fs_tell;
    fs_drv.dir_close_cb = fs_dir_close;
    fs_drv.dir_open_cb = NULL;
    fs_drv.dir_read_cb = fs_dir_read;
    lv_fs_drv_register(&fs_drv);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/* Initialize your Storage device and File system. */
static void fs_init(void)
{
    /*E.g. for FatFS initialize the SD card and FatFS itself*/

    /*You code here*/
	  FIL.base_addr = NULL;
	  FIL.offset = 0;
} 

/* Callback for File system ready */
bool fs_ready_cb(struct _lv_fs_drv_t * drv)
{
	return true;
}

/**
 * Open a file
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable
 * @param path path to the file beginning with the driver letter (e.g. S:/folder/file.txt)
 * @param mode read: FS_MODE_RD, write: FS_MODE_WR, both: FS_MODE_RD | FS_MODE_WR
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static void* fs_open(struct _lv_fs_drv_t * drv, const char * path, lv_fs_mode_t mode)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;
    uint32_t* file_p = NULL;

    if (mode == LV_FS_MODE_WR)
    {
        /*Open a file for write*/

        /* Add your code here*/
    }
    else if (mode == LV_FS_MODE_RD)
    {
        /*Open a file for read*/

        /* Add your code here*/
    }
    else if (mode == (LV_FS_MODE_WR | LV_FS_MODE_RD))
    {
        /*Open a file for read and write*/

        /* Add your code here*/
    }

    /* For Read SPI Flash directly without FileSystem */
    /* ebike_bg.bin */
    if (0 == strcmp(path, "/ebike_bg.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 0;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 460804;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_header_bg.bin */
    if (0 == strcmp(path, "/ebike_header_bg.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 460804;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 73444;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gps_arrow.bin */
    if (0 == strcmp(path, "/ebike_gps_arrow.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 534248;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 4036;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_distance_travelled.bin */
    if (0 == strcmp(path, "/ebike_icn_distance_travelled.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 538284;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 886;
    	file_p = (uint32_t*)&FIL;
    }


    /* ebike_icn_average_speed.bin */
    if (0 == strcmp(path, "/ebike_icn_average_speed.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 539170;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1177;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_remaining_distance.bin */
    if (0 == strcmp(path, "/ebike_icn_remaining_distance.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 540347;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1204;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_elapsed_time.bin */
    if (0 == strcmp(path, "/ebike_icn_elapsed_time.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 541551;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1504;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_info_h_210X3.bin */
    if (0 == strcmp(path, "/ebike_info_h_210X3.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 543055;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1894;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_info_v_3X210.bin */
    if (0 == strcmp(path, "/ebike_info_v_3X210.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 544949;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1894;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gauge_bg.bin */
    if (0 == strcmp(path, "/ebike_gauge_bg.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 546843;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 163570;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gauge_lines.bin */
    if (0 == strcmp(path, "/ebike_gauge_lines.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 710413;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 94960;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gauge_numbers.bin */
    if (0 == strcmp(path, "/ebike_gauge_numbers.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 805373;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 66736;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gauge_needle.bin */
    if (0 == strcmp(path, "/ebike_gauge_needle.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 872109;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 178612;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gauge_battery_line.bin */
    if (0 == strcmp(path, "/ebike_gauge_battery_line.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1050721;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 85324;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_gauge_battery.bin */
    if (0 == strcmp(path, "/ebike_gauge_battery.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1136045;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 544;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_footer_bg.bin */
    if (0 == strcmp(path, "/ebike_footer_bg.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1136589;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 50404;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_footer_line_1.bin */
    if (0 == strcmp(path, "/ebike_footer_line_1.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1186993;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 268;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_footer_line_2.bin */
    if (0 == strcmp(path, "/ebike_footer_line_2.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1187261;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 268;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_elevation_gained.bin */
    if (0 == strcmp(path, "/ebike_icn_elevation_gained.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1187529;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1192;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_elevation_lost.bin */
    if (0 == strcmp(path, "/ebike_icn_elevation_lost.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1188721;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1138;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_info_v_3X60.bin */
    if (0 == strcmp(path, "/ebike_info_v_3X60.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1189859;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 544;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_distance_travelled_big.bin */
    if (0 == strcmp(path, "/ebike_icn_distance_travelled_big.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1190403;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 3532;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_average_speed_big.bin */
    if (0 == strcmp(path, "/ebike_icn_average_speed_big.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1193935;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 3724;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_info_v_3X120.bin */
    if (0 == strcmp(path, "/ebike_info_v_3X120.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1197659;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1084;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_calories_burned.bin */
    if (0 == strcmp(path, "/ebike_icn_calories_burned.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1198743;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1201;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_icn_heart_rate.bin */
    if (0 == strcmp(path, "/ebike_icn_heart_rate.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1199944;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1516;
    	file_p = (uint32_t*)&FIL;
    }


    /* ebike_icn_round_per_minute.bin */
    if (0 == strcmp(path, "/ebike_icn_round_per_minute.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1201460;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 1204;
    	file_p = (uint32_t*)&FIL;
    }

    /* ebike_watts.bin */
    if (0 == strcmp(path, "/ebike_watts.bin"))
    {
    	//The location addr of the image in the flash
    	FIL.base_addr = 1202664;
    	//Always 0 at this moment
    	FIL.offset = 0;
    	//The size of the image
    	FIL.size = 40954;
    	file_p = (uint32_t*)&FIL;
    }

    res = LV_FS_RES_OK;

    return file_p;
}

/**
 * Close an opened file
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable. (opened with lv_ufs_open)
 * @return LV_FS_RES_OK: no error, the file is read
 *         any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_close (lv_fs_drv_t * drv, void * file_p)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/
    file_t *p_file = file_p;
    p_file->base_addr = 0;
    p_file->offset = 0;
    p_file->size = 0;
    return res;
}

/**
 * Read data from an opened file
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable.
 * @param buf pointer to a memory block where to store the read data
 * @param btr number of Bytes To Read
 * @param br the real number of read bytes (Byte Read)
 * @return LV_FS_RES_OK: no error, the file is read
 *         any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_read(lv_fs_drv_t *drv, void *file_p, void *buf, uint32_t btr, uint32_t *br)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/
    file_t *p_file = file_p;
    /* For Non-XIP Flash, use SPI Read API instead */
    //memcpy(buf, (uint8_t *)(p_file->base_addr + p_file->offset), btr);
    W25Q64_Read((uint8_t*)buf,(p_file->base_addr + p_file->offset),btr);
    p_file->offset += btr;
    *br = btr;
    res = LV_FS_RES_OK;
    return res;
}

/**
 * Write into a file
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable
 * @param buf pointer to a buffer with the bytes to write
 * @param btr Bytes To Write
 * @param br the number of real written bytes (Bytes Written). NULL if unused.
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_write(lv_fs_drv_t * drv, void * file_p, const void * buf, uint32_t btw, uint32_t * bw)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Set the read write pointer. Also expand the file size if necessary.
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable. (opened with lv_ufs_open )
 * @param pos the new position of read write pointer
 * @return LV_FS_RES_OK: no error, the file is read
 *         any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_seek (lv_fs_drv_t * drv, void * file_p, uint32_t pos, lv_fs_whence_t whence)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/
	  file_t *p_file = file_p;

	  if(whence == LV_FS_SEEK_SET)
	  {
		  p_file->offset = pos;
	  }
	  else if(whence == LV_FS_SEEK_CUR)
	  {
		  p_file->offset += pos;
	  }
	  else if(whence == LV_FS_SEEK_END)
	  {
		  p_file->offset = p_file->size - pos;
	  }

    res = LV_FS_RES_OK;
	
    return res;
}

/**
 * Give the size of a file bytes
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable
 * @param size pointer to a variable to store the size
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_size (lv_fs_drv_t * drv, void * file_p, uint32_t * size_p)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/
//	  *size_p = 480*272*2+4;
    file_t *p_file = file_p;
    *size_p = p_file->size;
    res = LV_FS_RES_OK;
	
    return res;
}
/**
 * Give the position of the read write pointer
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to a file_t variable.
 * @param pos_p pointer to to store the result
 * @return LV_FS_RES_OK: no error, the file is read
 *         any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_tell (lv_fs_drv_t * drv, void * file_p, uint32_t * pos_p)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/
		file_t *p_file = file_p;
    * pos_p = p_file->offset;

    return res;
}

/**
 * Delete a file
 * @param drv pointer to a driver where this function belongs
 * @param path path of the file to delete
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_remove (lv_fs_drv_t * drv, const char *path)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Truncate the file size to the current position of the read write pointer
 * @param drv pointer to a driver where this function belongs
 * @param file_p pointer to an 'ufs_file_t' variable. (opened with lv_fs_open )
 * @return LV_FS_RES_OK: no error, the file is read
 *         any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_trunc (lv_fs_drv_t * drv, void * file_p)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Rename a file
 * @param drv pointer to a driver where this function belongs
 * @param oldname path to the file
 * @param newname path with the new name
 * @return LV_FS_RES_OK or any error from 'fs_res_t'
 */
static lv_fs_res_t fs_rename (lv_fs_drv_t * drv, const char * oldname, const char * newname)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Get the free and total size of a driver in kB
 * @param drv pointer to a driver where this function belongs
 * @param letter the driver letter
 * @param total_p pointer to store the total size [kB]
 * @param free_p pointer to store the free size [kB]
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_free (lv_fs_drv_t * drv, uint32_t * total_p, uint32_t * free_p)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Initialize a 'lv_fs_dir_t' variable for directory reading
 * @param drv pointer to a driver where this function belongs
 * @param rddir_p pointer to a 'lv_fs_dir_t' variable
 * @param path path to a directory
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_dir_open (lv_fs_drv_t * drv, void * rddir_p, const char *path)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Read the next filename form a directory.
 * The name of the directories will begin with '/'
 * @param drv pointer to a driver where this function belongs
 * @param rddir_p pointer to an initialized 'lv_fs_dir_t' variable
 * @param fn pointer to a buffer to store the filename
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_dir_read (lv_fs_drv_t * drv, void * rddir_p, char *fn)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

/**
 * Close the directory reading
 * @param drv pointer to a driver where this function belongs
 * @param rddir_p pointer to an initialized 'lv_fs_dir_t' variable
 * @return LV_FS_RES_OK or any error from lv_fs_res_t enum
 */
static lv_fs_res_t fs_dir_close (lv_fs_drv_t * drv, void * rddir_p)
{
    lv_fs_res_t res = LV_FS_RES_NOT_IMP;

    /* Add your code here*/

    return res;
}

#else /* Enable this file at the top */

/* This dummy typedef exists purely to silence -Wpedantic. */
typedef int keep_pedantic_happy;
#endif
