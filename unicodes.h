#pragma once

enum unicodemap_names {
  SNEK,
  SPK,
  STAR,
  OM,
  MUS
};

const uint32_t PROGMEM unicode_map[] = {
  [SNEK] = 0x1F40D,
  [SPK] = 0x2728,
  [STAR] = 0x2605
  [OM] = 0x0950,
  [MUS] = 0x266C,
};
