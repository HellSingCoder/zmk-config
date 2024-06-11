/*
 *
 * Copyright (c) 2023 HellTM
 * SPDX-License-Identifier: MIT
 *
 */

#include <zmk/event_manager.h>
#include <zmk/hid.h>
#include <zmk/events/wpm_state_changed.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <dt-bindings/zmk/keys.h>
#include <zmk/events/keycode_state_changed.h>
#include <dt-bindings/zmk/modifiers.h>
#include "pet_status.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct wpm_status_state {
    uint8_t wpm;
};

// SIT
LV_IMG_DECLARE(pet_sit_0);
LV_IMG_DECLARE(pet_sit_1);
LV_IMG_DECLARE(pet_sit_2);
const void *pet_sit_images[] = {
    &pet_sit_0, 
    &pet_sit_1, 
    &pet_sit_2,
    &pet_sit_1,
};

// SLOW TYPING
LV_IMG_DECLARE(pet_walk_0);
LV_IMG_DECLARE(pet_walk_1);
LV_IMG_DECLARE(pet_walk_2);
const void *pet_walk_images[] = {
    &pet_walk_0, 
    &pet_walk_1, 
    &pet_walk_2,
    &pet_walk_1,
};

// FAST TYPING
LV_IMG_DECLARE(pet_run_0);
LV_IMG_DECLARE(pet_run_1);
LV_IMG_DECLARE(pet_run_2);
const void *pet_run_images[] = {
    &pet_run_0, 
    &pet_run_1, 
    &pet_run_2,
    &pet_run_1,
};

// JUMP
// note that this animation requires 4 different frames
LV_IMG_DECLARE(pet_jump_0);
LV_IMG_DECLARE(pet_jump_1);
LV_IMG_DECLARE(pet_jump_2);
LV_IMG_DECLARE(pet_jump_3);
const void *pet_jump_images[] = {
    &pet_jump_0, 
    &pet_jump_1, 
    &pet_jump_2, 
    &pet_jump_3,
};

// BARK
LV_IMG_DECLARE(pet_bark_0);
LV_IMG_DECLARE(pet_bark_1);
LV_IMG_DECLARE(pet_bark_2);
const void *pet_bark_images[] = {
    &pet_bark_0, 
    &pet_bark_1, 
    &pet_bark_2,
    &pet_bark_1,
};

// DOWN
LV_IMG_DECLARE(pet_down_0);
LV_IMG_DECLARE(pet_down_1);
LV_IMG_DECLARE(pet_down_2);
const void *pet_down_images[] = {
    &pet_down_0, 
    &pet_down_1, 
    &pet_down_2,
    &pet_down_1,
};

// FRAME DURATION
#define FRAME_DURATION_SIT 400
#define FRAME_DURATION_WALK 400
#define FRAME_DURATION_RUN 400
#define FRAME_DURATION_DOWN 400
#define FRAME_DURATION_BARK 400
#define FRAME_DURATION_JUMP 400

/* PET STATE */
enum pet_wpm_state {
    unknown,
    sit,
    walk,
    run,
};

enum pet_action_state {
    no_action,
    down,
    bark,
    jump,
};

struct pet_status {
    bool animation_locked = false;
    pet_wpm_state wpm_state = unknown;
    pet_wpm_state wpm_state_shown = unknown;
    pet_action_state action_state = no_action;
    pet_action_state action_state_shown = no_action;
} pet_state;

lv_anim_t anim;
const void **images;

lv_obj_t *zmk_widget_pet_status_obj(struct zmk_widget_pet_status *widget) { return widget->obj; }


