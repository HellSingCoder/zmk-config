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

// USB CONNECTED

#ifndef LV_ATTRIBUTE_IMG_USB_CONNECTED
#define LV_ATTRIBUTE_IMG_USB_CONNECTED
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_USB_CONNECTED uint8_t usb_connected_map[] = {
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x03, 0xe0, 0x00, 0x03, 
	0x90, 0x00, 0x18, 0x08, 0xe0, 0x30, 0x09, 0xf0, 0x7f, 0xff, 0xf0, 0x30, 0x05, 0xf0, 0x18, 0x08, 
	0xe0, 0x00, 0xd0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,
};

const lv_img_dsc_t usb_connected = {
    .header.always_zero = 0,
    .header.w = 20,
    .header.h = 17,
    .data_size = 27,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = usb_connected_map,
};
