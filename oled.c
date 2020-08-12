#pragma once

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master())
    return OLED_ROTATION_180;
  return rotation;
}

static void render_status(void) {
  bool blink = (timer_read() % 1000) < 500;

  if (layer_state_is(_LOWER)) {
      oled_write_ln_P(blink ? PSTR("       > lo_") : PSTR("       > lo "), false);
      oled_write_P(PSTR("    nom nom"), false);
      oled_write_P(PSTR(""), false);
      oled_write_P(PSTR(""), false);
  } else if (layer_state_is(_RAISE)) {
      oled_write_ln_P(blink ? PSTR("       > hi_") : PSTR("       > hi "), false);
      oled_write_P(PSTR("    chomp"), false);
      oled_write_P(PSTR(""), false);
      oled_write_P(PSTR(""), false);
  } else if (layer_state_is(_ADJUST)) {
      oled_write_ln_P(blink ? PSTR("       > aj_") : PSTR("       > aj "), false);
      oled_write_P(PSTR("    Wafle Time!"), false);
      oled_write_P(PSTR(""), false);
      oled_write_P(PSTR(""), false);
  } else {
      oled_write_ln_P(blink ? PSTR("       > _  ") : PSTR("       >    "), false);
      oled_write_P(PSTR("    Waffle Time!"), false);
      oled_write_P(PSTR(""), false);
      oled_write_P(PSTR(""), false);
  }
}

void oled_task_user(void) {
      char wpm_string[5];

        oled_write_ln("WPM:", false);
        snprintf(wpm_string,
    sizeof(wpm_string), " %3d",
    get_current_wpm());
        oled_write(wpm_string, false);

  if (is_keyboard_master()) {
    render_status();
  } else {
    oled_scroll_left();
  }
}

#endif
