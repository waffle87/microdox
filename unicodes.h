#pragma once

enum unicodemap_names {
  SNEK,
  HAP,
  SPK
};

const uint32_t PROGMEM unicode_map[] = {
  [SNEK] = 0x1F40D,
  [HAP] = 0xFF3E,
  [SPK] = 0x2728,
};
