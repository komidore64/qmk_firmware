#include QMK_KEYBOARD_H

// #include "version.h"

// inspirations:
//   - https://keymapdb.com/keymaps/kkga/
//   - miryoku

enum layers {
    ALPHA,
    EXTEND,
    SYMBOL,
    NUMBER,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ALPHA] = LAYOUT(
        KC_Q,         KC_W,         KC_E,        KC_R,        KC_T,                /* */ KC_Y,   KC_U,        KC_I,        KC_O,         KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F), KC_G,                /* */ KC_H,   SFT_T(KC_J), CTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN),
        KC_Z,         KC_X,         KC_C,        KC_V,        KC_B,                /* */ KC_N,   KC_M,        KC_COMM,     KC_DOT,       KC_SLSH,
                                                 KC_NO,       LT(EXTEND, KC_BSPC), /* */ KC_SPC, MO(SYMBOL)
    ),
    [EXTEND] = LAYOUT(
        KC_NO,   KC_NO,   KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN, KC_NO, /* */ KC_HOME, KC_PGDN,    KC_PGUP, KC_END,  KC_NO,
        KC_LGUI, KC_LALT, KC_LCTL,         KC_LSFT,           KC_NO, /* */ KC_LEFT, KC_DOWN,    KC_UP,   KC_RGHT, KC_NO,
        KC_ESC,  KC_NO,   KC_NO,           KC_TAB,            KC_NO, /* */ KC_NO,   KC_ENT,     KC_NO,   KC_NO,   KC_DEL,
                                           KC_TRNS,           KC_NO, /* */ KC_ENT,  MO(NUMBER)
    ),
    [SYMBOL] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, /* */ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, /* */ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, /* */ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                             MO(NUMBER), KC_NO, /* */ KC_NO, KC_TRNS
    ),
    [NUMBER] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, /* */ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, /* */ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, /* */ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                             KC_TRNS, KC_NO, /* */ KC_NO, KC_TRNS
    ),
};
// clang-format on
