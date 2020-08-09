#pragma once

#include "config_common.h"

#define VENDOR_ID       0xF7E0
#define PRODUCT_ID      0x0412
#define DEVICE_VER      0x0000
#define MANUFACTURER    Boardsource
#define PRODUCT         waffle-dox

#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { B2, B6, B4, B5 }

#define MATRIX_COL_PINS { F4, F5, F6, F7, B1 }
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2

#define DEBOUNCE 5

#define DIODE_DIRECTION COL2ROW

#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN D3
#define RGBLED_SPLIT { 6, 6 }
#define EE_HANDS
#ifdef RGBLIGHT_ENABLE
#define RGBLED_NUM 12
#endif

#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC, UC_LNX
#define UNICODE_CYCLE_PERSIST false

#define AUTO_SHIFT_MODIFIERS
#define AUTO_SHIFT_TIMEOUT 150
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC

#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200

#define NO_ACTION_ONESHOT
