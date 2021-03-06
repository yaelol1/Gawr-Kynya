/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#include QMK_KEYBOARD_H
#include "features/casemodes.h"
#include "keymap.h"

enum layers {
    _QWERTY = 0,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _GAMING,
    _ADJUST
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]   = {

// todo - ADJUST - OLED

    [_QWERTY] = LAYOUT(
 // ,-----------------------------------------------------.                                                ,-----------------------------------------------------. 
      KC_TAB,    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINUS,
 // |--------+--------+--------+--------+--------+--------|                                                |--------+--------+--------+--------+--------+--------| 
      KC_BSPC, GUI_A, ALT_S, SFT_D, CTL_F, KC_G,                                                              KC_H,   CTL_J,   SFT_K,   ALT_L, GUI_SCLN,  KC_QUOT,
 // `--------------------------+--------+--------+--------+--------+----------|         |--------+--------+--------+--------+---------+--------------------------'
      NAV,   KC_Z,   KC_X,   KC_C,   ALT_V,   KC_B,     KC_HYPR,   KC_MEH,             LSPC, KC_APP,   KC_N,  ALT_M,  KC_COMM,   KC_DOT, KC_SLSH,     NAV,
//  `-------+-------+--------+------+------+------+----=--+-------+-----------|         |------+------+------+------+------+-------+------+---------'
                         TT(_GAMING), NUMPAD, CAPSWORD, KC_ESC, KC_ENT,             LSPC, KC_QUOT, SNAKECASE,  COLEMAK, KC_MPLY
                            //`--------------------------------------------'            `--------------------------------------------'
    ),

    [_COLEMAK] = LAYOUT(
 // ,-----------------------------------------------------.                                                 ,-----------------------------------------------------.
        KC_TAB, KC_Q,   KC_W,   KC_F,   KC_P,     KC_G,                                                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCOLON,    KC_MINUS,
 // |--------+--------+--------+--------+--------+--------|                                                |--------+--------+--------+--------+--------+--------|
       KC_BSPC, GUI_A, ALT_R,  SFT_S,   HOME_T,    KC_D,                                                      KC_H, CTL_N, SFT_E, ALT_I, GUI_O,      KC_QUOT,
 // `--------------------------+--------+--------+--------+--------+----------|         |--------+--------+--------+--------+--------+--------------------------'
        NAV, KC_Z,   KC_X,     KC_C,   ALT_V,    KC_B,   KC_HYPR,   KC_MEH,            LSPC, KC_APP,   KC_K,    ALT_M,  KC_COMM,  KC_DOT,   KC_SLSH,     NAV,
//  `----------------------+------+------+------+------+----------------------|          | ------+------+------+------+------+----------------------'
                          TT(_GAMING),  NUMPAD, CAPSWORD, KC_ESC, KC_ENT,             LSPC, KC_QUOT, SNAKECASE, QWERTY, KC_MPLY
                           //`------------------------------------------------'          `--------------------------------------------'
    
    
    ),

    
[_LOWER] = LAYOUT(
 //,-----------------------------------------------------.                                              ,-----------------------------------------------------.
      _______, KC_1,   KC_2,    KC_3,     KC_4,    KC_5,                                                   KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    _______,
 //|--------+--------+--------+--------+--------+--------|                                              |--------+--------+--------+--------+--------+--------|
      _______,GUI_AT, ALT_LBRC, SFT_LCBR, HOME_LPRN, KC_BSLS,                                            KC_AMPR, CTL_EQL, SFT_ASTR, ALT_DLR, GUI_HASH, _______,
 //`--------------------------+--------+--------+--------+--------+----------|       |--------+--------+--------+--------+--------+--------------------------'
      _______, KC_CIRC,  KC_RBRC, KC_RCBR, KC_RPRN, KC_PIPE, _______, _______,       _______, _______, KC_EXLM, ALT_PPLS, KC_PERC, KC_TILD, KC_GRAVE,  _______,
//  * `----------------------+------+------+------+------+------------------|        |------+------+------+------+------+---        -------------------'
                             _______, _______,_______, _______, _______,              _______, _______, _______,  _______, _______
                         //`--------------------------------------------'             `--------------------------------------------'
    ),

 [_RAISE] = LAYOUT(
 //,-----------------------------------------------------.                                              ,-----------------------------------------------------.
      _______ ,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                                             KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  _______,
 //|--------+--------+--------+--------+--------+--------|                                              |--------+--------+--------+--------+--------+--------|
      _______, KC_DEL,KC_LEFT, KC_UP, KC_RIGHT, KC_F11,                                             KC_F12, KC_MS_LEFT, KC_MS_U, KC_MS_RIGHT, KC_PGUP, _______,
 //`--------------------------+--------+--------+--------+--------+----------|       |--------+--------+--------+--------+--------+--------------------------'
      _______, KC_INS, KC_PSCR, KC_DOWN, KC_HOME, KC_END, _______, _______,       _______, _______,  KC_MS_BTN3, KC_MS_BTN1, KC_MS_DOWN, KC_MS_BTN2, KC_PGDN, _______,
//  * `----------------------+------+------+------+------+------------------|        |------+------+------+------+------+---        -------------------'
                            _______, _______, _______,  _______, _______,       _______, _______, _______, _______, _______
                         //`--------------------------------------------'             `--------------------------------------------'
    ),
           

     [_GAMING] = LAYOUT(
//,-----------------------------------------------------.                                               ,-----------------------------------------------------.
      _______, KC_Q,   KC_1,   KC_2,   KC_3,      KC_4,                                                     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  _______,
 //|--------+--------+--------+--------+--------+--------|                                               |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_A,   KC_W,   KC_F,    KC_R,     KC_G,                                                  _______, _______, _______, _______,  _______,  _______,
 //`--------------------------+--------+--------+--------+--------+----------|         |--------+--------+--------+--------+--------+--------------------------'
      KC_LCTRL, KC_Z,  KC_S,    KC_D,   KC_X,      KC_C,   KC_V,   KC_ENT,                KC_SPC, _______, _______, _______, _______, _______, _______, _______,
//  * `----------------------+------+------+------+------+------------------|          |------+------+------+------+------+----------------------'
                         _______, _______,  MO(_QWERTY), MO(_COLEMAK), KC_SPC,            KC_SPC, _______, _______, _______, _______
                           //`--------------------------------------------'           `--------------------------------------------'
    ),

    [_ADJUST] = LAYOUT(
      _______, _______, _______,   _______,   _______,   _______,                                      KC_SLSH, KC_7,    KC_8,    KC_9,    KC_MINS, _______,
      _______, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI,  RGB_MOD,                                           KC_ASTR, KC_4,    KC_5,    KC_6,    KC_PLUS, _______,
      _______, RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD,   _______, _______, _______,     _______, _______, KC_DOT, KC_1,    KC_2,    KC_3,    KC_ENT, _______,
                                 _______, _______, _______, _______, _______,      _______, KC_0, KC_0,    _______, _______
    ),

};



