/* Copyright 2020 @wafflekeebs/@waffle#6666
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "split_util.h"
#include "keycodes.h"
#include "macros.h"
#ifdef UNICODEMAP_ENABLE
#   include "unicodes.h"
#endif
#ifdef OLED_DRIVER_ENABLE
#   include "oled.c"
#endif
#ifdef COMBO_ENABLE
#   include "combos.h"
#endif
#ifdef TAP_DANCE_ENABLE
#   include "tapdance.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    //-----------------------------------------------------------------------------------------------//
      SFA,     KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    SFCLN,
    //-----------------------------------------------------------------------------------------------//
      CTLTZ,   KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  CTLSLH,
    //-----------------------------------------------------------------------------------------------//
                        KC_MS_L, LOWER,   KC_SPC,       KC_BSPC, RAISE,   KC_MS_R
    ),

  [_LOWER] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      KC_1,    KC_2,    KC_3,     KC_4,     KC_5,          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
    //-----------------------------------------------------------------------------------------------//
      SFEXM,   KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,       KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  SFPRN,
    //-----------------------------------------------------------------------------------------------//
      CTLESC,  KC_TAB,  KC_CAPS,  KC_TILD,  KC_GRV,        KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT,  KC_RCTL,
    //-----------------------------------------------------------------------------------------------//
                        UC_M_MA,  KC_TRNS,  KC_SPC,        KC_VOLU,  KC_TRNS,  UC_M_WC
    ),

  [_RAISE] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,      UNIT,     UNIT2,   UNIT3,     UNIT4,       WEEB,
    //-----------------------------------------------------------------------------------------------//
      KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,      X(HAS),  X(SIDE),  KC_SCRIPT, KC_REGIONAL, KC_NOMODE,
    //-----------------------------------------------------------------------------------------------//
      QMKTD,    LINKSTD,  DOCSTD,   HAPSAD,   ALT_TAB,      X(UPAR), X(STAR), KC_BLOCKS, KC_WIDE,     MAKE,
    //-----------------------------------------------------------------------------------------------//
                            CG_NORM, KC_TRNS, KC_VOLD,      KC_BSPC,  KC_TRNS, CG_SWAP
    )
};
