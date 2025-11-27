#pragma once

#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>

// Standard symbols (shifted versions of numbers and other keys)
#define SYM_EXCL &kp LS(N1) // !
#define SYM_AT &kp LS(N2) // @
#define SYM_HASH &kp LS(N3) // #
#define SYM_DLLR &kp LS(N4) // $
#define SYM_PERC &kp LS(N5) // %
#define SYM_CARET &kp LS(N6) // ^
#define SYM_AMPS &kp LS(N7) // &
#define SYM_ASTERISK &kp LS(N8) // *
#define SYM_LPAR &kp LS(N9) // (
#define SYM_RPAR &kp LS(N0) // )
#define SYM_MINUS &kp MINUS // -
#define SYM_UNDERSCORE &kp LS(MINUS) // _
#define SYM_EQUAL &kp EQUAL // =
#define SYM_PLUS &kp LS(EQUAL) // +
#define SYM_LBKT &kp LBKT // [
#define SYM_LBRC &kp LS(LBKT) // {
#define SYM_RBKT &kp RBKT // ]
#define SYM_RBRC &kp LS(RBKT) // }
#define SYM_BSLH &kp BSLH //
#define SYM_PIPE &kp LS(BSLH) // |
#define SYM_SCLN &kp SCLN // ;
#define SYM_COLON &kp LS(SCLN) // :
#define SYM_SQT &kp SQT // '
#define SYM_DQT &kp LS(SQT) // "
#define SYM_COMMA &kp COMMA // ,
#define SYM_LT &kp LS(COMMA) // <
#define SYM_DOT &kp DOT // .
#define SYM_GT &kp LS(DOT) // >
#define SYM_FSLH &kp FSLH // /
#define SYM_QMARK &kp LS(FSLH) // ?
#define SYM_GRAVE &kp GRAVE // `
#define SYM_TILDE &kp LS(GRAVE) // ~

// Media keys
#define KC_VOL_UP &kp C_VOL_UP
#define KC_VOL_DN &kp C_VOL_DN
#define KC_MUTE &kp C_MUTE
#define KC_PREV &kp C_PREV
#define KC_NEXT &kp C_NEXT
#define KC_PLAY_PAUSE &kp C_PLAY_PAUSE
#define KC_BRIGHT_UP &kp C_BRIGHTNESS_INC
#define KC_BRIGHT_DN &kp C_BRIGHTNESS_DEC

// Navigation keys
#define KC_LEFT &kp LEFT
#define KC_RIGHT &kp RIGHT
#define KC_UP &kp UP
#define KC_DOWN &kp DOWN
#define KC_HOME &kp HOME
#define KC_END &kp END
#define KC_PG_UP &kp PG_UP
#define KC_PG_DN &kp PG_DN

// Other special keys
#define KC_TAB &kp TAB
#define KC_BSPC &kp BSPC
#define KC_ENT &kp ENTER
#define KC_ESC &kp ESC
#define KC_SPACE &kp SPACE
#define KC_DEL &kp DEL
#define KC_CAPS &kp CAPS
#define KC_LSHIFT &kp LSHIFT
#define KC_RSHIFT &kp RSHIFT
#define KC_LCTRL &kp LCTRL
#define KC_RCTRL &kp RCTRL
#define KC_LALT &kp LALT
#define KC_RALT &kp RALT
#define KC_LGUI &kp LGUI
#define KC_RGUI &kp RGUI
#define KC_F1 &kp F1
#define KC_F2 &kp F2
#define KC_F3 &kp F3
#define KC_F4 &kp F4
#define KC_F5 &kp F5
#define KC_F6 &kp F6
#define KC_F7 &kp F7
#define KC_F8 &kp F8
#define KC_F9 &kp F9
#define KC_F10 &kp F10
#define KC_F11 &kp F11
#define KC_F12 &kp F12

#define KC_F18 &kp F18
#define KC_F19 &kp F19
#define KC_LANG &kp C_AC_NEXT_KEYBOARD_LAYOUT_SELECT

#define KC_PRINTSCREEN &kp PRINTSCREEN
#define KC_SEARCH &kp LG(SPACE) // Spotlight shortcut for macOS

// Bluetooth
#define BT_SEL_0 &bt BT_SEL 0
#define BT_SEL_1 &bt BT_SEL 1
#define BT_SEL_2 &bt BT_SEL 2
#define BT_SEL_3 &bt BT_SEL 3
#define BT_SEL_4 &bt BT_SEL 4
#define BT_CLR_KEY &bt BT_CLR
#define BOOTLOADER &bootloader
