#pragma once

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(HSV_PINK);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
