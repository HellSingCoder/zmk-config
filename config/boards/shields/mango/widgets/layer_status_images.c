#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LAYER_BASE_IMG
#define LV_ATTRIBUTE_IMG_LAYER_BASE_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_LAYER_BASE_IMG uint8_t layer_base_img_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xef, 0xfc, 
  0xff, 0xff, 0xff, 0xf0, 0xfc, 
  0xff, 0xff, 0xff, 0xfc, 0x7c, 
  0xff, 0xcf, 0xff, 0xfc, 0x3c, 
  0xff, 0xc0, 0xff, 0xfc, 0x3c, 
  0xff, 0xc0, 0x07, 0xf8, 0x7c, 
  0xff, 0xc0, 0x00, 0x60, 0xfc, 
  0xff, 0xe0, 0x00, 0x07, 0xfc, 
  0xff, 0xfe, 0x00, 0x03, 0xfc, 
  0xff, 0xfe, 0x00, 0x01, 0xfc, 
  0xff, 0xf8, 0x7f, 0x00, 0xfc, 
  0xff, 0xe1, 0xff, 0xf0, 0x7c, 
  0xff, 0xc7, 0xff, 0xfc, 0x7c, 
  0xff, 0xcf, 0xff, 0xfe, 0x7c, 
  0xff, 0x9f, 0xff, 0xff, 0x3c, 
  0xff, 0x9f, 0xff, 0xff, 0x3c, 
  0xff, 0x9f, 0xff, 0xff, 0x3c, 
  0xff, 0x8f, 0xff, 0xff, 0x3c, 
  0xff, 0xcf, 0xff, 0xfe, 0x3c, 
  0xff, 0xc3, 0xff, 0xf8, 0x7c, 
  0xff, 0xe0, 0x00, 0x00, 0x7c, 
  0xff, 0xe0, 0x00, 0x00, 0xfc, 
  0xff, 0xf0, 0x00, 0x01, 0xfc, 
  0xff, 0xfc, 0x00, 0x07, 0xfc, 
  0xff, 0xff, 0x00, 0x1f, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
};

const lv_img_dsc_t layer_base_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 38,
  .header.h = 53,
  .data_size = 274,
  .data = layer_base_img_map,
};

#ifndef LV_ATTRIBUTE_IMG_LAYER_NUM_IMG
#define LV_ATTRIBUTE_IMG_LAYER_NUM_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_LAYER_NUM_IMG uint8_t layer_num_img_map[] = {
  0xed, 0xed, 0xed, 0xff, 	/*Color of index 0*/
  0x05, 0x05, 0x05, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xe0, 0x7c, 
  0xff, 0xfe, 0x07, 0xc0, 0x1c, 
  0xff, 0xfc, 0x03, 0x00, 0x0c, 
  0xff, 0xf8, 0x01, 0x0e, 0x0c, 
  0xff, 0xf0, 0x50, 0x1f, 0x84, 
  0xff, 0xf0, 0xf8, 0x3f, 0xc4, 
  0xff, 0xf1, 0xfc, 0x3f, 0xc0, 
  0xff, 0xf1, 0xfc, 0x3f, 0xe0, 
  0xff, 0xf1, 0xfc, 0x7f, 0xe0, 
  0xff, 0xf1, 0xfe, 0x7f, 0xc4, 
  0xff, 0xf1, 0xfe, 0x7f, 0xc4, 
  0xff, 0xf0, 0xff, 0xff, 0xc4, 
  0xff, 0xf8, 0xff, 0xff, 0xc4, 
  0xff, 0xf8, 0xff, 0xff, 0xc4, 
  0xff, 0xff, 0xff, 0xff, 0xcc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xf5, 0xfc, 
  0xff, 0xeb, 0xff, 0xf1, 0xfc, 
  0xff, 0x80, 0xff, 0xf1, 0xfc, 
  0xff, 0x00, 0x3f, 0xf1, 0xfc, 
  0xfe, 0x00, 0x1f, 0xf1, 0xfc, 
  0xfc, 0x1e, 0x0f, 0xf1, 0xfc, 
  0xfc, 0x7f, 0x87, 0xf1, 0xfc, 
  0xfc, 0x7f, 0xc3, 0xf1, 0xfc, 
  0xfc, 0x7f, 0xe1, 0xf1, 0xfc, 
  0xfc, 0x7f, 0xf0, 0x71, 0xfc, 
  0xfc, 0x7f, 0xf8, 0x31, 0xfc, 
  0xfc, 0x7f, 0xfc, 0x11, 0xfc, 
  0xfe, 0x3f, 0xfe, 0x01, 0xfc, 
  0xfe, 0x3f, 0xff, 0x81, 0xfc, 
  0xff, 0x1f, 0xff, 0xc1, 0xfc, 
  0xff, 0x3f, 0xff, 0xfb, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xfe, 0xff, 0xfc, 
  0xff, 0xff, 0xfc, 0x7f, 0xfc, 
  0xff, 0xff, 0xfc, 0x7f, 0xfc, 
  0xff, 0xff, 0xfc, 0x7f, 0xfc, 
  0xff, 0xff, 0xfc, 0x7f, 0xfc, 
  0x00, 0x00, 0x00, 0x7f, 0xfc, 
  0x00, 0x00, 0x00, 0x7f, 0xfc, 
  0x00, 0x00, 0x00, 0x7f, 0xfc, 
  0x80, 0x00, 0x00, 0x7f, 0xfc, 
  0xc3, 0xff, 0xfc, 0x7f, 0xfc, 
  0xe3, 0xff, 0xfc, 0x7f, 0xfc, 
  0xf1, 0xff, 0xfc, 0x7f, 0xfc, 
  0xf1, 0xff, 0xfc, 0x7f, 0xfc, 
  0xf8, 0xff, 0xfc, 0x7f, 0xfc, 
  0xf9, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
};

