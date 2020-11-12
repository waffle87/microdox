#pragma once

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master())
    return OLED_ROTATION_180;
  return rotation;
}

static void render_logo(void) {
  static const char PROGMEM qmk_logo[] = {
     0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
    0
  };
  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
  bool blink = (timer_read() % 1000) < 500;

  if (layer_state_is(_LOWER)) {
    oled_write_ln_P(blink ? PSTR("       > lo_") : PSTR("       > lo "), false);
    oled_write_P(PSTR("       Layer: 01\n"), false);
  } else if (layer_state_is(_RAISE)) {
    oled_write_ln_P(blink ? PSTR("       > hi_") : PSTR("       > hi "), false);
    oled_write_P(PSTR("       Layer: 02\n"), false);
  } else if (layer_state_is(_ADJUST)) {
    oled_write_ln_P(blink ? PSTR("       > adj_") : PSTR("       > adj "), false);
    oled_write_P(PSTR("       Layer: 03\n"), false);
  } else {
    oled_write_ln_P(blink ? PSTR("       > _ ") : PSTR("       >     "), false);
    oled_write_P(PSTR("       Layer: 00\n"), false);
  }
}

void oled_task_user(void) {
  if (is_keyboard_master()) {
    char wpm_string[5];

      oled_write_ln("WPM:", false);
      snprintf(wpm_string,
    sizeof(wpm_string), " %3d",
    get_current_wpm());
      oled_write(wpm_string, false);

    render_status();
  } else {
    render_logo();
    oled_scroll_left();
  }
}

#endif
