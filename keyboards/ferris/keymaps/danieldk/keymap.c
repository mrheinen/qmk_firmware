#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
        KC_Q, KC_W, KC_F, KC_R, KC_G, KC_Y,                        KC_U, KC_I, KC_O, KC_P,
        LSFT_T(KC_A), LT(5,KC_S), LT(2,KC_D), LT(3,KC_T), KC_J,    KC_H, LT(4,KC_N), LT(1,KC_E), LT(6,KC_L), LSFT_T(KC_SCLN),
        KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B,              KC_K, KC_M, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,
        MT(MOD_LCTL,KC_TAB), KC_BSPC,                              LT(7,KC_SPC), MT(MOD_RGUI,KC_ENT)),
	[1] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,               KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_TRNS,
        KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS
    ),
	[2] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT),      KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_HOME, KC_PGDN, KC_END, KC_TRNS,
        KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS
    ),
	[3] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_UNDS, KC_PIPE, KC_QUOT, KC_TRNS,
        KC_CIRC, KC_ASTR, KC_AMPR, KC_NO, KC_TRNS,                 KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_MINS, KC_BSLS, KC_GRV, KC_TRNS,
        RGB_RMOD, KC_TRNS, KC_TRNS, RGB_MOD
    ),
	[4] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_SCLN,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT,                 KC_TRNS, KC_NO, KC_EQL, KC_PLUS, KC_PERC,
        KC_TRNS, KC_EXLM, KC_LBRC, KC_RBRC, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_VOLD, KC_TRNS,                                          KC_TRNS, KC_VOLU
    ),
	[5] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_TRNS, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_TRNS,           KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12,
        KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS
    ),
	[6] = LAYOUT_split_3x5_2(
        KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_0, KC_1, KC_2, KC_3, KC_PMNS,                           KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS,
        KC_PAST, KC_4, KC_5, KC_6, KC_PEQL,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS
    ),
	[7] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_TRNS, KC_COLN, KC_ESC, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
        KC_TRNS, KC_PERC, KC_SLSH, KC_ENT, KC_TRNS,                DF(1), KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_TRNS,               DF(0), KC_TRNS, RALT_T(KC_COMM), RCTL_T(KC_DOT), QK_BOOT,
        KC_TRNS, KC_TAB,                                           KC_NO, KC_TRNS
    )
};


