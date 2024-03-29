/*
 *
 * Copyright (c) 2023 HellTM
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

// KEYBOARD LOGO

#ifndef LV_ATTRIBUTE_IMG_KEYBOARD_LOGO
#define LV_ATTRIBUTE_IMG_KEYBOARD_LOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_KEYBOARD_LOGO uint8_t keyboard_logo_map[] = {
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

    0xfe, 0x83, 0x71, 0x85, 0x31, 0x00, 0x00, 0x82, 0xff, 0x15, 0xa3, 0x22, 0x00, 0x00, 0xba, 0xba, 
	0x3f, 0x32, 0x28, 0x00, 0x00, 0xba, 0x0f, 0xbd, 0x47, 0x72, 0x80, 0x00, 0xba, 0x55, 0xd8, 0x9d, 
	0xfe, 0x80, 0x00, 0x82, 0xd1, 0x75, 0xef, 0x8b, 0x8c, 0x00, 0xfe, 0x81, 0x10, 0x39, 0xaa, 0x92, 
	0x00, 0x00, 0xe8, 0xd0, 0x94, 0x8d, 0x8f, 0x00, 0xfb, 0xc5, 0x69, 0x2a, 0xfd, 0x9f, 0x80, 0xad, 
	0x73, 0x95, 0x70, 0x76, 0x9f, 0x80, 0x57, 0x12, 0x94, 0x30, 0x28, 0x0f, 0x80, 0x05, 0xb3, 0x72, 
	0xb8, 0x82, 0x83, 0x00, 0x2f, 0x40, 0x00, 0x05, 0xdf, 0x80, 0x00, 0x5c, 0x80, 0x00, 0x04, 0x2a, 
	0x82, 0x00, 0xd2, 0xb0, 0x00, 0x00, 0x1e, 0x89, 0x00, 0xed, 0xe1, 0xf5, 0xc4, 0x76, 0x89, 0x00, 
	0xa7, 0x71, 0x45, 0x47, 0xe1, 0x86, 0x00, 0xfc, 0x31, 0x45, 0x47, 0x26, 0x00, 0x00, 0x4f, 0xd1, 
	0x45, 0x44, 0xef, 0x87, 0x00, 0x38, 0x01, 0xf7, 0x42, 0x8c, 0x88, 0x00, 0x9a, 0xb0, 0x00, 0x02, 
	0x7d, 0x08, 0x00, 0xbc, 0x01, 0xc7, 0xc6, 0xe0, 0x8f, 0x00, 0x1f, 0xe1, 0x40, 0x44, 0x0f, 0x80, 
	0x00, 0x89, 0xe1, 0x43, 0xc3, 0x24, 0x07, 0x00, 0xa6, 0x61, 0x40, 0x46, 0x5f, 0x09, 0x00, 0x0d, 
	0x51, 0xf7, 0xc2, 0x21, 0x09, 0x00, 0x6b, 0xc0, 0x00, 0x03, 0x54, 0x86, 0x00, 0x24, 0xe0, 0x00, 
	0x02, 0xc6, 0x80, 0x00, 0xd3, 0xc0, 0x00, 0x00, 0x1c, 0x07, 0x00, 0xc5, 0xc7, 0x5d, 0xeb, 0x1d, 
	0x08, 0x00, 0xf3, 0xf5, 0x66, 0x21, 0x6c, 0x08, 0x00, 0xc9, 0xe6, 0xee, 0xf3, 0xac, 0x07, 0x00, 
	0xe7, 0xfd, 0x67, 0x12, 0xce, 0x08, 0x00, 0x00, 0x17, 0xda, 0xd6, 0x80, 0x08, 0x00, 0xfe, 0xaa, 
	0xaa, 0xaa, 0xbf, 0x8f, 0x00, 0x82, 0x10, 0x6c, 0x03, 0xa0, 0x80, 0x00, 0xba, 0xe5, 0x1a, 0xa8, 
	0xae, 0x80, 0x00, 0xba, 0xf5, 0x2b, 0xa2, 0xae, 0x80, 0x00, 0xba, 0xf9, 0x63, 0xf6, 0xae, 0x80, 
	0x00, 0x82, 0x07, 0x83, 0x68, 0x20, 0x80, 0x00, 0xfe, 0x34, 0x64, 0x8f, 0xbf, 0x80, 0x00,
};

const lv_img_dsc_t keyboard_logo = {
    .header.always_zero = 0,
    .header.w = 49,
    .header.h = 41,
    .data_size = 295,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = keyboard_logo_map,
};


// USER LOGO
// Feel free to modify this

#ifndef LV_ATTRIBUTE_IMG_USER_LOGO
#define LV_ATTRIBUTE_IMG_USER_LOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_USER_LOGO uint8_t user_logo_map[] = {
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x84, 0x00, 
	0x00, 0x04, 0xc4, 0x00, 0x00, 0x04, 0x66, 0x00, 0x00, 0x06, 0x32, 0x00, 0x00, 0x02, 0x13, 0x00, 
	0x00, 0x01, 0x19, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0xc5, 0x80, 0x00, 0x00, 0x64, 0x80, 
	0x00, 0x00, 0x1c, 0x40, 0x00, 0x00, 0x0c, 0x60, 0x00, 0x00, 0x1c, 0x20, 0x00, 0x00, 0x1f, 0x30, 
	0x00, 0x00, 0x09, 0xd0, 0x00, 0x00, 0x0c, 0x70, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x3c, 0x00, 
	0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x34, 0x00, 
	0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x1b, 0x00, 0xc0, 0x00, 0x0f, 0x80, 
	0x70, 0x00, 0x3c, 0x80, 0x3c, 0x00, 0x4e, 0x00, 0x0b, 0x00, 0xc6, 0x00, 0x04, 0xc0, 0x82, 0x00, 
	0x02, 0x00, 0x83, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x81, 0x01, 0x00, 0x00, 0x41, 0x01, 0x80, 
	0x00, 0x21, 0x00, 0x80, 0x00, 0x11, 0x00, 0x80, 0x00, 0x09, 0x00, 0x80, 0x00, 0x09, 0x00, 0xc0, 
	0x00, 0x05, 0x00, 0x40, 0x00, 0x03, 0x00, 0x40, 0x00, 0x01, 0x80, 0x40, 0x00, 0x01, 0x80, 0x40, 
	0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x60, 0x40, 
	0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x20, 0x40, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t user_logo = {
    .header.always_zero = 0,
    .header.w = 28,
    .header.h = 54,
    .data_size = 224,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = user_logo_map,
};


