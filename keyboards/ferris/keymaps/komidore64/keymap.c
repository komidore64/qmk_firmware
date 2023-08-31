#include QMK_KEYBOARD_H

// #include "version.h"

// inspirations:
//   - https://keymapdb.com/keymaps/kkga/
//   - miryoku

enum layers {
    ALPHA,
    FUNC,
    MEDIA,
    MOUSE,
    NAV,
    NUM,
    SYM,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ALPHA] = LAYOUT(
        KC_Q,         KC_W,         KC_E,        KC_R,        KC_T,                   /* */ KC_Y,            KC_U,            KC_I,        KC_O,         KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F), KC_G,                   /* */ KC_H,            SFT_T(KC_J),     CTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN),
        KC_Z,         KC_X,         KC_C,        KC_V,        KC_B,                   /* */ KC_N,            KC_M,            KC_COMM,     KC_DOT,       KC_SLSH,
                                                 LT(MOUSE, KC_ESC), LT(NAV, KC_BSPC), /* */ LT(SYM, KC_SPC), LT(NUM, KC_TAB)
                                                 /*             media             */        /*          function          */
    ),
    [FUNC] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, /* */ KC_NO, KC_NO
    ),
    [MEDIA] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, /* */ KC_NO, KC_NO
    ),
    [MOUSE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, /* */ KC_NO, KC_NO
    ),
    [NAV] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   /* */ KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_BSPC,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   /* */ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_TAB,  KC_NO,   /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,
                                   KC_NO,   KC_TRNS, /* */ KC_ENT,  KC_NO
    ),
    [NUM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, /* */ KC_NO, KC_NO
    ),
    [SYM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, /* */ KC_NO, KC_NO
    ),
};
// clang-format on