static void set_animation(lv_obj_t *anim, struct pet_status *state) {
    if (!state.animation_locked) {
        switch (state.action_state) {
        case down:
                if (state.action_state_shown != state.action_state) {
                    lv_animimg_set_src(anim, SRC(pet_down_images));
                    lv_animimg_set_duration(anim, FRAME_DURATION_DOWN);
                    lv_animimg_set_repeat_count(anim, LV_ANIM_REPEAT_INFINITE);
                }
            break;
        case bark:
                if (state.action_state_shown != state.action_state) {
                    lv_animimg_set_src(anim, SRC(pet_bark_images));
                    lv_animimg_set_duration(anim, FRAME_DURATION_BARK);
                    lv_animimg_set_repeat_count(anim, LV_ANIM_REPEAT_INFINITE);
                }
            break;
        case jump:
                if (state.action_state_shown != state.action_state) {
                    // the jump can't be interrupted
                    state.animation_locked = true;
                    lv_animimg_set_src(anim, SRC(pet_down_images));
                    lv_animimg_set_duration(anim, FRAME_DURATION_JUMP);
                    lv_animimg_set_repeat_count(anim, 1);
                    lv_anim_set_completed_cb(anim, jump_completed_cb(state));
                }
            break;
        default:
            if (state.action_state_shown == no_action && state.wpm_state != state.wpm_state_shown) {
                switch (state.wpm_state) {
                    case sit:
                            lv_animimg_set_src(anim, SRC(pet_sit_images));
                            lv_animimg_set_duration(anim, FRAME_DURATION_SIT);
                            lv_animimg_set_repeat_count(anim, LV_ANIM_REPEAT_INFINITE);
                        break;
                    case walk:
                            lv_animimg_set_src(anim, SRC(pet_walk_images));
                            lv_animimg_set_duration(anim, FRAME_DURATION_WALK);
                            lv_animimg_set_repeat_count(anim, LV_ANIM_REPEAT_INFINITE);
                        break;
                    case run:
                            lv_animimg_set_src(anim, SRC(pet_run_images));
                            lv_animimg_set_duration(anim, FRAME_DURATION_RUN);
                            lv_animimg_set_repeat_count(anim, LV_ANIM_REPEAT_INFINITE);
                        break;
                    default:
                        // this shouldn't happen
                        break;
                }
                break;
                state.wpm_state_shown = state.wpm_state;
            }
        }
        state.action_state_shown = state.action_state;
        lv_animimg_start(anim);
    }
}

// unlocks animation changes after jump
void jump_completed_cb (struct pet_state *state) {
    state.animation_locked = false;
}

int zmk_widget_pet_status_init(struct zmk_widget_pet_status *widget, lv_obj_t *parent) {
    widget->obj = lv_animimg_create(parent);

    state.action_state = sit;
    init_anim(widget);

    sys_slist_append(&widgets, &widget->node);

    return 0;
}

void set_pet_action_state_based_on_modifiers() {
    // This allows better precision for held down keys
    // control and gui -> down
    // alt and shift -> bark
    if (((zmk_hid_get_explicit_mods() & MOD_LCTL) != 0) || ((zmk_hid_get_explicit_mods() & MOD_RCTL) != 0) || 
        ((zmk_hid_get_explicit_mods() & MOD_LGUI) != 0) || ((zmk_hid_get_explicit_mods() & MOD_RGUI) != 0)) {
        pet_state.action_state = down;
    } else if (((zmk_hid_get_explicit_mods() & MOD_LSFT) != 0) || ((zmk_hid_get_explicit_mods() & MOD_RSFT) != 0) ||
               ((zmk_hid_get_explicit_mods() & MOD_LALT) != 0) || ((zmk_hid_get_explicit_mods() & MOD_RALT) != 0)) {
        pet_state.action_state = bark;
    } else {
        if (pet_state.action_state != jump) {
            pet_state.action_state = no_action;
        }
    }

    // TODO add caps lock behavior here
}

int pet_wpm_event_listener(const zmk_event_t *eh) {
    struct zmk_widget_pet_status *widget;
    struct zmk_wpm_state_changed *ev = as_zmk_wpm_state_changed(eh);

    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {

        // Update pet status based on WPM.
        // Configurable in Kconfig.defconfig
        if (ev->state < CONFIG_CUSTOM_WIDGET_PET_WALK_WPM) {
            pet_state.wpm_state = sit;
        } else if (ev->state < CONFIG_CUSTOM_WIDGET_PET_RUN_WPM) {
            pet_state.wpm_state = walk;
        } else {
            pet_state.wpm_state = run;
        }
    }
    return ZMK_EV_EVENT_BUBBLE;
}

int pet_keycode_event_listener(const zmk_event_t *eh) {
    struct zmk_widget_pet_status *widget;
    const struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);

    // key presses
    if (ev) {
        switch (ev->keycode) {
            case HID_USAGE_KEY_KEYBOARD_DELETE_BACKSPACE:
            case HID_USAGE_KEY_KEYBOARD_ESCAPE:
            case HID_USAGE_KEY_KEYBOARD_RETURN_ENTER:
                if (ev->state) {
                    pet_state.action_state = pet_action_state.jump;
                }
                break;
            default:
                break;
        }
    }

    return ZMK_EV_EVENT_BUBBLE;
}

void wpm_status_update_cb(struct wpm_status_state state) {
    struct zmk_widget_pet_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_animation(widget->obj, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_wpm_status, struct wpm_status_state, wpm_status_update_cb,
                            wpm_status_get_state)
ZMK_SUBSCRIPTION(zmk_widget_pet_status, zmk_wpm_state_changed);

ZMK_LISTENER(zmk_widget_pet_status, pet_wpm_event_listener);
ZMK_SUBSCRIPTION(zmk_widget_pet_status, zmk_wpm_state_changed);

ZMK_LISTENER(keycode_state, pet_keycode_event_listener);
ZMK_SUBSCRIPTION(keycode_state, zmk_keycode_state_changed);