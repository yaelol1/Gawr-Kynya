#include QMK_KEYBOARD_H
#include <string.h>

// ---
// COLEMAK
// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define SFT_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)
#define ALT_V RALT_T(KC_V)

// Right-hand home row mods
#define CTL_N RCTL_T(KC_N)
#define SFT_E RSFT_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)
#define ALT_M RALT_T(KC_M)

// ---
// QWERTY
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)

// Right-hand home row mods
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// ---
// NUM
// Left-hand home row mods
#define GUI_AT LGUI_T(KC_AT)
#define ALT_LBRC LALT_T(KC_LBRC)
#define SFT_LCBR LSFT_T(KC_LCBR)
#define HOME_LPRN LCTL_T(KC_LPRN)
#define ALT_RPRN RALT_T(KC_RPRN) 

// Right-hand home row mods
#define CTL_EQL RCTL_T(KC_EQL)
#define SFT_ASTR RSFT_T(KC_ASTR)
#define ALT_DLR LALT_T(KC_DLR)
#define GUI_HASH RGUI_T(KC_HASH)
#define ALT_PPLS RALT_T(KC_PPLS) 

// --- 
// Layers
#define NAV TT(_RAISE)
#define LSPC LT(_LOWER, KC_SPC)

// 
#define COLEMAK   DF(_COLEMAK)
#define QWERTY   DF(_QWERTY)

// #define GUI_HASH MT(MOD_LGUI, KC_F23)
// #define CMD_HASH LGUI_T(KC_LANG6)

// enum custom_keycodes {
//     MT_POUND = SAFE_RANGE
// };
// https://precondition.github.io/home-row-mods#using-non-basic-keycodes-in-mod-taps
// #define HOME_HASH CMD_T(MT_POUND)