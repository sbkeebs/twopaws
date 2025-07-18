/* Copyright 2021 s8erdude
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
	    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,         KC_J,         KC_L,    KC_U,    KC_Y,   KC_BSPC,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_G,         KC_M,         KC_N,    KC_E,    KC_I,   KC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,         KC_K,         KC_H,    KC_COMM, KC_DOT, KC_SLSH,
                          KC_LCTL, KC_LALT, LT(1,KC_ENT), LT(2,KC_SPC), KC_MINS, KC_EQL       
    ),
    [1] = LAYOUT(
	    KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCLN,   
        KC_LCTL, KC_TRNS, KC_TRNS, KC_VOLU, SGUI(KC_S),     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_QUOTE,
        KC_LSFT, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRAVE,
                          KC_LSFT, KC_LGUI, KC_TRNS,        KC_LSFT, KC_LBRC, KC_RBRC 
    ),
    [2] = LAYOUT(
        KC_1,   KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   
        KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_LSFT,        KC_TRNS, KC_TRNS, KC_TRNS 
    )
};

// const key_override_t altab_override = ko_make_basic(MOD_MASK_ALT, KC_Q, KC_TAB);

// // This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]){
//     &altab_override,
//     NULL // Null terminate the array of overrides!
// };