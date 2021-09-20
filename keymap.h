#include QMK_KEYBOARD_H
#include <string.h>


// [Home Row Mods]

enum custom_keycodes {
    CAPSWORD = SAFE_RANGE,
    SNAKECASE,
    MT_AT,
    MT_LBRC,
    MT_LCBR,
    MT_LPRN,
    MT_RPRN,
    MT_EQL,
    MT_ASTR,
    MT_DLR,
    MT_HASH,
    MT_PPLS
};

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
#define GUI_AT MT(MOD_LGUI, KC_AT)
#define ALT_LBRC MT(MOD_LALT, KC_LBRC)
#define SFT_LCBR MT(MOD_LSFT, KC_LCBR)
#define HOME_LPRN MT(MOD_LCTL, KC_LPRN)
#define ALT_RPRN MT(MOD_RALT, KC_RPRN) 

// // Right-hand home row mods
#define GUI_HASH MT(MOD_LGUI ,KC_HASH)
#define ALT_DLR MT(MOD_LALT ,KC_DLR)
#define SFT_ASTR MT(MOD_LSFT ,KC_ASTR)
#define CTL_EQL MT(MOD_LCTL ,KC_EQL)
#define ALT_PPLS MT(MOD_RALT ,KC_PPLS) 

// --- 
// Layers
#define NAV TT(_RAISE)
#define LSPC LT(_LOWER, KC_SPC)

// 
#define COLEMAK   DF(_COLEMAK)
#define QWERTY   DF(_QWERTY)


// https://precondition.github.io/home-row-mods#using-non-basic-keycodes-in-mod-taps