/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <zephyr/kernel.h>
#include <zephyr/random/random.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/battery.h>
#include <zmk/display.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/split/bluetooth/peripheral.h>
#include <zmk/events/split_peripheral_status_changed.h>
#include <zmk/usb.h>
#include <zmk/ble.h>

#include "peripheral_status.h"

// LV_IMG_DECLARE(corne_calibration_1);
// LV_IMG_DECLARE(corne_calibration_2);
// LV_IMG_DECLARE(corne_calibration_3);
// LV_IMG_DECLARE(corne_calibration_4);
// LV_IMG_DECLARE(corne_calibration_5);
// LV_IMG_DECLARE(corne_calibration_6);

// LV_IMG_DECLARE(ba_0001);
// LV_IMG_DECLARE(ba_0009);
// LV_IMG_DECLARE(ba_0016);

// const lv_img_dsc_t *anim_imgs[] = {
//     &corne_calibration_1,
//     &corne_calibration_2,
//     &corne_calibration_3,
//     &corne_calibration_4,
//     &corne_calibration_5,
//     &corne_calibration_6,
// };

// const lv_img_dsc_t *anim_imgs[] = {
//     &ba_0001,
//     &ba_0009,
//     &ba_0016,
// };


//#region declare
LV_IMG_DECLARE(ba_0001);
LV_IMG_DECLARE(ba_0002);
LV_IMG_DECLARE(ba_0003);
LV_IMG_DECLARE(ba_0004);
LV_IMG_DECLARE(ba_0005);
LV_IMG_DECLARE(ba_0006);
LV_IMG_DECLARE(ba_0007);
LV_IMG_DECLARE(ba_0008);
LV_IMG_DECLARE(ba_0009);
LV_IMG_DECLARE(ba_0010);
LV_IMG_DECLARE(ba_0011);
LV_IMG_DECLARE(ba_0012);
LV_IMG_DECLARE(ba_0013);
LV_IMG_DECLARE(ba_0014);
LV_IMG_DECLARE(ba_0015);
LV_IMG_DECLARE(ba_0016);
LV_IMG_DECLARE(ba_0017);
LV_IMG_DECLARE(ba_0018);
LV_IMG_DECLARE(ba_0019);
LV_IMG_DECLARE(ba_0020);
LV_IMG_DECLARE(ba_0021);
LV_IMG_DECLARE(ba_0022);
LV_IMG_DECLARE(ba_0023);
LV_IMG_DECLARE(ba_0024);
LV_IMG_DECLARE(ba_0025);
LV_IMG_DECLARE(ba_0026);
LV_IMG_DECLARE(ba_0027);
LV_IMG_DECLARE(ba_0028);
LV_IMG_DECLARE(ba_0029);
LV_IMG_DECLARE(ba_0030);
LV_IMG_DECLARE(ba_0031);
LV_IMG_DECLARE(ba_0032);
LV_IMG_DECLARE(ba_0033);
LV_IMG_DECLARE(ba_0034);
LV_IMG_DECLARE(ba_0035);
LV_IMG_DECLARE(ba_0036);
LV_IMG_DECLARE(ba_0037);
LV_IMG_DECLARE(ba_0038);
LV_IMG_DECLARE(ba_0039);
LV_IMG_DECLARE(ba_0040);
LV_IMG_DECLARE(ba_0041);
LV_IMG_DECLARE(ba_0042);
LV_IMG_DECLARE(ba_0043);
LV_IMG_DECLARE(ba_0044);
LV_IMG_DECLARE(ba_0045);
LV_IMG_DECLARE(ba_0046);
LV_IMG_DECLARE(ba_0047);
LV_IMG_DECLARE(ba_0048);
LV_IMG_DECLARE(ba_0049);
LV_IMG_DECLARE(ba_0050);
LV_IMG_DECLARE(ba_0051);
LV_IMG_DECLARE(ba_0052);
LV_IMG_DECLARE(ba_0053);
LV_IMG_DECLARE(ba_0054);
LV_IMG_DECLARE(ba_0055);
LV_IMG_DECLARE(ba_0056);
LV_IMG_DECLARE(ba_0057);
LV_IMG_DECLARE(ba_0058);
LV_IMG_DECLARE(ba_0059);
LV_IMG_DECLARE(ba_0060);
LV_IMG_DECLARE(ba_0061);
LV_IMG_DECLARE(ba_0062);
LV_IMG_DECLARE(ba_0063);
LV_IMG_DECLARE(ba_0064);
LV_IMG_DECLARE(ba_0065);
LV_IMG_DECLARE(ba_0066);
LV_IMG_DECLARE(ba_0067);
LV_IMG_DECLARE(ba_0068);
LV_IMG_DECLARE(ba_0069);
LV_IMG_DECLARE(ba_0070);
LV_IMG_DECLARE(ba_0071);
LV_IMG_DECLARE(ba_0072);
LV_IMG_DECLARE(ba_0073);
LV_IMG_DECLARE(ba_0074);
LV_IMG_DECLARE(ba_0075);
LV_IMG_DECLARE(ba_0076);
LV_IMG_DECLARE(ba_0077);
LV_IMG_DECLARE(ba_0078);
LV_IMG_DECLARE(ba_0079);
LV_IMG_DECLARE(ba_0080);
LV_IMG_DECLARE(ba_0081);
LV_IMG_DECLARE(ba_0082);
LV_IMG_DECLARE(ba_0083);
LV_IMG_DECLARE(ba_0084);
LV_IMG_DECLARE(ba_0085);
LV_IMG_DECLARE(ba_0086);
LV_IMG_DECLARE(ba_0087);
LV_IMG_DECLARE(ba_0088);
LV_IMG_DECLARE(ba_0089);
LV_IMG_DECLARE(ba_0090);
LV_IMG_DECLARE(ba_0091);
LV_IMG_DECLARE(ba_0092);
LV_IMG_DECLARE(ba_0093);
LV_IMG_DECLARE(ba_0094);
LV_IMG_DECLARE(ba_0095);
LV_IMG_DECLARE(ba_0096);
LV_IMG_DECLARE(ba_0097);
LV_IMG_DECLARE(ba_0098);
LV_IMG_DECLARE(ba_0099);
LV_IMG_DECLARE(ba_0100);
LV_IMG_DECLARE(ba_0101);
LV_IMG_DECLARE(ba_0102);
LV_IMG_DECLARE(ba_0103);
LV_IMG_DECLARE(ba_0104);
LV_IMG_DECLARE(ba_0105);
LV_IMG_DECLARE(ba_0106);
LV_IMG_DECLARE(ba_0107);
LV_IMG_DECLARE(ba_0108);
LV_IMG_DECLARE(ba_0109);
LV_IMG_DECLARE(ba_0110);
LV_IMG_DECLARE(ba_0111);
LV_IMG_DECLARE(ba_0112);
LV_IMG_DECLARE(ba_0113);
LV_IMG_DECLARE(ba_0114);
LV_IMG_DECLARE(ba_0115);
LV_IMG_DECLARE(ba_0116);
LV_IMG_DECLARE(ba_0117);
LV_IMG_DECLARE(ba_0118);
LV_IMG_DECLARE(ba_0119);
LV_IMG_DECLARE(ba_0120);
LV_IMG_DECLARE(ba_0121);
LV_IMG_DECLARE(ba_0122);
LV_IMG_DECLARE(ba_0123);
LV_IMG_DECLARE(ba_0124);
LV_IMG_DECLARE(ba_0125);
LV_IMG_DECLARE(ba_0126);
LV_IMG_DECLARE(ba_0127);
LV_IMG_DECLARE(ba_0128);
LV_IMG_DECLARE(ba_0129);
LV_IMG_DECLARE(ba_0130);
LV_IMG_DECLARE(ba_0131);
LV_IMG_DECLARE(ba_0132);
LV_IMG_DECLARE(ba_0133);
LV_IMG_DECLARE(ba_0134);
LV_IMG_DECLARE(ba_0135);
LV_IMG_DECLARE(ba_0136);
LV_IMG_DECLARE(ba_0137);
LV_IMG_DECLARE(ba_0138);
LV_IMG_DECLARE(ba_0139);
LV_IMG_DECLARE(ba_0140);
LV_IMG_DECLARE(ba_0141);
LV_IMG_DECLARE(ba_0142);
LV_IMG_DECLARE(ba_0143);
LV_IMG_DECLARE(ba_0144);
LV_IMG_DECLARE(ba_0145);
LV_IMG_DECLARE(ba_0146);
LV_IMG_DECLARE(ba_0147);
LV_IMG_DECLARE(ba_0148);
LV_IMG_DECLARE(ba_0149);
LV_IMG_DECLARE(ba_0150);
LV_IMG_DECLARE(ba_0151);
LV_IMG_DECLARE(ba_0152);
LV_IMG_DECLARE(ba_0153);
LV_IMG_DECLARE(ba_0154);
LV_IMG_DECLARE(ba_0155);
LV_IMG_DECLARE(ba_0156);
LV_IMG_DECLARE(ba_0157);
LV_IMG_DECLARE(ba_0158);
LV_IMG_DECLARE(ba_0159);
LV_IMG_DECLARE(ba_0160);
LV_IMG_DECLARE(ba_0161);
LV_IMG_DECLARE(ba_0162);
LV_IMG_DECLARE(ba_0163);
LV_IMG_DECLARE(ba_0164);
LV_IMG_DECLARE(ba_0165);
LV_IMG_DECLARE(ba_0166);
LV_IMG_DECLARE(ba_0167);
LV_IMG_DECLARE(ba_0168);
LV_IMG_DECLARE(ba_0169);
LV_IMG_DECLARE(ba_0170);
LV_IMG_DECLARE(ba_0171);
LV_IMG_DECLARE(ba_0172);
LV_IMG_DECLARE(ba_0173);
LV_IMG_DECLARE(ba_0174);
LV_IMG_DECLARE(ba_0175);
LV_IMG_DECLARE(ba_0176);
LV_IMG_DECLARE(ba_0177);
LV_IMG_DECLARE(ba_0178);
LV_IMG_DECLARE(ba_0179);
LV_IMG_DECLARE(ba_0180);
LV_IMG_DECLARE(ba_0181);
LV_IMG_DECLARE(ba_0182);
LV_IMG_DECLARE(ba_0183);
LV_IMG_DECLARE(ba_0184);
LV_IMG_DECLARE(ba_0185);
LV_IMG_DECLARE(ba_0186);
LV_IMG_DECLARE(ba_0187);
LV_IMG_DECLARE(ba_0188);
LV_IMG_DECLARE(ba_0189);
LV_IMG_DECLARE(ba_0190);
LV_IMG_DECLARE(ba_0191);
LV_IMG_DECLARE(ba_0192);
LV_IMG_DECLARE(ba_0193);
LV_IMG_DECLARE(ba_0194);
LV_IMG_DECLARE(ba_0195);
LV_IMG_DECLARE(ba_0196);
LV_IMG_DECLARE(ba_0197);
LV_IMG_DECLARE(ba_0198);
LV_IMG_DECLARE(ba_0199);
LV_IMG_DECLARE(ba_0200);
LV_IMG_DECLARE(ba_0201);
LV_IMG_DECLARE(ba_0202);
LV_IMG_DECLARE(ba_0203);
LV_IMG_DECLARE(ba_0204);
LV_IMG_DECLARE(ba_0205);
LV_IMG_DECLARE(ba_0206);
LV_IMG_DECLARE(ba_0207);
LV_IMG_DECLARE(ba_0208);
LV_IMG_DECLARE(ba_0209);
LV_IMG_DECLARE(ba_0210);
LV_IMG_DECLARE(ba_0211);
LV_IMG_DECLARE(ba_0212);
LV_IMG_DECLARE(ba_0213);
LV_IMG_DECLARE(ba_0214);
LV_IMG_DECLARE(ba_0215);
LV_IMG_DECLARE(ba_0216);
LV_IMG_DECLARE(ba_0217);
LV_IMG_DECLARE(ba_0218);
LV_IMG_DECLARE(ba_0219);
LV_IMG_DECLARE(ba_0220);
LV_IMG_DECLARE(ba_0221);
LV_IMG_DECLARE(ba_0222);
LV_IMG_DECLARE(ba_0223);
LV_IMG_DECLARE(ba_0224);
LV_IMG_DECLARE(ba_0225);
LV_IMG_DECLARE(ba_0226);
LV_IMG_DECLARE(ba_0227);
LV_IMG_DECLARE(ba_0228);
LV_IMG_DECLARE(ba_0229);
LV_IMG_DECLARE(ba_0230);
LV_IMG_DECLARE(ba_0231);
LV_IMG_DECLARE(ba_0232);
LV_IMG_DECLARE(ba_0233);
LV_IMG_DECLARE(ba_0234);
LV_IMG_DECLARE(ba_0235);
LV_IMG_DECLARE(ba_0236);
LV_IMG_DECLARE(ba_0237);
LV_IMG_DECLARE(ba_0238);
LV_IMG_DECLARE(ba_0239);
LV_IMG_DECLARE(ba_0240);
LV_IMG_DECLARE(ba_0241);
LV_IMG_DECLARE(ba_0242);
LV_IMG_DECLARE(ba_0243);
LV_IMG_DECLARE(ba_0244);
LV_IMG_DECLARE(ba_0245);
LV_IMG_DECLARE(ba_0246);
LV_IMG_DECLARE(ba_0247);
LV_IMG_DECLARE(ba_0248);
LV_IMG_DECLARE(ba_0249);
LV_IMG_DECLARE(ba_0250);
//#endregion

