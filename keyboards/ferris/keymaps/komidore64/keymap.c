#include QMK_KEYBOARD_H

// #include "version.h"

// NOTES:
// - so far, i'm not sure i'm digging home row mods. seems to work fine for my
// stronger fingers (index, and middle), but weaker fingers (ring, pinky) were
// getting some mod key misfires when typing. will have to keep any eye on it.

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
        LGUI_T(KC_A), LALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F), KC_G,                   /* */ KC_H,            SFT_T(KC_J),     CTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT),
        KC_Z,         KC_X,         KC_C,        KC_V,        KC_B,                   /* */ KC_N,            KC_M,            KC_COMM,     KC_DOT,       KC_SLSH,
                                                 LT(MOUSE, KC_ESC), LT(NAV, KC_BSPC), /* */ LT(SYM, KC_SPC), LT(NUM, KC_TAB)
                                                 /*        hold media             */        /*     hold function          */
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
        KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   /* */ KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
        KC_LGUI, KC_LALT,  KC_LCTL, KC_LSFT, KC_NO,   /* */ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG,
        KC_NO,   KC_CUT,   KC_COPY, KC_PSTE, KC_NO,   /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,
                                    KC_NO,   KC_TRNS, /* */ KC_ENT,  KC_NO
    ),
    [NUM] = LAYOUT(
        KC_LBRC, KC_7, KC_8, KC_9,    KC_RBRC, /* */ KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_SCLN, KC_4, KC_5, KC_6,    KC_EQL,  /* */ KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_LGUI,
        KC_GRV,  KC_1, KC_2, KC_3,    KC_BSLS, /* */ KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
                             KC_MINS, KC_0,    /* */ KC_NO, KC_TRNS
    ),
    [SYM] = LAYOUT(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, /* */ KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, /* */ KC_NO,   KC_NO, KC_LCTL, KC_LALT, KC_LGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, /* */ KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,
                                   KC_UNDS, KC_RPRN, /* */ KC_TRNS, KC_NO
    ),
};
// clang-format on
