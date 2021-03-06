/* Copyright 2020 Dustin Bosveld <steamyleafjuice@protonmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*#include QMK_KEYBOARD_H*/
/*#include "bongocat.c"*/

enum layers {
    _COLEMAK = 0,
    _GAME,
    _MEDR,
    _NAVR,
    _MOUR,
    _NSSL,
    _NSL,
    _FUNL
};

/* Add definitions for MT and LT */
#define SHFT_T MT(MOD_LSFT, KC_T)
#define SHFT_N MT(MOD_LSFT, KC_N)
#define SFT_ENT MT(MOD_LSFT, KC_ENT)
#define CTRL_S MT(MOD_LCTL, KC_S)
#define CTRL_E MT(MOD_LCTL, KC_E)
#define ALT_R MT(MOD_LALT, KC_R)
#define ALT_I MT(MOD_LALT, KC_I)
#define AGR_X MT(MOD_RALT, KC_X)
#define AGR_DOT MT(MOD_RALT, KC_DOT)
#define GUI_A MT(MOD_LGUI, KC_A)
#define GUI_O MT(MOD_LGUI, KC_O)
#define MED_ESC LT(_MEDR, KC_ESC)
#define NAV_SPC LT(_NAVR, KC_SPC)
#define MOS_TAB LT(_MOUR, KC_TAB)
#define SYM_ENT LT(_NSSL, KC_ENT)
#define NUM_BSC LT(_NSL, KC_BSPC)
#define FN_DEL LT(_FUNL, KC_DEL)
#define COLEMAK DF(_COLEMAK)
#define GAME DF(_GAME)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                           KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, KC_BSPC,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
      KC_ESC,   GUI_A,   ALT_R,  CTRL_S,  SHFT_T,    KC_G,                                           KC_M,  SHFT_N,  CTRL_E,   ALT_I,   GUI_O, KC_SCLN,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, _______, _______,    _______, _______,    KC_K,    KC_H, KC_COMM, AGR_DOT, KC_SLSH, SFT_ENT,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, MED_ESC, NAV_SPC, MOS_TAB,    SYM_ENT, NUM_BSC,  FN_DEL, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_GAME] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
      KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                           KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LCTL, _______,    _______, _______,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SCLN, SFT_ENT,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, KCLALT, MED_ESC,  KC_SPC, NAV_SPC,    _______, SYM_ENT, NUM_BSC,  FN_DEL, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_MEDR] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, _______, COLEMAK,    GAME, _______, _______,                                        RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                        _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, _______, _______, _______,    KC_MSTP, KC_MPLY, KC_MUTE, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_NAVR] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, _______, _______, _______, _______, _______,                                        KC_AGIN, KC_UNDO,  KC_CUT, KC_COPY, KC_PSTE, _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                        KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, S(KC_ENT), _______, KC_F2, _______, _______, _______, _______,    _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, _______, _______, _______,     KC_ENT, KC_BSPC,  KC_DEL, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),


    [_MOUR] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                        _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, _______, _______, _______,    KC_BTN3, KC_BTN1, KC_BTN2, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_NSSL] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                                        _______, _______, _______, _______, _______,  _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                                        _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______, _______,    _______, _______, _______, _______, _______, KC_RALT, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______,   KC_GT, KC_RPRN, KC_UNDS,    _______, _______, _______, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_NSL] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                                        _______, _______, _______, _______, _______,  _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                                        _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, KC_GRV,     KC_1,    KC_2,    KC_3, KC_BSLS, _______, _______,    _______, _______, _______, _______, _______, KC_RALT, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______,  KC_DOT,    KC_0, KC_MINS,    _______, _______, _______, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_FUNL] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                                        _______, _______, _______, _______, _______,  _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,                                        _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, _______, _______,    _______, _______, _______, _______, _______, KC_RALT, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, KC_APP,   KC_SPC,  KC_TAB,    _______, _______, _______, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),
};

// Disabling permissive hold for home row mods.
uint16_t get_permissive_hold(uint16_t keycode, keyrecord_t *record) { // {{{
    switch (keycode) {
        case SHFT_T:
        case SHFT_N:
        case SFT_ENT:
        case CTRL_S:
        case CTRL_E:
        case ALT_R:
        case ALT_I:
        case AGR_X:
        case AGR_DOT:
        case GUI_A:
        case GUI_O:
            // This actually *disables* the permissive hold for these keys.
            // See issue https://github.com/qmk/qmk_firmware/issues/8999
            return true;
        default:
            return false;
    }
}

/* layer_state_t layer_state_set_user(layer_state_t state) {
 *     return update_tri_layer_state(state, _NSL, _FUNL, _ADJUST);
 * }
 */


#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();

    switch (get_highest_layer(default_layer_state)) {
        case _GAME:
            oled_write_P(PSTR("Qwerty\n"), false);
            break;
        default:
            oled_write_P(PSTR("Colemak DHm\n"), false);
    }
    oled_write_P(PSTR("\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("Game\n"), false);
            break;
        case _MEDR:
            oled_write_P(PSTR("Media\n"), false);
            break;
        case _NAVR:
            oled_write_P(PSTR("Navigation\n"), false);
            break;
        case _MOUR:
            oled_write_P(PSTR("Mouse\n"), false);
            break;
        case _NSSL:
            oled_write_P(PSTR("Symbol\n"), false);
            break;
        case _NSL:
            oled_write_P(PSTR("Number\n"), false);
            break;
        case _FUNL:
            oled_write_P(PSTR("Fn\n"), false);
            break;
       default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_bongocat();
    }
}
#endif

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Scroll through active workspaces i3
        if (clockwise) {
            tap_code16(G(C(S((KC_LEFT)))));
        } else {
            tap_code16(G(C(S((KC_RGHT)))));
        }
    }
    else if (index == 1) {
        // Scroll through unread Discord channels
        if (clockwise) {
            tap_code16(S(A(KC_DOWN)));
        } else {
            tap_code16(S(A(KC_UP)));
        }
    }
}
#endif
