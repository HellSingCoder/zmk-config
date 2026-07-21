/*
 *
 * Copyright (c) 2023 HellTM
 * SPDX-License-Identifier: MIT
 *
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include "layer_status.h"
#include <zmk/events/layer_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/endpoints.h>
#include <zmk/keymap.h>

LV_IMG_DECLARE(layer_0);
LV_IMG_DECLARE(layer_0_1);
const void *layer_0_images[] = {
    &layer_0, &layer_0_1,
};

LV_IMG_DECLARE(layer_1);
LV_IMG_DECLARE(layer_1_1);
const void *layer_1_images[] = {
    &layer_1, &layer_1_1,
};

LV_IMG_DECLARE(layer_2);
LV_IMG_DECLARE(layer_2_1);
const void *layer_2_images[] = {
    &layer_2, &layer_2_1,
};

LV_IMG_DECLARE(layer_3);
LV_IMG_DECLARE(layer_3_1);
const void *layer_3_images[] = {
    &layer_3, &layer_3_1,
};

LV_IMG_DECLARE(layer_unknown);
LV_IMG_DECLARE(layer_unknown_1);
const void *layer_unknown_images[] = {
    &layer_unknown, &layer_unknown_1,
};

// explicit function declarations
void init_anim(struct zmk_widget_layer_status *widget);

lv_anim_t anim;
const void **images;
int current_frame = 0;

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets); 

struct layer_status_state {
    uint8_t index;
    const char *label;
};

static struct layer_status_state get_state(const zmk_event_t *eh) {
    uint8_t index = zmk_keymap_highest_layer_active();
    return (struct layer_status_state){.index = index, .label = zmk_keymap_layer_name(index)};
}

void animate_images(void * var, int value) {
    lv_obj_t *obj = (lv_obj_t *)var;
    lv_img_set_src(obj, images[current_frame]);
    if (current_frame == 0){
        current_frame = 1;
    } else {
        current_frame = 0;
    }
}

static void set_layer_indicator(lv_obj_t *icon, struct layer_status_state state) {
    const char *layer_label = state.label;
    uint8_t active_layer_index = state.index;

    switch (active_layer_index) {
    case 0:
        images = layer_0_images;
        break;
    case 1:
        images = layer_1_images;
        break;
    case 2:
        images = layer_2_images;
        break;
    case 3:
        images = layer_3_images;
        break;
    default:
        images = layer_unknown_images;
    }

    // restart animation
    struct zmk_widget_layer_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        lv_anim_del(icon, (lv_anim_exec_xcb_t) animate_images);
        current_frame = 0;
        init_anim(widget);
    }
}

void init_anim(struct zmk_widget_layer_status *widget) {
    // Initialize the animation
    lv_anim_init(&anim);
    lv_anim_set_var(&anim, widget->obj);
    lv_anim_set_exec_cb(&anim, (lv_anim_exec_xcb_t) animate_images);
    lv_anim_set_time(&anim, 100);
    lv_anim_set_values(&anim, 0, 1);
    lv_anim_set_delay(&anim, 0);
    lv_anim_set_repeat_count(&anim, 0);
    lv_anim_start(&anim);
}

static void layer_status_update_cb(struct layer_status_state state) {
    struct zmk_widget_layer_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_layer_indicator(widget->obj, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_layer_status, struct layer_status_state, layer_status_update_cb, get_state)

ZMK_SUBSCRIPTION(widget_layer_status, zmk_layer_state_changed);

int zmk_widget_layer_status_init(struct zmk_widget_layer_status *widget, lv_obj_t *parent) {
    widget->obj = lv_img_create(parent);

    images = layer_0_images;
    init_anim(widget);

    widget_layer_status_init();
    return 0;
}

lv_obj_t *zmk_widget_layer_status_obj(struct zmk_widget_layer_status *widget) {
    return widget->obj;
}
