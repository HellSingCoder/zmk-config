#include "widgets/battery_status.h"
#include "widgets/peripheral_status.h"
#include "widgets/output_status.h"
#include "widgets/profile_status.h"
#include "widgets/layer_status.h"
#include "widgets/pet_status.h"
#include "custom_status_screen.h"

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

// LOGOS
LV_IMG_DECLARE(keyboard_logo);
LV_IMG_DECLARE(user_logo);

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS)
static struct zmk_widget_battery_status battery_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS)
static struct zmk_widget_output_status output_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PROFILE_STATUS)
static struct zmk_widget_profile_status profile_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_LAYER_STATUS)
static struct zmk_widget_layer_status layer_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PERIPHERAL_STATUS)
static struct zmk_widget_peripheral_status peripheral_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PET_STATUS)
static struct zmk_widget_pet_status pet_status_widget;
#endif

lv_obj_t *zmk_display_status_screen() {

    lv_obj_t *screen;
    screen = lv_obj_create(NULL);

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS)
    zmk_widget_battery_status_init(&battery_status_widget, screen);
    lv_obj_align(zmk_widget_battery_status_obj(&battery_status_widget), LV_ALIGN_TOP_LEFT, 0, 0);
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS)
    zmk_widget_output_status_init(&output_status_widget, screen);
    lv_obj_align(zmk_widget_output_status_obj(&output_status_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PROFILE_STATUS)
    zmk_widget_profile_status_init(&profile_status_widget, screen);
    lv_obj_align(zmk_widget_profile_status_obj(&profile_status_widget), LV_ALIGN_LEFT_MID, 35, 0);
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_LAYER_STATUS)
    zmk_widget_layer_status_init(&layer_status_widget, screen);
    lv_obj_align(zmk_widget_layer_status_obj(&layer_status_widget), LV_ALIGN_LEFT_MID, 60, 0);
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PERIPHERAL_STATUS)
    zmk_widget_peripheral_status_init(&peripheral_status_widget, screen);
    lv_obj_align(zmk_widget_peripheral_status_obj(&peripheral_status_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PET_STATUS)
    zmk_widget_pet_status_init(&pet_status_widget, screen);
    lv_obj_align(zmk_widget_pet_status_obj(&pet_status_widget), LV_ALIGN_RIGHT_MID, 0, 0);
#endif

#if !IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    lv_obj_t *keyboard_logo_icon;
    keyboard_logo_icon = lv_img_create(screen);
    lv_img_set_src(keyboard_logo_icon, &keyboard_logo);
    lv_obj_align(keyboard_logo_icon, LV_ALIGN_LEFT_MID, 50, 0);

    lv_obj_t *user_logo_icon;
    user_logo_icon = lv_img_create(screen);
    lv_img_set_src(user_logo_icon, &user_logo);
    lv_obj_align(user_logo_icon, LV_ALIGN_RIGHT_MID, 0, 0);
#endif

    return screen;
}