const lv_img_dsc_t *anim_imgs[] = {
    &ba_0001,
    &ba_0002,
    &ba_0003,
    &ba_0004,
    &ba_0005,
    &ba_0006,
    &ba_0007,
    &ba_0008,
    &ba_0009,
    &ba_0010,
    &ba_0011,
    &ba_0012,
    &ba_0013,
    &ba_0014,
    &ba_0015,
    &ba_0016,
    &ba_0017,
    &ba_0018,
    &ba_0019,
    &ba_0020,
    &ba_0021,
    &ba_0022,
    &ba_0023,
    &ba_0024,
    &ba_0025,
    &ba_0026,
    &ba_0027,
    &ba_0028,
    &ba_0029,
    &ba_0030,
    &ba_0031,
    &ba_0032,
    &ba_0033,
    &ba_0034,
    &ba_0035,
    &ba_0036,
    &ba_0037,
    &ba_0038,
    &ba_0039,
    &ba_0040,
    &ba_0041,
    &ba_0042,
    &ba_0043,
    &ba_0044,
    &ba_0045,
    &ba_0046,
    &ba_0047,
    &ba_0048,
    &ba_0049,
    &ba_0050,
    &ba_0051,
    &ba_0052,
    &ba_0053,
    &ba_0054,
    &ba_0055,
    &ba_0056,
    &ba_0057,
    &ba_0058,
    &ba_0059,
    &ba_0060,
    &ba_0061,
    &ba_0062,
    &ba_0063,
    &ba_0064,
    &ba_0065,
    &ba_0066,
    &ba_0067,
    &ba_0068,
    &ba_0069,
    &ba_0070,
    &ba_0071,
    &ba_0072,
    &ba_0073,
    &ba_0074,
    &ba_0075,
    &ba_0076,
    &ba_0077,
    &ba_0078,
    &ba_0079,
    &ba_0080,
    &ba_0081,
    &ba_0082,
    &ba_0083,
    &ba_0084,
    &ba_0085,
    &ba_0086,
    &ba_0087,
    &ba_0088,
    &ba_0089,
    &ba_0090,
    &ba_0091,
    &ba_0092,
    &ba_0093,
    &ba_0094,
    &ba_0095,
    &ba_0096,
    &ba_0097,
    &ba_0098,
    &ba_0099,
    &ba_0100,
    &ba_0101,
    &ba_0102,
    &ba_0103,
    &ba_0104,
    &ba_0105,
    &ba_0106,
    &ba_0107,
    &ba_0108,
    &ba_0109,
    &ba_0110,
    &ba_0111,
    &ba_0112,
    &ba_0113,
    &ba_0114,
    &ba_0115,
    &ba_0116,
    &ba_0117,
    &ba_0118,
    &ba_0119,
    &ba_0120,
    &ba_0121,
    &ba_0122,
    &ba_0123,
    &ba_0124,
    &ba_0125,
    &ba_0126,
    &ba_0127,
    // &ba_0128,
    // &ba_0129,
    // &ba_0130,
    // &ba_0131,
    // &ba_0132,
    // &ba_0133,
    // &ba_0134,
    // &ba_0135,
    // &ba_0136,
    // &ba_0137,
    // &ba_0138,
    // &ba_0139,
    // &ba_0140,
    // &ba_0141,
    // &ba_0142,
    // &ba_0143,
    // &ba_0144,
    // &ba_0145,
    // &ba_0146,
    // &ba_0147,
    // &ba_0148,
    // &ba_0149,
    // &ba_0150,
    // &ba_0151,
    // &ba_0152,
    // &ba_0153,
    // &ba_0154,
    // &ba_0155,
    // &ba_0156,
    // &ba_0157,
    // &ba_0158,
    // &ba_0159,
    // &ba_0160,
    // &ba_0161,
    // &ba_0162,
    // &ba_0163,
    // &ba_0164,
    // &ba_0165,
    // &ba_0166,
    // &ba_0167,
    // &ba_0168,
    // &ba_0169,
    // &ba_0170,
    // &ba_0171,
    // &ba_0172,
    // &ba_0173,
    // &ba_0174,
    // &ba_0175,
    // &ba_0176,
    // &ba_0177,
    // &ba_0178,
    // &ba_0179,
    // &ba_0180,
    // &ba_0181,
    // &ba_0182,
    // &ba_0183,
    // &ba_0184,
    // &ba_0185,
    // &ba_0186,
    // &ba_0187,
    // &ba_0188,
    // &ba_0189,
    // &ba_0190,
    // &ba_0191,
    // &ba_0192,
    // &ba_0193,
    // &ba_0194,
    // &ba_0195,
    // &ba_0196,
    // &ba_0197,
    // &ba_0198,
    // &ba_0199,
    // &ba_0200,
    // &ba_0201,
    // &ba_0202,
    // &ba_0203,
    // &ba_0204,
    // &ba_0205,
    // &ba_0206,
    // &ba_0207,
    // &ba_0208,
    // &ba_0209,
    // &ba_0210,
    // &ba_0211,
    // &ba_0212,
    // &ba_0213,
    // &ba_0214,
    // &ba_0215,
    // &ba_0216,
    // &ba_0217,
    // &ba_0218,
    // &ba_0219,
    // &ba_0220,
    // &ba_0221,
    // &ba_0222,
    // &ba_0223,
    // &ba_0224,
    // &ba_0225,
    // &ba_0226,
    // &ba_0227,
    // &ba_0228,
    // &ba_0229,
    // &ba_0230,
    // &ba_0231,
    // &ba_0232,
    // &ba_0233,
    // &ba_0234,
    // &ba_0235,
    // &ba_0236,
    // &ba_0237,
    // &ba_0238,
    // &ba_0239,
    // &ba_0240,
    // &ba_0241,
    // &ba_0242,
    // &ba_0243,
    // &ba_0244,
    // &ba_0245,
    // &ba_0246,
    // &ba_0247,
    // &ba_0248,
    // &ba_0249,
    // &ba_0250,
};


