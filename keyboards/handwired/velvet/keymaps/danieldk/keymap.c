#include QMK_KEYBOARD_H

enum layer_names {
  _BASE,
  _MAC,
  _PUNCT,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)

#define CT_Q  LCTL_T(KC_Q)
#define CT_CM RCTL_T(KC_COMM)
#define SF_Z  LSFT_T(KC_Z)
#define SF_SS RSFT_T(KC_SLSH)
#define AL_X  LALT_T(KC_X)
#define AL_DT RALT_T(KC_DOT)
#define LO_TB LT(LOWER, KC_TAB)

// Home row mods
uint16_t const _T_SFT = SFT_T(KC_T);  // Shift on indexes
uint16_t const _N_SFT = SFT_T(KC_N);
uint16_t const _S_CMD = CMD_T(KC_S);  // Command on middle
uint16_t const _E_CMD = CMD_T(KC_E);
uint16_t const _D_CTL = CTL_T(KC_D);  // Control on index down
uint16_t const _H_CTL = CTL_T(KC_H);

// MacOS shortcuts
uint16_t const _1PASS = LGUI(KC_BSLS);        // 1Password
uint16_t const _APEX  = LCTL(KC_UP);          // App exposé
uint16_t const _FQUIT = LALT(LGUI(KC_ESC));   // Force quit
uint16_t const _MCTL  = LCTL(KC_DOWN);        // Mission control
uint16_t const _SCRNS = LGUI(LSFT(KC_4));     // Screenshot
uint16_t const _EMOJI = LCTL(LGUI(KC_SPACE)); // Emoji picker



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                           KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
    KC_A,    KC_R,    _S_CMD,  _T_SFT,  KC_G,                           KC_M,    _N_SFT,  _E_CMD,  KC_I,    KC_O,
    SF_Z,    AL_X,    KC_C,    _D_CTL,  KC_V,                           KC_K,    _H_CTL,  KC_COMM, KC_DOT,  KC_SLSH,
                      KC_TAB,  KC_TAB,  KC_ESC,  LT(_PUNCT,KC_BSPC),    LT(_PUNCT, KC_SPC), LT(_MAC,KC_ENTER),  KC_LBRC, KC_RBRC
  ),

  [_PUNCT] = LAYOUT(
    KC_NO,    KC_NO,    KC_LCBR,  KC_RCBR,  KC_NO,                      KC_NO,   KC_GRV,  KC_SLSH, KC_BSLS,  KC_NO,
    KC_LT,    KC_GT,    KC_LPRN,  KC_RPRN,  KC_NO,                      KC_HASH, KC_COLN, KC_SCLN, KC_EQL,   KC_NO,
    KC_NO,    KC_NO,    KC_LBRC,  KC_RBRC,  KC_NO,                      KC_NO,   KC_MINS, KC_UNDS, KC_DLR,   KC_NO,
                        KC_NO,    KC_NO,  KC_NO,  KC_NO,        KC_NO,  KC_NO,   KC_NO,   KC_NO
  ),

  [_MAC] = LAYOUT(
    KC_NO,    KC_NO,    _MCTL,    _APEX,    KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,
    KC_NO,    KC_NO,    _SCRNS,   _1PASS,   KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,
    KC_NO,    KC_NO,    _FQUIT,   _EMOJI,   KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,    QK_BOOT,
                        KC_NO,    KC_NO,  KC_NO,  KC_NO,        KC_NO,  KC_NO,   KC_NO,   KC_NO
  ),

  [_LOWER] = LAYOUT(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN,
    KC_LSFT, KC_ESC,  KC_LGUI, KC_LALT, KC_QUOT,                        KC_HOME, KC_END,  KC_PGUP, KC_PGDN, KC_BSPC,
                      _______, _______, _______, _______,      _______, _______, _______, _______
  ),
  
  [_RAISE] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,                        XXXXXXX, XXXXXXX, KC_GRV,  KC_TILD, KC_COLN,
    KC_LSFT, KC_ESC,  KC_RGUI, KC_LALT, KC_DQUO,                        KC_TAB,  XXXXXXX, KC_RCTL, KC_RALT, KC_DEL,
                      _______, _______, _______, _______,       _______, _______, _______, _______
  ),
  
  [_ADJUST] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, 
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,                        KC_F11,  KC_F12,  KC_CAPS, XXXXXXX, KC_PSCR,
                      _______, _______, _______, _______,      _______, _______, _______, _______
  )
};
