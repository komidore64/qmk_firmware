#include QMK_KEYBOARD_H

// #include "version.h"

// reference / inspiration: https://keymapdb.com/keymaps/kkga/
//
// TODO: see if it's possible to include a mouse layer after using kkga for a
// bit.

enum layers {
    ALPHA,
    EXTEND,
    SYMBOL,
    NUMBER,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ALPHA] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R,   KC_T,    KC_Y,   KC_U, KC_I,    KC_O,   KC_P,
        KC_A, KC_S, KC_D, KC_F,   KC_G,    KC_H,   KC_J, KC_K,    KC_L,   KC_SCLN,
        KC_Z, KC_X, KC_C, KC_V,   KC_B,    KC_N,   KC_M, KC_COMM, KC_DOT, KC_SLSH,
                          KC_TAB, KC_LSFT, KC_SPC, KC_ENT
    ),
};
// clang-format on