// ---
// X-case - home row
// custom keycodes declarations are at keymap.h

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    
    if (!process_case_modes(keycode, record)) {
        return false;
    }


    switch (keycode) {
        case CAPSWORD: {
            if (record->event.pressed) {
                enable_caps_word();
            }
            return false;
            break;
        }
        case SNAKECASE: {
                if (record->event.pressed) {
                enable_xcase_with(KC_UNDS);
            }
            return false;
            break;
        }
        case GUI_AT:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_AT);
                }
                return false;
            }
        break;
         case ALT_LBRC:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_LBRC);
                }
                return false;
            }
        break;

         case SFT_LCBR:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_LCBR);
                }
                return false;
            }
        break;
         case HOME_LPRN:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_LPRN);
                }
                return false;
            }
        break;
         case ALT_RPRN:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_RPRN);
                }
                return false;
            }
        break;

        case CTL_EQL:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_EQL);
                }
                return false;
            }
        break;
         case SFT_ASTR:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_ASTR);
                }
                return false;
            }
        break;

         case ALT_DLR:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_DLR);
                }
                return false;
            }
        break;
         case GUI_HASH:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_HASH);
                }
                return false;
            }
        break;
         case ALT_PPLS:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                tap_code16(KC_PPLS);
                }
                return false;
            }
        break;
    }
    return true;
}