static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct peripheral_status_state
{
    bool connected;
};

static void draw_top(lv_obj_t *widget, lv_color_t cbuf[], const struct status_state *state)
{
    lv_obj_t *canvas = lv_obj_get_child(widget, 0);

    lv_draw_label_dsc_t label_dsc;
    init_label_dsc(&label_dsc, LVGL_FOREGROUND, &lv_font_montserrat_16, LV_TEXT_ALIGN_RIGHT);
    lv_draw_rect_dsc_t rect_black_dsc;
    init_rect_dsc(&rect_black_dsc, LVGL_BACKGROUND);

    // Fill background
    lv_canvas_draw_rect(canvas, 0, 0, CANVAS_SIZE, CANVAS_SIZE, &rect_black_dsc);

    // Draw battery
    draw_battery(canvas, state);

    // Draw output status
    lv_canvas_draw_text(canvas, 0, 0, CANVAS_SIZE, &label_dsc,
                        state->connected ? LV_SYMBOL_WIFI : LV_SYMBOL_CLOSE);

    // Rotate canvas
    rotate_canvas(canvas, cbuf);
}

static void set_battery_status(struct zmk_widget_status *widget,
                               struct battery_status_state state)
{
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
    widget->state.charging = state.usb_present;
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

    widget->state.battery = state.level;

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void battery_status_update_cb(struct battery_status_state state)
{
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_status(widget, state); }
}

