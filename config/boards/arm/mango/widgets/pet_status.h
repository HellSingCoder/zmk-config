/*
 *
 * Copyright (c) 2023 HellTM
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

struct zmk_widget_pet_status {
    sys_snode_t node;
    lv_obj_t *obj;
};

int zmk_widget_pet_status_init(struct zmk_widget_pet_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_pet_status_obj(struct zmk_widget_pet_status *widget);