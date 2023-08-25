#include QMK_KEYBOARD_H

#include "version.h"

enum layers {
    BASE,
    NAV,
    SYM
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ergodox_pretty(
        KC_NO, KC_Q,        KC_W,        KC_E,        KC_R,            KC_T,    KC_NO,        KC_NO, KC_Y,   KC_U,        KC_I,        KC_O,        KC_P,           KC_NO,
        KC_NO, GUI_T(KC_A), ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F),     KC_G,    KC_NO,        KC_NO, KC_H,   SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), GUI_T(KC_SCLN), KC_NO,
        KC_NO, KC_Z,        KC_X,        KC_C,        KC_V,            KC_B,                         KC_N,   KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,        KC_NO,
        KC_NO, KC_NO,       KC_NO,       KC_NO,       LT(NAV, KC_ESC), KC_BSPC, KC_NO,        KC_NO, KC_SPC, KC_ENT,      KC_NO,       KC_NO,       KC_NO,          KC_NO,
        KC_NO, KC_NO,       KC_NO,       KC_NO,       KC_NO,                                                 KC_NO,       KC_NO,       KC_NO,       KC_NO,          KC_NO,
                                                                       KC_NO,   KC_NO,        KC_NO, KC_NO,
                                                                                KC_NO,        KC_NO,
                                                      KC_NO,           KC_NO,   KC_NO,        KC_NO, KC_NO,  KC_NO
    ),
    [NAV] = LAYOUT_ergodox_pretty(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO, KC_NO,  KC_NO,       KC_NO,       KC_NO,       KC_NO,          KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_NO,        KC_NO, KC_NO,  SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), GUI_T(KC_SCLN), KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_N,   KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,        KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,        KC_NO, KC_SPC, KC_ENT,      KC_NO,       KC_NO,       KC_NO,          KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO,       KC_NO,       KC_NO,       KC_NO,          KC_NO,
                                                   KC_NO,   KC_NO,        KC_NO, KC_NO,
                                                            KC_NO,        KC_NO,
                                          KC_NO,   KC_NO,   KC_NO,        KC_NO, KC_NO,  KC_NO
    )
};
// clang-format on
