/* Copyright 2019 Noah Frederick
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

#include "my.h"


enum combo_events {
  MY_COMBO_COMM_C,
  MY_COMBO_COMM_M,
  MY_COMBO_COMM_P,
  MY_COMBO_DOT_SLSH,
  MY_COMBO_QUOT_C,
  MY_COMBO_QUOT_D,
  MY_COMBO_QUOT_H,
  MY_COMBO_QUOT_O,
  MY_COMBO_QUOT_R,
  MY_COMBO_QUOT_S,
  MY_COMBO_QUOT_T,
  MY_COMBO_QUOT_W,
  MY_COMBO_QUOT_Y,
  MY_COMBO_SLSH_F,
  MY_COMBO_SLSH_H,
  MY_COMBO_SLSH_S,
  MY_COMBO_TAB_B,
  MY_COMBO_TAB_C,
  MY_COMBO_TAB_D,
  MY_COMBO_TAB_G,
  MY_COMBO_TAB_I,
  MY_COMBO_TAB_L,
  MY_COMBO_TAB_U,
  MY_COMBO_A_B,
  MY_COMBO_A_K,
  MY_COMBO_A_M,
  MY_COMBO_A_N,
  MY_COMBO_A_T,
  MY_COMBO_A_W,
  MY_COMBO_B_C,
  MY_COMBO_C_W,
  MY_COMBO_D_L,
  MY_COMBO_E_G,
  MY_COMBO_E_I,
  MY_COMBO_H_T,
  MY_COMBO_H_V,
  MY_COMBO_I_O,
  MY_COMBO_I_T,
  MY_COMBO_I_W,
  MY_COMBO_K_M,
  MY_COMBO_L_T,
  MY_COMBO_L_W,
  MY_COMBO_M_T,
  MY_COMBO_N_T,
  MY_COMBO_O_W,
  MY_COMBO_R_U,
  MY_COMBO_R_Y,
  MY_COMBO_U_Y,
};

const uint16_t PROGMEM combo_COMM_C[] = { KC_COMM, KC_C, COMBO_END };
const uint16_t PROGMEM combo_COMM_M[] = { KC_COMM, KC_M, COMBO_END };
const uint16_t PROGMEM combo_COMM_P[] = { KC_COMM, KC_P, COMBO_END };
const uint16_t PROGMEM combo_DOT_SLSH[] = { KC_DOT, KC_SLSH, COMBO_END };
const uint16_t PROGMEM combo_QUOT_C[] = { KC_QUOT, KC_C, COMBO_END };
const uint16_t PROGMEM combo_QUOT_D[] = { KC_QUOT, KC_D, COMBO_END };
const uint16_t PROGMEM combo_QUOT_H[] = { KC_QUOT, KC_H, COMBO_END };
const uint16_t PROGMEM combo_QUOT_O[] = { KC_QUOT, KC_O, COMBO_END };
const uint16_t PROGMEM combo_QUOT_R[] = { KC_QUOT, KC_R, COMBO_END };
const uint16_t PROGMEM combo_QUOT_S[] = { KC_QUOT, KC_S, COMBO_END };
const uint16_t PROGMEM combo_QUOT_T[] = { KC_QUOT, KC_T, COMBO_END };
const uint16_t PROGMEM combo_QUOT_W[] = { KC_QUOT, KC_W, COMBO_END };
const uint16_t PROGMEM combo_QUOT_Y[] = { KC_QUOT, KC_Y, COMBO_END };
const uint16_t PROGMEM combo_SLSH_F[] = { KC_SLSH, KC_F, COMBO_END };
const uint16_t PROGMEM combo_SLSH_H[] = { KC_SLSH, KC_H, COMBO_END };
const uint16_t PROGMEM combo_SLSH_S[] = { KC_SLSH, KC_S, COMBO_END };
const uint16_t PROGMEM combo_TAB_B[] = { KC_TAB, KC_B, COMBO_END };
const uint16_t PROGMEM combo_TAB_C[] = { KC_TAB, KC_C, COMBO_END };
const uint16_t PROGMEM combo_TAB_D[] = { KC_TAB, KC_D, COMBO_END };
const uint16_t PROGMEM combo_TAB_G[] = { KC_TAB, KC_G, COMBO_END };
const uint16_t PROGMEM combo_TAB_I[] = { KC_TAB, KC_I, COMBO_END };
const uint16_t PROGMEM combo_TAB_L[] = { KC_TAB, KC_L, COMBO_END };
const uint16_t PROGMEM combo_TAB_U[] = { KC_TAB, KC_U, COMBO_END };
const uint16_t PROGMEM combo_A_B[] = { KC_A, KC_B, COMBO_END };
const uint16_t PROGMEM combo_A_K[] = { KC_A, KC_K, COMBO_END };
const uint16_t PROGMEM combo_A_M[] = { KC_A, KC_M, COMBO_END };
const uint16_t PROGMEM combo_A_N[] = { KC_A, KC_N, COMBO_END };
const uint16_t PROGMEM combo_A_T[] = { KC_A, KC_T, COMBO_END };
const uint16_t PROGMEM combo_A_W[] = { KC_A, KC_W, COMBO_END };
const uint16_t PROGMEM combo_B_C[] = { KC_B, KC_C, COMBO_END };
const uint16_t PROGMEM combo_C_W[] = { KC_C, KC_W, COMBO_END };
const uint16_t PROGMEM combo_D_L[] = { KC_D, KC_L, COMBO_END };
const uint16_t PROGMEM combo_E_G[] = { KC_E, KC_G, COMBO_END };
const uint16_t PROGMEM combo_E_I[] = { KC_E, KC_I, COMBO_END };
const uint16_t PROGMEM combo_H_T[] = { KC_H, KC_T, COMBO_END };
const uint16_t PROGMEM combo_H_V[] = { KC_H, KC_V, COMBO_END };
const uint16_t PROGMEM combo_I_O[] = { KC_I, KC_O, COMBO_END };
const uint16_t PROGMEM combo_I_T[] = { KC_I, KC_T, COMBO_END };
const uint16_t PROGMEM combo_I_W[] = { KC_I, KC_W, COMBO_END };
const uint16_t PROGMEM combo_K_M[] = { KC_K, KC_M, COMBO_END };
const uint16_t PROGMEM combo_L_T[] = { KC_L, KC_T, COMBO_END };
const uint16_t PROGMEM combo_L_W[] = { KC_L, KC_W, COMBO_END };
const uint16_t PROGMEM combo_M_T[] = { KC_M, KC_T, COMBO_END };
const uint16_t PROGMEM combo_N_T[] = { KC_N, KC_T, COMBO_END };
const uint16_t PROGMEM combo_O_W[] = { KC_O, KC_W, COMBO_END };
const uint16_t PROGMEM combo_R_U[] = { KC_R, KC_U, COMBO_END };
const uint16_t PROGMEM combo_R_Y[] = { KC_R, KC_Y, COMBO_END };
const uint16_t PROGMEM combo_U_Y[] = { KC_U, KC_Y, COMBO_END };
const uint16_t PROGMEM combo_Z_X[] = { KC_Z, KC_X, COMBO_END };
const uint16_t PROGMEM combo_X_C[] = { KC_X, KC_C, COMBO_END };
const uint16_t PROGMEM combo_C_V[] = { KC_C, KC_V, COMBO_END };
const uint16_t PROGMEM combo_Z_V[] = { KC_Z, KC_V, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
  [MY_COMBO_COMM_C] = COMBO_ACTION(combo_COMM_C),
  [MY_COMBO_COMM_M] = COMBO_ACTION(combo_COMM_M),
  [MY_COMBO_COMM_P] = COMBO_ACTION(combo_COMM_P),
  [MY_COMBO_DOT_SLSH] = COMBO_ACTION(combo_DOT_SLSH),
  [MY_COMBO_QUOT_C] = COMBO_ACTION(combo_QUOT_C),
  [MY_COMBO_QUOT_D] = COMBO_ACTION(combo_QUOT_D),
  [MY_COMBO_QUOT_H] = COMBO_ACTION(combo_QUOT_H),
  [MY_COMBO_QUOT_O] = COMBO_ACTION(combo_QUOT_O),
  [MY_COMBO_QUOT_R] = COMBO_ACTION(combo_QUOT_R),
  [MY_COMBO_QUOT_S] = COMBO_ACTION(combo_QUOT_S),
  [MY_COMBO_QUOT_T] = COMBO_ACTION(combo_QUOT_T),
  [MY_COMBO_QUOT_W] = COMBO_ACTION(combo_QUOT_W),
  [MY_COMBO_QUOT_Y] = COMBO_ACTION(combo_QUOT_Y),
  [MY_COMBO_SLSH_F] = COMBO_ACTION(combo_SLSH_F),
  [MY_COMBO_SLSH_H] = COMBO_ACTION(combo_SLSH_H),
  [MY_COMBO_SLSH_S] = COMBO_ACTION(combo_SLSH_S),
  [MY_COMBO_TAB_B] = COMBO_ACTION(combo_TAB_B),
  [MY_COMBO_TAB_C] = COMBO_ACTION(combo_TAB_C),
  [MY_COMBO_TAB_D] = COMBO_ACTION(combo_TAB_D),
  [MY_COMBO_TAB_G] = COMBO_ACTION(combo_TAB_G),
  [MY_COMBO_TAB_I] = COMBO_ACTION(combo_TAB_I),
  [MY_COMBO_TAB_L] = COMBO_ACTION(combo_TAB_L),
  [MY_COMBO_TAB_U] = COMBO_ACTION(combo_TAB_U),
  [MY_COMBO_A_B] = COMBO_ACTION(combo_A_B),
  [MY_COMBO_A_K] = COMBO_ACTION(combo_A_K),
  [MY_COMBO_A_M] = COMBO_ACTION(combo_A_M),
  [MY_COMBO_A_N] = COMBO_ACTION(combo_A_N),
  [MY_COMBO_A_T] = COMBO_ACTION(combo_A_T),
  [MY_COMBO_A_W] = COMBO_ACTION(combo_A_W),
  [MY_COMBO_B_C] = COMBO_ACTION(combo_B_C),
  [MY_COMBO_C_W] = COMBO_ACTION(combo_C_W),
  [MY_COMBO_D_L] = COMBO_ACTION(combo_D_L),
  [MY_COMBO_E_G] = COMBO_ACTION(combo_E_G),
  [MY_COMBO_E_I] = COMBO_ACTION(combo_E_I),
  [MY_COMBO_H_T] = COMBO_ACTION(combo_H_T),
  [MY_COMBO_H_V] = COMBO_ACTION(combo_H_V),
  [MY_COMBO_I_O] = COMBO_ACTION(combo_I_O),
  [MY_COMBO_I_T] = COMBO_ACTION(combo_I_T),
  [MY_COMBO_I_W] = COMBO_ACTION(combo_I_W),
  [MY_COMBO_K_M] = COMBO_ACTION(combo_K_M),
  [MY_COMBO_L_T] = COMBO_ACTION(combo_L_T),
  [MY_COMBO_L_W] = COMBO_ACTION(combo_L_W),
  [MY_COMBO_M_T] = COMBO_ACTION(combo_M_T),
  [MY_COMBO_N_T] = COMBO_ACTION(combo_N_T),
  [MY_COMBO_O_W] = COMBO_ACTION(combo_O_W),
  [MY_COMBO_R_U] = COMBO_ACTION(combo_R_U),
  [MY_COMBO_R_Y] = COMBO_ACTION(combo_R_Y),
  [MY_COMBO_U_Y] = COMBO_ACTION(combo_U_Y),
  COMBO(combo_Z_X, KC_CUT),
  COMBO(combo_X_C, KC_COPY),
  COMBO(combo_C_V, KC_PASTE),
  COMBO(combo_Z_V, KC_UNDO),
};

#define MODS_SHIFT (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define SEND_CAP_STRING(str, capitalized) if (MODS_SHIFT) { \
                                            clear_mods(); \
                                            SEND_STRING(capitalized); \
                                          } else { \
                                            SEND_STRING(str); \
                                          }

