/* Copyright 2022 Vivek Srikrishnan
 * Adapted from Noah Frederick's setup
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
#include "my.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base layer (Qwerty)
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *                 │  ⇥  │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  '  │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *  Tap for Esc -- │  ⌃  │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  ⌃  │ -- Tap for Enter
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *    Tap for ( -- │  ⇧  │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │  ⇧  │ -- Tap for )
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *    Tap for [ -- │Mute │Hyper│  ⌥  │  ⌘  │Lower│ Nav │Space│Raise│ 	←  │  ↑  │  ↓  |  →  │
   *                 └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
   *                         /    Tap for Backspace __/                           
   */
  [QWERTY_LAYER] = LAYOUT_planck_grid_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_QUOT,
    CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, CTL_ENT,
    KC_LSPO, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSPC,
    KC_KB_MUTE, HYPER_L, KC_LALT, KC_LGUI, LOWER,  NAV_BSP, KC_SPC,  RAISE,   KC_RGUI, KC_RALT, HYPER_R, KC_MEH
  ),
  /* Base layer (Colemak)
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *                 │     │  Q  │  W  │  F  │  P  │  G  │  J  │  L  │  U  │  Y  │  ;  │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │  A  │  R  │  S  │  T  │  D  │  H  │  N  │  E  │  I  │  O  │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │  Z  │  X  │  C  │  V  │  B  │  K  │  M  │  ,  │  .  │  /  │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │     │     │     │     │     │     │     │     │     │     │
   *                 └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
   */
  [COLEMAK_LAYER] = LAYOUT_planck_grid_wrapper(
    _______, _________________COLEMAK_L1________________, _________________COLEMAK_R1________________, _______,
    _______, _________________COLEMAK_L2________________, _________________COLEMAK_R2________________, _______,
    _______, _________________COLEMAK_L3________________, _________________COLEMAK_R3________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /* Numeric layer
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *  Application -- │ Del │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │     │
   *       window    ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *     switcher    │     │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │  -  │  =  │  `  │  \  │  :  │ndash│mdash│  ,  │  .  │  /  │     │
   *                 ├─────┼─────┼─────┼─────╆━━━━━╅─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │     │     ┃     ┃     │     │     │     │     │     │     │
   *                 └─────┴─────┴─────┴─────┺━━━━━┹─────┴─────┴─────┴─────┴─────┴─────┴─────┘
   */
  [LOWER_LAYER] = LAYOUT_planck_grid_wrapper(
    KC_DEL,  _________________LOWER_L1__________________, _________________LOWER_R1__________________, _______,
    _______, _________________LOWER_L2__________________, _________________LOWER_R2__________________, _______,
    _______, _________________LOWER_L3__________________, _________________LOWER_R3__________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /* Symbol layer
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *                 │     │ F11 │ F12 │ F13 │ F14 │ F15 │ F16 │ F17 │ F18 │ F19 │ F20 │ ⌘-` │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │  !  │  @  │  #  │  $  │  %  │  ^  │  &  │  *  │  {  │  }  │     │ \
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤  |-- Mostly shifted version
   *                 │     │  _  │  +  │  ~  │  |  │  :  │ndash│mdash│  ,  │  .  │  /  │     │ /    of lower layer
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────╆━━━━━╅─────┼─────┼─────┼─────┤
   *                 │     │     │     │     │     │     |     ┃     ┃     │     │     │     │
   *                 └─────┴─────┴─────┴─────┴─────┴─────┴─────┺━━━━━┹─────┴─────┴─────┴─────┘
   */
  [RAISE_LAYER] = LAYOUT_planck_grid_wrapper(
    _______, _________________RAISE_L1__________________, _________________RAISE_R1__________________, GUI_GRV,
    _______, _________________RAISE_L2__________________, _________________RAISE_R2__________________, _______,
    _______, _________________RAISE_L3__________________, _________________RAISE_R3__________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /* Directional navigation layer
   *
   *          Large movements -----/```````````````````\       /````````````````\----- arrow keys, hold for alt+arrow
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *                 │     │     │     │ ⌘ ↑ │Home │PgUp │PgDn │End  │  ↑  │     │     │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │ ⌘ ← │ ⌘ ↓ │ ⌘ → │     │     │  ←  │  ↓  │  →  │     │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │     │     │     │     │     │     │     │     │     │     │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────╆━━━━━╅─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │     │     │     │     ┃     ┃     │     │     │     │     │
   *                 └─────┴─────┴─────┴─────┴─────┴─────┺━━━━━┹─────┴─────┴─────┴─────┴─────┘
   */
  [NAV_LAYER] = LAYOUT_planck_grid_wrapper(
    XXXXXXX, __________________NAV_L1___________________, __________________NAV_R1___________________, XXXXXXX,
    _______, __________________NAV_L2___________________, __________________NAV_R2___________________, _______,
    _______, __________________NAV_L3___________________, __________________NAV_R3___________________, _______,
    _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______
  ),

  

  /* Stenography layer
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *                 │  ⇥  │  #  │  #  │  #  │  #  │  #  │  #  │  #  │  #  │  #  │  #  │  #  │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │  ⌃  │     │  T  │  P  │  H  │     ┆     │  F  │  P  │  L  │  T  │  D  │
   *                 ├─────┼╌ S ╌┼─────┼─────┼─────┼╌╌╌╌ * ╌╌╌╌┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │  K  │  W  │  R  │     ┆     │  R  │  B  │  G  │  S  │  Z  │
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │Exit │     │  ⌥  │  ⌘  │  A  │  O  │  E  │  U  │  ⌘  │  ⌥  │     │     │
   *                 └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
   */
  [STENO_LAYER] = LAYOUT_planck_grid_wrapper(
    KC_TAB,  _________________STENO_L1__________________, _________________STENO_R1___________________________,
    CTL_ESC, _________________STENO_L2__________________, _________________STENO_R2___________________________,
    XXXXXXX, _________________STENO_L3__________________, _________________STENO_R3___________________________,
    STN_EXIT,XXXXXXX, KC_LALT, KC_LGUI, ____STENO_AO____, ____STENO_EU____, KC_RGUI, KC_RALT, XXXXXXX, XXXXXXX
  ),

  /* Keyboard settings layer
   *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   *                 │Full │ScnSt│     │     │     │     │     │     │     │     │     │Reset│
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *                 │     │     │           │     │     │     │     │     │     │     │     │ 
   *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   *        Audio -- │Play │Prev │Next │     │     │     │     │     |Undo | Cut │Copy |Paste│ -- Macros
   *                 ├─────┼─────┼─────┼─────╆━━━━━╅─────┼─────╆━━━━━╅─────┼─────┼─────┼─────┤
   *                 │Mute │Vol- │Vol+ │     ┃     ┃     |     ┃     ┃     │Brig-│Brig+│Lock │ -- Screen
   *                 └─────┴─────┴─────┴─────┺━━━━━┹─────┴─────┺━━━━━┹─────┴─────┴─────┴─────┘
   *                Swap GUI/Alt _/________/             \_____________\_ Backlight _/
   */
  [ADJUST_LAYER] = LAYOUT_planck_grid_wrapper(
    WM_FULL, WM_SCREEN,   XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         RESET,
    XXXXXXX,  XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_MPLY, KC_MPRV,  KC_MNXT,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE,
    KC_KB_MUTE,  KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN,  XXXXXXX,  _______,  _______, _______, _______, XXXXXXX,KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN,  WM_LOCK
  )
};

#ifdef RGB_MATRIX_ENABLE
void rgb_matrix_indicators_user(void) {
  switch (biton32(layer_state)) {
    case LOWER_LAYER:
      rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF); // LOWER
      break;
    case RAISE_LAYER:
      rgb_matrix_set_color(44, 0xFF, 0xFF, 0xFF); // RAISE
      break;
    case NAV_LAYER:
      rgb_matrix_set_color(43, 0xFF, 0xFF, 0xFF); // NAV_BSP
      break;
    case GUI_LAYER:
      rgb_matrix_set_color(36, 0xFF, 0xFF, 0xFF); // GUI_L
      rgb_matrix_set_color(48, 0xFF, 0xFF, 0xFF); // GUI_R
      break;
    case STENO_LAYER:
      rgb_matrix_set_color(36, 0xFF, 0x30, 0x00); // STN_EXIT

      // Mask out everything but alphabetic steno keys.
      rgb_matrix_set_color(0, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(1, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(2, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(3, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(4, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(5, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(6, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(7, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(8, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(9, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(10, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(11, 0x00, 0x00, 0x00);

      rgb_matrix_set_color(12, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(17, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(18, 0x00, 0x00, 0x00);

      rgb_matrix_set_color(24, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(29, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(30, 0x00, 0x00, 0x00);

      rgb_matrix_set_color(37, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(38, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(39, 0x00, 0x00, 0x00);

      rgb_matrix_set_color(45, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(46, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(47, 0x00, 0x00, 0x00);
      rgb_matrix_set_color(48, 0x00, 0x00, 0x00);
      break;
    case ADJUST_LAYER:
      rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF); // LOWER
      rgb_matrix_set_color(44, 0xFF, 0xFF, 0xFF); // RAISE
      break;
    case CAMEL_LAYER:
    case KEBAB_LAYER:
    case SNAKE_LAYER:
      rgb_matrix_set_color(12, 0xFF, 0x30, 0x00); // STCH_EX
      rgb_matrix_set_color(41, 0x88, 0xFF, 0x00); // "Space bar"
      break;
  }

  // Disable middle LED between keßys in grid layout.
  rgb_matrix_set_color(42, 0x00, 0x00, 0x00);
}
#endif
