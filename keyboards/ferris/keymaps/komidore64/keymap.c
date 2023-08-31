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
        KC_Q,         KC_W,         KC_E,        KC_R,        KC_T,    /* */ KC_Y,   KC_U,        KC_I,           KC_O,           KC_P,
        KC_A,         KC_S,         KC_D,        KC_F,        KC_G,    /* */ KC_H,   KC_J,        KC_K,           KC_L,           KC_SCLN,
        LGUI_T(KC_Z), LALT_T(KC_X), CTL_T(KC_C), SFT_T(KC_V), KC_B,    /* */ KC_N,   SFT_T(KC_M), CTL_T(KC_COMM), LALT_T(KC_DOT), LGUI_T(KC_SLSH),
                                                 MO(EXTEND),  KC_BSPC, /* */ KC_SPC, MO(SYMBOL)
    ),
    [EXTEND] = LAYOUT(
        KC_NO,   KC_NO,   KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN, KC_NO, /* */ KC_HOME, KC_PGDN,    KC_PGUP, KC_END,  KC_NO,
        KC_LGUI, KC_LALT, KC_LCTL,         KC_LSFT,           KC_NO, /* */ KC_LEFT, KC_DOWN,    KC_UP,   KC_RGHT, KC_BSPC,
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
