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

// left hand
const uint16_t PROGMEM alpha_w_e[] = { KC_W, KC_E, COMBO_END };
const uint16_t PROGMEM alpha_e_r[] = { KC_E, KC_R, COMBO_END };
const uint16_t PROGMEM alpha_s_d[] = { ALPHA_S, ALPHA_D, COMBO_END };
const uint16_t PROGMEM alpha_d_f[] = { ALPHA_D, ALPHA_F, COMBO_END };
// const uint16_t PROGMEM alpha_x_c[] = { KC_X, KC_C, COMBO_END };
// const uint16_t PROGMEM alpha_c_v[] = { KC_C, KC_V, COMBO_END };
const uint16_t PROGMEM alpha_esc_bspc[] = { ALPHA_ESC, ALPHA_BSPC, COMBO_END };
const uint16_t PROGMEM alpha_q_a_z[] = { KC_Q, ALPHA_A, KC_Z, COMBO_END, };

// right hand
const uint16_t PROGMEM alpha_j_k[] = { ALPHA_J, ALPHA_K, COMBO_END };
const uint16_t PROGMEM alpha_m_comm[] = { KC_M, KC_COMM, COMBO_END };
const uint16_t PROGMEM alpha_k_l[] = { ALPHA_K, ALPHA_L, COMBO_END };
const uint16_t PROGMEM alpha_comm_dot[] = { KC_COMM, KC_DOT, COMBO_END };
const uint16_t PROGMEM alpha_spc_tab[] = { ALPHA_SPC, ALPHA_TAB, COMBO_END };

combo_t key_combos[] = {
    // left hand
    COMBO(alpha_w_e, KC_LPRN), // (
    COMBO(alpha_e_r, KC_RPRN), // )
    COMBO(alpha_s_d, MT(MOD_LGUI | MOD_LALT, KC_LBRC)), // [ / {
    COMBO(alpha_d_f, MT(MOD_LALT | MOD_LCTL, KC_RBRC)), // ] / }
    COMBO(alpha_esc_bspc, MO(MEDIA)),
    COMBO(alpha_q_a_z, QK_BOOT),

    // right hand
    COMBO(alpha_j_k, KC_MINS),
    COMBO(alpha_m_comm, KC_UNDS),
    COMBO(alpha_k_l, KC_SCLN),
    COMBO(alpha_comm_dot, KC_COLN),
    COMBO(alpha_spc_tab, MO(FUNC)),
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
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   /* */ KC_HOME, KC_PGDN, KC_PGUP,    KC_END,     KC_INS,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_NO,   /* */ KC_LEFT, KC_DOWN, KC_UP,      KC_RGHT,    CW_TOGG,
        KC_NO,   KC_CUT,  KC_COPY, KC_PSTE, KC_NO,   /* */ KC_NO,   KC_NO,   LCTL(KC_P), LCTL(KC_N), KC_DEL,
                                   KC_NO,   KC_TRNS, /* */ KC_ENT,  KC_NO
    ),

    [NUM] = LAYOUT(
        KC_NO,   KC_7, KC_8, KC_9,   KC_NO,   /* */ KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_SCLN, KC_4, KC_5, KC_6,   KC_EQL,  /* */ KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_GRV,  KC_1, KC_2, KC_3,   KC_BSLS, /* */ KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                             KC_DOT, KC_0,    /* */ KC_NO, KC_TRNS
    ),

    [SYM] = LAYOUT(
        KC_NO,   KC_AMPR, KC_ASTR, KC_NO,   KC_NO,   /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_NO,   KC_NO,   /* */ KC_TRNS, KC_NO
    ),
};
// clang-format on