// ---
// OLED

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}

static void render_status(void) {

    oled_write_P(PSTR("Gawr Kynya \n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("UwU\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("UwUr\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("F-U\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Numerendo\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("*") : PSTR("       "), false);
    oled_write_P(led_state.caps_lock ? PSTR("**") : PSTR("       "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("Mute ") : PSTR("       "), false);
}


// WPM-responsive animation stuff here
#define IDLE_FRAMES 4
 #define PREP_FRAMES 1 // uncomment if >1

#define ANIM_FRAME_DURATION 800 // how long each frame lasts in ms
#define ANIM_SIZE 1024 // number of bytes in array, minimize for adequate firmware size, max is 1024

uint32_t anim_timer = 8;
uint8_t current_idle_frame = 0;

uint8_t current_tap_frame = 0;


// Images credit j-inc(/James Incandenza) and pixelbenny. Credit to obosob for initial animation approach.
static void render_anim(void) {
    static const char PROGMEM idle[IDLE_FRAMES][ANIM_SIZE] = {
        {    
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x77, 0xf7, 0xe7, 0x87, 0x0f, 0x0f, 0x9f, 0xdf, 0x6f, 0xa7, 0xb7, 0xf7, 0x77, 0xf7, 0xf7, 0xf7, 0xf7, 0xb7, 0x77, 0xf7, 0xe7, 0xcf, 0x9f, 0x0f, 0x0f, 0xc7, 0xe7, 0xf3, 0xe3, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x8f, 0x8f, 0x8f, 0x8f, 0xcf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x07, 0xdb, 0x1d, 0xdd, 0xdb, 0x07, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0c, 0xf1, 0xe3, 0x01, 0xf8, 0x27, 0x79, 0xbc, 0xaf, 0x97, 0xc9, 0xcc, 0x06, 0x3f, 0x1f, 0xcc, 0x8d, 0x5b, 0x5e, 0x5c, 0xb1, 0xbf, 0x71, 0xec, 0x5c, 0xec, 0xb1, 0x73, 0xe0, 0x02, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x4f, 0x20, 0x0f, 0x26, 0x01, 0x27, 0x00, 0x4f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x9f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xe8, 0xd0, 0xbf, 0x38, 0x1c, 0x00, 0x7e, 0xfe, 0xe2, 0xe0, 0xff, 0xaf, 0x7f, 0x7f, 0xbe, 0xe2, 0xe0, 0xfc, 0x10, 0x00, 0x8f, 0xff, 0x7e, 0x1d, 0x03, 0x7a, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7c, 0xce, 0xff, 0xf3, 0xff, 0xbe, 0x1c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0xf3, 0xe6, 0xcc, 0x98, 0x91, 0xc3, 0xc6, 0x80, 0x13, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x30, 0x10, 0x00, 0x08, 0x0d, 0xe9, 0x2d, 0x2d, 0xe9, 0x0d, 0x05, 0x05, 0xc0, 0x00, 0x00, 0x0c, 0x10, 0x60, 0xec, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x2a, 0x2f, 0x78, 0x5f, 0x01, 0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0xe2, 0x46, 0x8e, 0x0e, 0x16, 0xda, 0x38, 0x70, 0x60, 0x40, 0x00, 0xc0, 0x40, 0xc0, 0x03, 0x30, 0x38, 0xe8, 0x24, 0x24, 0x62, 0x21, 0xbe, 0x00, 0xa0, 0xa0, 0xd0, 0x50, 0x5a, 0x16, 0xce, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x36, 0x36, 0xf0, 0x30, 0xff, 0x1f, 0x1b, 0xf8, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xf9, 0xfd, 0xfd, 0xfd, 0xfd, 0xf9, 0xfb, 0xfb, 0xdf, 0xdf, 0xdf, 0xef, 0xef, 0xdf, 0xdf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xfc, 0xfd, 0xfd, 0xfd, 0xfc, 0xf8, 0xf9, 0x00, 0xe8, 0xd8, 0x98, 0xd8, 0xc8, 0xe8, 0x0c, 0xcc, 0x0c, 0x1c, 0x3c, 0xdc, 0xec, 0xf4, 0xf0, 0xc0, 0x86, 0x0e, 0x1f, 0x3f, 0x7f, 0x7f, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 0xdf, 0xdf, 0xdf, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xef, 0xe7, 0xfb, 0xf9, 0xfd, 0xfc, 0xfc, 0xdd, 0xe7, 0xe7, 0xe1, 0xf1, 0xd9, 0xc8, 0xc0, 0xc0, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc2, 0xc1, 0xc3, 0xff, 0xfd, 0xf9, 0xf3, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xc7, 0x47, 0x07, 0x47, 0x47, 0x47, 0x80, 0x3f, 0x7e, 0xfc, 0xf8, 0x01, 0xcf, 0x4f, 0x47, 0xa3, 0x03, 0xe0, 0x00, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x8c, 0x8e, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfc, 0x79, 0x7b, 0x7f, 0xff, 0xfe, 0xfe, 0xfc, 0xfd, 0xfd, 0xfd, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0xbf, 0xff, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x8f, 0xc0, 0x43, 0x43, 0x02, 0x03, 0x03, 0x03, 0x03, 0x08, 0x08, 0x0f, 0x0f, 0x08, 0x46, 0x07, 0x03, 0x03, 0x03, 0x08, 0x0e, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xfb, 0xf7, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xf3, 0xf9, 0xff, 0xff 
        },
        {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x77, 0xf7, 0xe7, 0x87, 0x0f, 0x0f, 0x9f, 0xdf, 0x6f, 0xa7, 0xb7, 0xf7, 0x77, 0xf7, 0xf7, 0xf7, 0xf7, 0xb7, 0x77, 0xf7, 0xe7, 0xcf, 0x9f, 0x0f, 0x0f, 0xc7, 0xe7, 0xf3, 0xe3, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x8f, 0x8f, 0x8f, 0x8f, 0xcf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x07, 0xdb, 0x1d, 0xdd, 0xdb, 0x07, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0c, 0xf1, 0xe3, 0x01, 0xf8, 0x27, 0x79, 0xbc, 0xaf, 0x93, 0xc9, 0xcc, 0x06, 0x3f, 0x1f, 0xcc, 0x8d, 0x5b, 0x5e, 0x5c, 0xb1, 0xbf, 0x71, 0xec, 0x5c, 0xec, 0xb1, 0x73, 0xe0, 0x02, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x4f, 0x20, 0x0f, 0x26, 0x01, 0x27, 0x00, 0x4f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x9f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xe8, 0xd0, 0xbf, 0x38, 0x1c, 0x00, 0x7e, 0xfe, 0xe2, 0xe0, 0xff, 0xaf, 0x7f, 0x7f, 0xbe, 0xe2, 0xe0, 0xfc, 0x10, 0x00, 0x8f, 0xff, 0x7c, 0x1b, 0x07, 0x7a, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7c, 0xce, 0xff, 0xf3, 0xff, 0xbe, 0x1c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0xf3, 0xe6, 0xcc, 0x98, 0x81, 0xe3, 0xc6, 0x80, 0x19, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0x78, 0x30, 0x00, 0x08, 0x0d, 0xe9, 0x2d, 0x2d, 0xe9, 0x0d, 0x05, 0x05, 0xc0, 0x00, 0x00, 0x0c, 0x10, 0x10, 0x74, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x2a, 0x2f, 0x78, 0x5f, 0x01, 0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0xe2, 0x46, 0x8e, 0x1e, 0x0e, 0x36, 0x72, 0x60, 0x40, 0x00, 0xc0, 0x40, 0xc0, 0x03, 0x30, 0x38, 0xe8, 0x24, 0x24, 0x62, 0x21, 0xbe, 0x00, 0xa0, 0xa0, 0xb0, 0xd0, 0xd8, 0xda, 0x06, 0xce, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xbf, 0xbf, 0xdf, 0xdf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x36, 0x36, 0xf0, 0x30, 0xff, 0x1f, 0x1b, 0xf8, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xfd, 0xfd, 0xfd, 0xfd, 0xf9, 0xfb, 0xdb, 0xdf, 0xdf, 0xdf, 0xef, 0xcf, 0xdf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfd, 0xfd, 0xfc, 0xf8, 0xf9, 0x00, 0xe8, 0xd8, 0x98, 0xd8, 0xc8, 0xe8, 0x0c, 0xcc, 0x0c, 0x1c, 0x3c, 0xdc, 0xec, 0xf4, 0xf0, 0xc0, 0x85, 0x0d, 0x1e, 0x3e, 0x7f, 0x7f, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0xef, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xf7, 0xf3, 0xfb, 0xd9, 0xc4, 0xc6, 0x49, 0x41, 0xe1, 0xd0, 0xd0, 0xc0, 0x80, 0x80, 0xe0, 0xd0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc2, 0xc1, 0xc1, 0xf9, 0xfb, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xc7, 0x47, 0x07, 0x47, 0x47, 0x47, 0x80, 0x3f, 0x7e, 0xfc, 0xf8, 0x01, 0xcf, 0x4f, 0x47, 0xa3, 0x03, 0xe0, 0x00, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x8c, 0x8e, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x9f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x03, 0x03, 0x82, 0x03, 0x03, 0x03, 0x03, 0x08, 0x08, 0x8f, 0x0f, 0x08, 0x06, 0x07, 0x03, 0x03, 0x03, 0x08, 0x0e, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf3, 0xfb, 0xfb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfe, 0xff, 0xff
        },
        {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x77, 0xf7, 0xe7, 0x87, 0x0f, 0x0f, 0x9f, 0xdf, 0x6f, 0xa7, 0xb7, 0xf7, 0x77, 0xf7, 0xf7, 0xf7, 0xf7, 0xb7, 0x77, 0xf7, 0xe7, 0xcf, 0x9f, 0x0f, 0x0f, 0xc7, 0xe7, 0xf3, 0xe3, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x8f, 0x8f, 0x8f, 0x8f, 0xcf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x07, 0xdb, 0x1d, 0xdd, 0xdb, 0x07, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0c, 0xf1, 0xe3, 0x01, 0xf8, 0x27, 0x79, 0xac, 0xb7, 0x9b, 0xc9, 0xcc, 0x06, 0x3f, 0x1f, 0xcc, 0x8d, 0x5b, 0x5e, 0x5c, 0xb1, 0xbf, 0x71, 0xec, 0x5c, 0xec, 0xb1, 0x73, 0xe0, 0x02, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x4f, 0x20, 0x0f, 0x26, 0x01, 0x27, 0x00, 0x4f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x9f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xe8, 0xd0, 0xbf, 0x38, 0x1c, 0x00, 0x7e, 0xfe, 0xe2, 0xe0, 0xff, 0xaf, 0x7f, 0x7f, 0xbe, 0xe2, 0xe0, 0xfc, 0x10, 0x00, 0x8f, 0xff, 0x7c, 0x1b, 0x07, 0x7a, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7c, 0xce, 0xff, 0xf3, 0xff, 0xbe, 0x1c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0xf3, 0xe6, 0xcc, 0x98, 0x91, 0xc3, 0xc6, 0x80, 0x13, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x30, 0x10, 0x00, 0x08, 0x0d, 0xe9, 0x2d, 0x2d, 0xe9, 0x0d, 0x05, 0x05, 0xc0, 0x00, 0x00, 0x0c, 0x10, 0x60, 0xec, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x2a, 0x2f, 0x78, 0x5f, 0x01, 0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0xe2, 0x46, 0x8e, 0x0e, 0x16, 0xda, 0x38, 0x70, 0x60, 0x40, 0x00, 0xc0, 0x40, 0xc0, 0x03, 0x30, 0x38, 0xe8, 0x24, 0x24, 0x62, 0x21, 0xbe, 0x00, 0xa0, 0xa0, 0xd0, 0x50, 0x5a, 0x16, 0xce, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xef, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x36, 0x36, 0xf0, 0x30, 0xff, 0x1f, 0x1b, 0xf8, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xef, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfd, 0xfd, 0xfd, 0xfd, 0xff, 0xff, 0xdf, 0xdf, 0xff, 0xbf, 0xbf, 0xff, 0xff, 0xef, 0xf7, 0xff, 0xfc, 0xfd, 0xfd, 0xfd, 0xfc, 0xf8, 0xf9, 0x00, 0xe8, 0xd8, 0x98, 0xd8, 0xc8, 0xe8, 0x0c, 0x0c, 0x0c, 0x1c, 0x3c, 0xdc, 0x9c, 0xdc, 0xe0, 0x00, 0x0e, 0x3e, 0x3f, 0xff, 0xff, 0x7f, 0x1f, 0x0f, 0x07, 0x03, 0x03, 0x07, 0xff, 0xff, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0xcf, 0xe7, 0xe7, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xc7, 0xc3, 0xd9, 0xc1, 0xcb, 0xc1, 0x80, 0xc0, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc9, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xc7, 0x47, 0x07, 0x47, 0x47, 0x47, 0x80, 0x3e, 0xfc, 0xf0, 0x60, 0x01, 0x1f, 0x9f, 0x0f, 0x8f, 0x00, 0x60, 0x80, 0x81, 0x80, 0x00, 0x00, 0x00, 0x80, 0x98, 0xdc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xdf, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x03, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x08, 0x08, 0x0f, 0x08, 0x07, 0x07, 0x05, 0x04, 0x05, 0x0b, 0x08, 0x0f, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf3, 0xfb, 0xfb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfe, 0xff, 0xff 
        },
        {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x77, 0xf7, 0xe7, 0x87, 0x0f, 0x0f, 0x9f, 0xdf, 0x6f, 0xa7, 0xb7, 0xf7, 0x77, 0xf7, 0xf7, 0xf7, 0xf7, 0xb7, 0x77, 0xf7, 0xe7, 0xcf, 0x9f, 0x0f, 0x0f, 0xc7, 0xe7, 0xf3, 0xe3, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x8f, 0x8f, 0x8f, 0x8f, 0xcf, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x07, 0xdb, 0x1d, 0xdd, 0xdb, 0x07, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0c, 0xf1, 0xe3, 0x01, 0xf8, 0x27, 0x79, 0xac, 0xb7, 0x9b, 0xc9, 0xcc, 0x06, 0x3f, 0x1f, 0xcc, 0x8d, 0x5b, 0x5e, 0x5c, 0xb1, 0xbf, 0x71, 0xec, 0x5c, 0xec, 0xb1, 0x73, 0xe0, 0x02, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x4f, 0x20, 0x0f, 0x26, 0x01, 0x27, 0x00, 0x4f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x9f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xe8, 0xd0, 0xbf, 0x38, 0x1c, 0x00, 0x7e, 0xfe, 0xe2, 0xe0, 0xff, 0xaf, 0x7f, 0x7f, 0xbe, 0xe2, 0xe0, 0xfc, 0x10, 0x00, 0x8f, 0xff, 0x7c, 0x1b, 0x07, 0x7a, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7c, 0xce, 0xff, 0xf3, 0xff, 0xbe, 0x1c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0xf3, 0xe6, 0xcc, 0x98, 0x91, 0xc3, 0xc6, 0x80, 0x13, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x30, 0x10, 0x00, 0x08, 0x0d, 0xe9, 0x2d, 0x2d, 0xe9, 0x0d, 0x05, 0x05, 0xc0, 0x00, 0x00, 0x0c, 0x10, 0x60, 0xec, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x2a, 0x2f, 0x78, 0x5f, 0x01, 0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0xe2, 0x46, 0x8e, 0x0e, 0x16, 0xda, 0x38, 0x70, 0x60, 0x40, 0x00, 0xc0, 0x40, 0xc0, 0x03, 0x30, 0x38, 0xe8, 0x24, 0x24, 0x62, 0x21, 0xbe, 0x00, 0xa0, 0xa0, 0xd0, 0x50, 0x5a, 0x16, 0xce, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x36, 0x36, 0xf0, 0x30, 0xff, 0x1f, 0x1b, 0xf8, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xf7, 0xfb, 0xfb, 0xf7, 0xf7, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0xbf, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfd, 0xfd, 0xfd, 0xfc, 0xf8, 0xf9, 0x00, 0xe8, 0xd8, 0x98, 0xd8, 0xc8, 0xe8, 0x0c, 0xcc, 0x0c, 0x1c, 0x3c, 0xdc, 0x9c, 0xdc, 0xe0, 0x00, 0x06, 0x0e, 0x1f, 0x3f, 0x7f, 0x7f, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 0x7d, 0xfd, 0xfd, 0xfe, 0xfe, 0xfd, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xbf, 0x9f, 0x9f, 0xcf, 0xc7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x5f, 0x87, 0xc7, 0xc1, 0xc1, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc1, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xcf, 0xdf, 0xdf, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xc7, 0x47, 0x07, 0x47, 0x47, 0x47, 0x80, 0x3f, 0xfe, 0xfc, 0x78, 0x01, 0x1f, 0x9f, 0x0f, 0x8f, 0x00, 0x60, 0x80, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x8c, 0x8e, 0xdf, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xfa, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x73, 0x73, 0x67, 0xef, 0xef, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0xfb, 0xfb, 0xf3, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x03, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x08, 0x08, 0x0f, 0x08, 0x07, 0x07, 0x05, 0x04, 0x05, 0x0b, 0x08, 0x0f, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xf9, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xfb, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xdf, 0xcf, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        }
    };


        //assumes 1 frame prep stage
    void animation_phase(void) {
            current_idle_frame = (current_idle_frame + 1) % IDLE_FRAMES;
            oled_write_raw_P(idle[abs((IDLE_FRAMES-1)-current_idle_frame)], ANIM_SIZE);              
    }   
    if(timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animation_phase();
    }
    
}

void oled_task_user(void) {
    if (is_keyboard_master()) {

     // Renders the current keyboard state (layer, lock, caps, scroll, etc)
        render_status();

    } else {

        render_anim();
        oled_set_cursor(0,6);      

    }
}
#endif

// ---
// ENCODER
#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
  
        switch (biton32(layer_state)) {
            case _RAISE:
                if (clockwise) {
                    tap_code(KC_MPRV);
                } else {
                    tap_code(KC_MNXT);
                }
                break;
            case _LOWER:
                // Scrolling with up and down.
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }
                break;
            case _GAMING:
                // Scrolling with left and right.
                if (clockwise) {
                    tap_code(KC_LEFT);
                } else {
                    tap_code(KC_RIGHT);
                }
                break;
            default:
                // Volume control.
                if (clockwise) {
                    tap_code(KC_VOLD);
                } else {
                    tap_code(KC_VOLU);
                }
                break;
        }
    
    return true;
}

#endif