static struct battery_status_state battery_status_get_state(const zmk_event_t *eh)
{
    return (struct battery_status_state){
        .level = zmk_battery_state_of_charge(),
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
        .usb_present = zmk_usb_is_powered(),
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct battery_status_state,
                            battery_status_update_cb, battery_status_get_state)

ZMK_SUBSCRIPTION(widget_battery_status, zmk_battery_state_changed);
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
ZMK_SUBSCRIPTION(widget_battery_status, zmk_usb_conn_state_changed);
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

static struct peripheral_status_state get_state(const zmk_event_t *_eh)
{
    return (struct peripheral_status_state){.connected = zmk_split_bt_peripheral_is_connected()};
}

static void set_connection_status(struct zmk_widget_status *widget,
                                  struct peripheral_status_state state)
{
    widget->state.connected = state.connected;

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void output_status_update_cb(struct peripheral_status_state state)
{
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_connection_status(widget, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_peripheral_status, struct peripheral_status_state,
                            output_status_update_cb, get_state)
ZMK_SUBSCRIPTION(widget_peripheral_status, zmk_split_peripheral_status_changed);

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent)
{
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 160, 68);
    lv_obj_t *top = lv_canvas_create(widget->obj);
    lv_obj_align(top, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(top, widget->cbuf, CANVAS_SIZE, CANVAS_SIZE, LV_IMG_CF_TRUE_COLOR);

    // lv_obj_t *art = lv_img_create(widget->obj);
    // bool random = sys_rand32_get() & 1;
    // // lv_img_set_src(art, random ? &balloon : &mountain);
    // lv_img_set_src(art, &corne_calibration);


    lv_obj_t * art = lv_animimg_create(widget->obj);            //<--
    lv_obj_center(art);                                         //<--
    lv_animimg_set_src(art, (const void **) anim_imgs, 127);     //<--
    lv_animimg_set_duration(art, 127 * 1000 / 3);                         //<--
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);  //<--
    lv_animimg_start(art);                                      //<--

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);


    sys_slist_append(&widgets, &widget->node);
    widget_battery_status_init();
    widget_peripheral_status_init();

    return 0;
}

lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget) { return widget->obj; }
