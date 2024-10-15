/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif


#ifndef LV_ATTRIBUTE_IMG_TANTE
#define LV_ATTRIBUTE_IMG_TANTE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_TANTE uint8_t tante_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 1*/

  0xd5, 0x5d, 0xdd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x51, 0x10, 0x55, 0x45, 0x55, 0x55, 0x7f, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xe8, 0x80, 0xa8, 0xaa, 0xaa, 0x80, 0x08, 0x00, 0x00, 0x63, 0xff, 0xfe, 0xbf, 0xff, 0xf0, 
  0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xf0, 
  0xff, 0xff, 0xbf, 0xfe, 0x00, 0x3b, 0xbb, 0xba, 0x00, 0x20, 0x00, 0x00, 0x3b, 0xff, 0xbf, 0x9f, 0xff, 0xf0, 
  0xdd, 0xdd, 0x55, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x15, 0x55, 0x51, 0x11, 0x5d, 0xd5, 0x55, 0x5f, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 0xee, 0xae, 0xe8, 0x80, 0xaa, 0x80, 0x00, 0x3f, 0xff, 0xeb, 0xef, 0xff, 0xf0, 
  0x55, 0x75, 0x75, 0x55, 0x51, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x04, 0x15, 0x55, 0x55, 0x57, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xfb, 0xb8, 0xbb, 0xbb, 0xba, 0x20, 0x3b, 0xa0, 0x00, 0x0b, 0xff, 0xbb, 0xbb, 0xff, 0xf0, 
  0xdd, 0x5d, 0x5d, 0xfd, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x11, 0x15, 0x55, 0x55, 0x55, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xa8, 0x2e, 0xe8, 0x00, 0x02, 0xfe, 0xfe, 0xff, 0xff, 0xf0, 
  0x77, 0x77, 0x57, 0x55, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x15, 0x55, 0x55, 0x57, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xbb, 0xba, 0x22, 0x3b, 0xba, 0x00, 0x00, 0x3b, 0xbf, 0xbf, 0xff, 0xf0, 
  0xdd, 0xdd, 0xd5, 0x55, 0x5d, 0xdd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x51, 0x15, 0x55, 0x57, 0xff, 0xf0, 
  0xff, 0xff, 0xfa, 0xe8, 0xff, 0xff, 0xff, 0xea, 0xa8, 0xaa, 0xe8, 0x8a, 0x80, 0x0a, 0xef, 0xef, 0xff, 0xf0, 
  0x77, 0x75, 0x55, 0x55, 0x55, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x05, 0x55, 0x57, 0xff, 0xf0, 
  0xff, 0xff, 0xbb, 0xfe, 0x23, 0xff, 0xff, 0xbb, 0xba, 0xa2, 0xba, 0x22, 0x80, 0x02, 0xbb, 0xbf, 0xff, 0xf0, 
  0xdd, 0xdd, 0x55, 0x55, 0x55, 0x5d, 0xdd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x11, 0x55, 0x5f, 0xff, 0xf0, 
  0xff, 0xff, 0xeb, 0xff, 0xea, 0xff, 0xff, 0xfe, 0xef, 0xea, 0x3a, 0xfe, 0xa8, 0x00, 0xaf, 0xbf, 0xff, 0xf0, 
  0x77, 0x55, 0x55, 0x55, 0x55, 0x57, 0x77, 0x55, 0x55, 0x54, 0x15, 0x55, 0x54, 0x41, 0x55, 0x57, 0xff, 0xf0, 
  0xff, 0xff, 0xbb, 0xbb, 0x9b, 0xbf, 0xff, 0xfb, 0xbb, 0xb8, 0x03, 0xbf, 0xb8, 0x00, 0x0b, 0xbf, 0xff, 0xf0, 
  0xdd, 0xdd, 0x55, 0x55, 0x55, 0x57, 0xdf, 0xfd, 0x55, 0x54, 0x15, 0x55, 0x51, 0x11, 0x55, 0x5f, 0xff, 0xf0, 
  0xff, 0xff, 0xeb, 0xff, 0x8a, 0xbf, 0xff, 0xff, 0xff, 0xe8, 0x00, 0xfe, 0xe0, 0x00, 0x2a, 0xff, 0xff, 0xf0, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x77, 0xff, 0x55, 0x55, 0x45, 0x55, 0x55, 0x40, 0x55, 0x57, 0xff, 0xf0, 
  0x03, 0xfb, 0xfb, 0xfb, 0xa3, 0xbb, 0xff, 0xff, 0xbf, 0xba, 0x00, 0xfb, 0xe0, 0x00, 0x3b, 0xbf, 0xff, 0xf0, 
  0x10, 0x51, 0x55, 0x5d, 0x15, 0x55, 0x5f, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x50, 0x55, 0x5f, 0xff, 0xf0, 
  0x00, 0x00, 0xbe, 0x8f, 0x8e, 0xff, 0xff, 0xff, 0xfe, 0xfa, 0xa8, 0x2f, 0xa8, 0x00, 0x2f, 0xff, 0xff, 0xf0, 
  0x04, 0x44, 0x15, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x54, 0x55, 0x57, 0xff, 0xf0, 
  0x00, 0x00, 0x0f, 0x88, 0x2b, 0xbf, 0xff, 0xff, 0xff, 0xbb, 0xba, 0xbb, 0xa2, 0x00, 0x0b, 0xbf, 0xff, 0xf0, 
  0x01, 0x11, 0x05, 0x55, 0x55, 0x55, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x15, 0xdf, 0xff, 0xf0, 
  0x00, 0x00, 0x03, 0xf8, 0x8a, 0xff, 0xff, 0xff, 0xff, 0xee, 0xff, 0xea, 0xaa, 0x80, 0x0f, 0xff, 0xff, 0xf0, 
  0x00, 0x00, 0x01, 0x55, 0x55, 0x55, 0xff, 0xf7, 0x7d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xf0, 
  0x00, 0x00, 0x00, 0xfe, 0x3b, 0xbf, 0xff, 0xff, 0xff, 0xbb, 0xbf, 0xba, 0xa2, 0xa0, 0x3b, 0xff, 0xff, 0xf0, 
  0x11, 0x10, 0x10, 0x55, 0x55, 0x5f, 0xff, 0xdd, 0xfd, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xf0, 
  0x00, 0x00, 0x00, 0x3f, 0xee, 0xff, 0xff, 0xff, 0xfe, 0xee, 0xff, 0xea, 0xaa, 0xa8, 0xbf, 0xff, 0xff, 0xf0, 
  0x55, 0x54, 0x00, 0x55, 0x55, 0x7f, 0xf5, 0x55, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xf0, 
  0x00, 0x00, 0x00, 0x3b, 0xfb, 0xff, 0xfb, 0xbf, 0xff, 0xbb, 0xbf, 0xfb, 0xba, 0x22, 0x3f, 0xff, 0xff, 0xf0, 
  0x15, 0x11, 0x11, 0x15, 0x55, 0xff, 0xd5, 0x55, 0x55, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x5d, 0xff, 0xff, 0xf0, 
  0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xea, 0xef, 0xff, 0xff, 0xff, 0xea, 0xea, 0xaa, 0xff, 0xff, 0xff, 0xf0, 
  0x55, 0x54, 0x45, 0x55, 0x75, 0x75, 0x55, 0x55, 0x55, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xf0, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xfb, 0xbb, 0xbb, 0xbf, 0xbf, 0xfb, 0xbb, 0xba, 0xbb, 0xfb, 0xff, 0xff, 0xf0, 
  0x55, 0x51, 0x51, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x5d, 0x5d, 0xfd, 0x55, 0x55, 0x55, 0xf7, 0xff, 0xff, 0xf0, 
  0xa8, 0x80, 0x00, 0x2f, 0xff, 0xfa, 0xae, 0xaa, 0xfe, 0xff, 0xff, 0xbe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x55, 0x55, 0x55, 0x55, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x77, 0x55, 0x55, 0x57, 0x57, 0xff, 0xff, 0xf0, 
  0xa2, 0x20, 0x02, 0x2f, 0xff, 0xea, 0xbf, 0xbb, 0xbf, 0xbb, 0xff, 0xff, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x55, 0x55, 0x55, 0x55, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5d, 0xfd, 0x55, 0xdd, 0xdf, 0xff, 0xff, 0xf0, 
  0xaa, 0xaa, 0xaa, 0xaf, 0xff, 0xaa, 0xbe, 0xaa, 0xff, 0xea, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x55, 0x55, 0x55, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x75, 0x57, 0x75, 0x7f, 0xff, 0xff, 0xf0, 
  0xbb, 0xba, 0xba, 0xbf, 0xfb, 0xa2, 0xb2, 0xba, 0xbb, 0xba, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x55, 0x55, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5d, 0x55, 0x5d, 0x55, 0xff, 0xff, 0xff, 0xf0, 
  0xaf, 0xea, 0xff, 0xff, 0xef, 0xa8, 0xbe, 0xba, 0x0a, 0xaa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x55, 0x55, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xfb, 0xbb, 0xa2, 0xb3, 0xbe, 0x2b, 0xaa, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x5f, 0xdf, 0xdd, 0xd5, 0x55, 0x55, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xfe, 0xef, 0xaa, 0xba, 0xaa, 0xae, 0xaa, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x57, 0x55, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xfb, 0xbb, 0xba, 0xbe, 0xba, 0x3f, 0xba, 0x3f, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xd5, 0xdd, 0x5d, 0xd5, 0x55, 0x55, 0x5d, 0x55, 0x5d, 0x55, 0x5d, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xfe, 0x0f, 0xfe, 0xee, 0xfe, 0xae, 0xa8, 0xae, 0xa8, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x57, 0x77, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xfe, 0xff, 0xbb, 0xff, 0xbb, 0xbb, 0xab, 0xa2, 0x2e, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xdf, 0x5d, 0xd5, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xfe, 0xbf, 0xee, 0xee, 0xaa, 0xa8, 0x8a, 0xab, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x75, 0x55, 0x75, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xfb, 0xf1, 0xff, 0xbb, 0xfb, 0xbb, 0xbb, 0xa2, 0x2a, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xd5, 0xd5, 0x5d, 0xf4, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x5d, 0x5d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xbf, 0xfc, 0x2e, 0xff, 0xfe, 0xaa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x57, 0x57, 0x55, 0x75, 0x55, 0x7f, 0xff, 0x55, 0x57, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xbf, 0xf9, 0xff, 0xfb, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
};

const lv_img_dsc_t tante = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = tante_map,
};
