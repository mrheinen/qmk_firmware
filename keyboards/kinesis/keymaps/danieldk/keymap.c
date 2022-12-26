#include QMK_KEYBOARD_H

enum custom_keycodes {
    SCRNS = SAFE_RANGE,
};

enum layer_names {
    _HOME,
    _PUNCT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HOME] = LAYOUT(
    KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,
    KC_EQL, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,
    KC_TAB, KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,
    KC_ESC, KC_A,   KC_R,   KC_S,   KC_T,   KC_G,
    KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,
            KC_GRV, KC_CAPS,KC_LEFT,KC_RGHT,
                    KC_LGUI,KC_LALT,
                            KC_HOME,
            KC_BSPC,KC_DEL, KC_END,

    KC_F9,  KC_F10, KC_F11, KC_F12, SCRNS,  KC_VOLD,  KC_VOLU, KC_WAKE, QK_BOOT,
    KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,KC_BSLS,
    KC_M,   KC_N,   KC_E,   KC_I,   KC_O,   KC_QUOT,
    KC_K,   KC_H,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
            KC_UP,  KC_DOWN,KC_LBRC,KC_RBRC,
                    KC_LCTL,KC_RGUI,
                            KC_PGUP,
            KC_PGDN,LT(_PUNCT,KC_ENTER), KC_SPC
    ),

[_PUNCT] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_LCBR,KC_RCBR,KC_NO,
    KC_NO,  KC_NO,  KC_HASH,KC_LPRN,KC_RPRN,KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_LBRC,KC_RBRC,KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_BSPC,KC_NO,  KC_NO,

    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,KC_NO, KC_NO, KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_GRV, KC_SLSH,KC_BSLS,KC_NO,  KC_NO,
    KC_NO,  KC_COLN,KC_SCLN,KC_DLR, KC_NO,  KC_NO,
    KC_NO,  KC_MINS,KC_EQL, KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_NO,  KC_NO,   KC_NO
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case SCRNS:
        SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_4))));
        return false;
    }
    return true;
}