const lv_img_dsc_t layer_num_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 38,
  .header.h = 53,
  .data_size = 274,
  .data = layer_num_img_map,
};

#ifndef LV_ATTRIBUTE_IMG_LAYER_SYM_IMG
#define LV_ATTRIBUTE_IMG_LAYER_SYM_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_LAYER_SYM_IMG uint8_t layer_sym_img_map[] = {
  0xeb, 0xeb, 0xeb, 0xff, 	/*Color of index 0*/
  0x07, 0x07, 0x07, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xfc, 0x0f, 0xfc, 
  0xff, 0xc7, 0xf8, 0x07, 0xfc, 
  0xff, 0xc7, 0xf0, 0x07, 0xfc, 
  0xff, 0xcf, 0xe1, 0xc3, 0xfc, 
  0xff, 0xcf, 0xe1, 0xf3, 0xfc, 
  0xfc, 0x0f, 0xe3, 0xf0, 0x3c, 
  0xfc, 0x0f, 0xc3, 0xf0, 0x1c, 
  0xfc, 0x0f, 0xc7, 0xf0, 0x1c, 
  0xff, 0xc7, 0x87, 0xf1, 0xfc, 
  0xff, 0xc7, 0x8f, 0xf3, 0xfc, 
  0xff, 0xc0, 0x0f, 0xe3, 0xfc, 
  0xff, 0xe0, 0x1f, 0xe3, 0xfc, 
  0xff, 0xf0, 0x3f, 0xe3, 0xfc, 
  0xff, 0xfd, 0xff, 0xf7, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xf9, 0xfc, 
  0xff, 0xff, 0xe3, 0xf1, 0xfc, 
  0xff, 0xff, 0xe0, 0x41, 0xfc, 
  0xff, 0xff, 0xe0, 0x03, 0xfc, 
  0xff, 0xc1, 0xfe, 0x07, 0xfc, 
  0xff, 0x80, 0x7c, 0x03, 0xfc, 
  0xff, 0x80, 0x3c, 0x23, 0xfc, 
  0xff, 0x1f, 0x10, 0xf1, 0xfc, 
  0xff, 0x1f, 0x81, 0xf9, 0xfc, 
  0xff, 0x1f, 0x83, 0xf9, 0xfc, 
  0xff, 0x1f, 0x07, 0xf1, 0xfc, 
  0xff, 0x80, 0x03, 0xf1, 0xfc, 
  0xff, 0x80, 0x20, 0xc1, 0xfc, 
  0xff, 0xe0, 0x70, 0x03, 0xfc, 
  0xff, 0xff, 0xf8, 0x07, 0xfc, 
  0xff, 0xff, 0xff, 0x1f, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xfc, 0x7e, 0x7f, 0xfc, 
  0xff, 0x9c, 0x7e, 0x7f, 0xfc, 
  0xff, 0x00, 0x7e, 0x7f, 0xfc, 
  0xff, 0x80, 0x02, 0x7f, 0xfc, 
  0xff, 0xf0, 0x00, 0x1f, 0xfc, 
  0xff, 0xfc, 0x00, 0x01, 0xfc, 
  0xff, 0xfc, 0x7c, 0x01, 0xfc, 
  0xff, 0xfc, 0x7e, 0x61, 0xfc, 
  0xff, 0x04, 0x7e, 0x7f, 0xfc, 
  0xff, 0x80, 0x3e, 0x7f, 0xfc, 
  0xff, 0x80, 0x00, 0x7f, 0xfc, 
  0xff, 0xf8, 0x00, 0x0f, 0xfc, 
  0xff, 0xfc, 0x40, 0x01, 0xfc, 
  0xff, 0xfc, 0x7c, 0x01, 0xfc, 
  0xff, 0xfc, 0x7e, 0x79, 0xfc, 
  0xff, 0xfc, 0x7e, 0x7f, 0xfc, 
};

const lv_img_dsc_t layer_sym_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 38,
  .header.h = 53,
  .data_size = 274,
  .data = layer_sym_img_map,
};

#ifndef LV_ATTRIBUTE_IMG_LAYER_KEY_IMG
#define LV_ATTRIBUTE_IMG_LAYER_KEY_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_LAYER_KEY_IMG uint8_t layer_key_img_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0xe4, 0xe0, 0xe1, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x7f, 0xff, 0xfe, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x01, 0x00, 
  0x00, 0x80, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0xe0, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe0, 0x01, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0x07, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x8e, 0xe7, 0x71, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x00, 
  0x00, 0x7f, 0xff, 0xfe, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t layer_key_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 38,
  .header.h = 53,
  .data_size = 274,
  .data = layer_key_img_map,
};
