#include QMK_KEYBOARD_H

// #include "version.h"

#define AL_SFT  OSM(MOD_LSFT)
#define AL_BSPC LT(NAV, KC_BSPC)
#define AL_SPC  LT(SYM, KC_SPC)
#define AL_TAB  LT(NUM, KC_TAB)

#define NA_COMM LSFT(KC_P)
#define NA_DOT  LSFT(KC_N)

enum layers {
    ALPHA,
    FUNC,
    NAV,
    NUM,
    SYM,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ALPHA] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    /* */ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    /* */ KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    /* */ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                   AL_SFT,  AL_BSPC, /* */ AL_SPC,  AL_TAB
    ),

    [FUNC] = LAYOUT(
        KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
                                   KC_APP,  KC_NO,   /* */ KC_TRNS, KC_TRNS
    ),

    [NAV] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   /* */ KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_NO,   /* */ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_NO,   /* */ KC_NO,   KC_NO,   NA_COMM, NA_DOT,  KC_DEL,
                                   KC_NO,   KC_TRNS, /* */ KC_ENT,  KC_NO
    ),

    [NUM] = LAYOUT(
        KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
                                   KC_DOT,  KC_0,    /* */ KC_NO,   KC_TRNS
    ),

    [SYM] = LAYOUT(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, /* */ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, /* */ KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
                                   KC_LPRN, KC_RPRN, /* */ KC_TRNS, KC_NO
    ),
};
// clang-format on

// left hand
const uint16_t PROGMEM alpha_x_c[]        = { KC_X,    KC_C,             COMBO_END };
const uint16_t PROGMEM alpha_s_x[]        = { KC_S,    KC_X,             COMBO_END };
const uint16_t PROGMEM alpha_d_c[]        = { KC_D,    KC_C,             COMBO_END };
const uint16_t PROGMEM alpha_f_v[]        = { KC_F,    KC_V,             COMBO_END };
const uint16_t PROGMEM alpha_q_a_z[]      = { KC_Q,    KC_A,    KC_Z,    COMBO_END };
const uint16_t PROGMEM alpha_sft_bspc[]   = { AL_SFT,  AL_BSPC,          COMBO_END };
const uint16_t PROGMEM alpha_z_sft_bspc[] = { KC_Z,    AL_SFT,  AL_BSPC, COMBO_END };


// right hand
const uint16_t PROGMEM alpha_j_k[]        = { KC_J,    KC_K,             COMBO_END };
const uint16_t PROGMEM alpha_k_l[]        = { KC_K,    KC_L,             COMBO_END };
const uint16_t PROGMEM alpha_m_comm[]     = { KC_M,    KC_COMM,          COMBO_END };
const uint16_t PROGMEM alpha_comm_dot[]   = { KC_COMM, KC_DOT,           COMBO_END };
const uint16_t PROGMEM alpha_j_m[]        = { KC_J,    KC_M,             COMBO_END };
const uint16_t PROGMEM alpha_k_comm[]     = { KC_K,    KC_COMM,          COMBO_END };
const uint16_t PROGMEM alpha_l_dot[]      = { KC_L,    KC_DOT,           COMBO_END };
const uint16_t PROGMEM alpha_spc_tab[]    = { AL_SPC,  AL_TAB,           COMBO_END };

combo_t key_combos[] = {
    // left hand
    COMBO(alpha_x_c,        KC_GRV   ),
    COMBO(alpha_s_x,        KC_LGUI  ),
    COMBO(alpha_d_c,        KC_LALT  ),
    COMBO(alpha_f_v,        KC_LCTL  ),
    COMBO(alpha_q_a_z,      QK_BOOT  ), // bootloader
    COMBO(alpha_sft_bspc,   KC_ESC   ),
    COMBO(alpha_z_sft_bspc, QK_REBOOT),

    // right hand
    COMBO(alpha_j_k,        KC_MINS  ),
    COMBO(alpha_k_l,        KC_SCLN  ),
    COMBO(alpha_m_comm,     KC_EQL   ),
    COMBO(alpha_comm_dot,   KC_BSLS  ),
    COMBO(alpha_j_m,        KC_LCTL  ),
    COMBO(alpha_k_comm,     KC_LALT  ),
    COMBO(alpha_l_dot,      KC_LGUI  ),
    COMBO(alpha_spc_tab,    MO(FUNC) ),
};

