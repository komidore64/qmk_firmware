#include QMK_KEYBOARD_H

// #include "version.h"

// left hand
#define ALPHA_A SFT_T(KC_A)
#define ALPHA_S LGUI_T(KC_S)
#define ALPHA_D LALT_T(KC_D)
#define ALPHA_F LCTL_T(KC_F)
#define ALPHA_ESC LT(MOUSE, KC_ESC)
#define ALPHA_BSPC LT(NAV, KC_BSPC)

// right hand
#define ALPHA_J LCTL_T(KC_J)
#define ALPHA_K LALT_T(KC_K)
#define ALPHA_L LGUI_T(KC_L)
#define ALPHA_QUOT LSFT_T(KC_QUOT)
#define ALPHA_SPC LT(SYM, KC_SPC)
#define ALPHA_TAB LT(NUM, KC_TAB)

enum layers {
    ALPHA,
    FUNC,
    MEDIA,
    MOUSE,
    NAV,
    NUM,
    SYM,
};

const uint16_t PROGMEM left_thumb[] = { ALPHA_ESC, ALPHA_BSPC, COMBO_END };
const uint16_t PROGMEM right_thumb[] = { ALPHA_SPC, ALPHA_TAB, COMBO_END };
const uint16_t PROGMEM left_df[] = { ALPHA_D, ALPHA_F, COMBO_END };
const uint16_t PROGMEM left_cv[] = { KC_C, KC_V, COMBO_END };
const uint16_t PROGMEM right_jk[] = { ALPHA_J, ALPHA_K, COMBO_END };
const uint16_t PROGMEM right_mcomm[] = { KC_M, KC_COMM, COMBO_END };
const uint16_t PROGMEM right_kl[] = { ALPHA_K, ALPHA_L, COMBO_END };
const uint16_t PROGMEM right_commdot[] = { KC_COMM, KC_DOT, COMBO_END };
const uint16_t PROGMEM leftmost_column[] = { KC_Q, ALPHA_A, KC_Z, COMBO_END, };

combo_t key_combos[] = {
    COMBO(left_thumb, MO(MEDIA)),
    COMBO(right_thumb, MO(FUNC)),
    COMBO(left_df, KC_LPRN),
    COMBO(left_cv, KC_RPRN),
    COMBO(right_jk, KC_MINS),
    COMBO(right_mcomm, KC_UNDS),
    COMBO(right_kl, KC_SCLN),
    COMBO(right_commdot, KC_COLN),
    COMBO(leftmost_column, QK_BOOT),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ALPHA] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,       /* */ KC_Y,      KC_U,      KC_I,    KC_O,    KC_P,
        ALPHA_A, ALPHA_S, ALPHA_D, ALPHA_F,   KC_G,       /* */ KC_H,      ALPHA_J,   ALPHA_K, ALPHA_L, ALPHA_QUOT,
        KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,       /* */ KC_N,      KC_M,      KC_COMM, KC_DOT,  KC_SLSH,
                                   ALPHA_ESC, ALPHA_BSPC, /* */ ALPHA_SPC, ALPHA_TAB
    ),

    [FUNC] = LAYOUT(
        KC_F12, KC_F7, KC_F8, KC_F9,  KC_PSCR, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_F11, KC_F4, KC_F5, KC_F6,  KC_SCRL, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_F10, KC_F1, KC_F2, KC_F3,  KC_PAUS, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                              KC_APP, KC_NO,   /* */ KC_TRNS, KC_TRNS
    ),

    [MEDIA] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_NO,   /* */ KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   /* */ KC_NO,   KC_MUTE, KC_MRWD, KC_MFFD, KC_NO,
                                   KC_TRNS, KC_TRNS, /* */ KC_MPLY, KC_MSTP
    ),

    [MOUSE] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, /* */ KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_NO, /* */ KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
        KC_NO,   KC_CUT,  KC_COPY, KC_PSTE, KC_NO, /* */ KC_NO,   KC_BTN3, KC_ACL0, KC_ACL1, KC_ACL2,
                                   KC_TRNS, KC_NO, /* */ KC_BTN1, KC_BTN2
    ),

    [NAV] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   /* */ KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_NO,   /* */ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG,
        KC_NO,   KC_CUT,  KC_COPY, KC_PSTE, KC_NO,   /* */ KC_NO,   KC_NO,   C(KC_P), C(KC_N), KC_DEL,
                                   KC_NO,   KC_TRNS, /* */ KC_ENT,  KC_NO
    ),

    [NUM] = LAYOUT(
        KC_LBRC, KC_7, KC_8, KC_9,   KC_RBRC, /* */ KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_SCLN, KC_4, KC_5, KC_6,   KC_EQL,  /* */ KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_GRV,  KC_1, KC_2, KC_3,   KC_BSLS, /* */ KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                             KC_DOT, KC_0,    /* */ KC_NO, KC_TRNS
    ),

    [SYM] = LAYOUT(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_NO,   KC_NO,   /* */ KC_TRNS, KC_NO
    ),
};
// clang-format on
