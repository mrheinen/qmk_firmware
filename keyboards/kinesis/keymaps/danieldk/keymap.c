#include QMK_KEYBOARD_H

enum layer_names {
    _HOME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HOME] = LAYOUT(
           KC_ESC, KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8,
           KC_EQL, KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,
           KC_TAB, KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_B   ,
           KC_CAPS,KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_G   ,
           KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_D   ,KC_V   ,
                   KC_GRV ,KC_INS ,KC_LEFT,KC_RGHT,
			   KC_LCTL,KC_LALT,
                                    KC_HOME,
                           KC_BSPC,KC_DEL ,KC_END ,
    KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_PSCR ,KC_SCRL  ,KC_PAUS, KC_NO, QK_BOOT,
	KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0,   KC_MINS,
	KC_J   ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN,KC_BSLS,
	KC_M   ,KC_N   ,KC_E   ,KC_I   ,KC_O,   KC_QUOT,
	KC_K   ,KC_H   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
		KC_UP  ,KC_DOWN,KC_LBRC,KC_RBRC,
           KC_RGUI,KC_RCTL,
           KC_PGUP,
           KC_PGDN,KC_ENTER ,KC_SPC
    )
};
