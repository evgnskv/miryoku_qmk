// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define USE_I2C
#define EE_HANDS
#define MASTER_LEFT
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_CLIPBOARD_MAC


#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,             KC_T,              KC_Y,            KC_U,             KC_I,            KC_O,            KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),     KC_G,              KC_H,            LSFT_T(KC_J),     LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_QUOT),   \
RGUI_T(KC_Z),      RALT_T(KC_X),      KC_C,              KC_V,             KC_B,              KC_N,            KC_M,             KC_COMMA,        RALT_T(KC_DOT),  RGUI_T(KC_SLASH),  \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),LT(U_NUM,KC_BSPC),LT(U_FUN,KC_DEL),U_NP,            U_NP

#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),  U_NA,              U_CPY,           U_UND,            U_RDO,            U_CUT,          U_PST,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,          U_NA,              KC_LEFT,         KC_DOWN,          KC_UP,            KC_RIGHT,       CW_TOGG,           \
KC_RGUI,           KC_RALT,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),   U_NA,              KC_HOME,         KC_PGDN,          KC_PGUP,          KC_END,         KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,             U_NA,              KC_RETN,         KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,             KC_F13,          KC_F14,           KC_F15,           KC_F16,         KC_F17,            \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,             KC_MS_L,         KC_MS_D,          KC_MS_U,          KC_MS_R,        U_NU,              \
KC_RGUI,           KC_RALT,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,             KC_WH_L,         KC_WH_D,          KC_WH_U,          KC_WH_R,        U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,             KC_BTN1,         KC_BTN2,          KC_BTN3,          U_NP,           U_NP

#define MIRYOKU_LAYER_MEDIA \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   TG(U_TD_U_AA),    KC_F18,          KC_F19,           KC_F20,           KC_F21,         KC_F22,            \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           TG(U_TD_U_CA),    KC_MPRV,         KC_VOLD,          KC_VOLU,          KC_MNXT,        U_NU,              \
KC_RGUI,           KC_RALT,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  TG(U_TD_U_DA),    U_NU,            U_NU,             U_NU,             U_NU,           OU_AUTO,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,             KC_MSTP,         KC_MPLY,          KC_MUTE,          U_NP,           U_NP

#define MIRYOKU_LAYER_AA \
KC_TAB,           KC_1,               KC_2,              KC_3,              KC_R,             KC_Y,            KC_U,             KC_I,             KC_O,           KC_P,             \
KC_LSFT,          KC_Q,               KC_W,              KC_E,              KC_F,             KC_H,            KC_J,             KC_K,             KC_L,           KC_SCLN,          \
KC_LCTL,          KC_A,               KC_S,              KC_D,              KC_B,             KC_N,            KC_M,             KC_COMMA,         KC_DOT,         KC_SLASH,         \
U_NP,             U_NP,               KC_LALT,           KC_SPACE,          MO(U_TD_U_AB),    KC_RETN,         KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_AB \
KC_ESC,           KC_4,               KC_5,              KC_6,              KC_T,             KC_F15,          KC_F7,            KC_F8,            KC_F9,          KC_F12,          \
KC_V,             KC_Z,               KC_W,              KC_X,              KC_G,             KC_F14,          KC_F4,            KC_F5,            KC_F6,          KC_F11,          \
KC_C,             KC_A,               KC_S,              KC_D,              KC_H,             KC_F13,          KC_F1,            KC_F2,            KC_F3,          KC_F10,          \
U_NP,             U_NP,               KC_N,              KC_M,              U_NA,             TG(U_TD_U_BASE), KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_CA \
KC_TAB,           KC_1,               KC_2,              KC_3,              KC_R,             KC_Y,            KC_U,             KC_I,             KC_O,           KC_P,            \
KC_LSFT,          KC_Q,               KC_W,              KC_E,              KC_F,             KC_H,            KC_J,             KC_K,             KC_L,           KC_SCLN,         \
KC_LCTL,          KC_A,               KC_S,              KC_D,              KC_G,             KC_N,            KC_M,             KC_COMMA,         KC_DOT,         KC_SLASH,        \
U_NP,             U_NP,               KC_LALT,           KC_SPACE,          MO(U_TD_U_CB),    KC_RETN,         KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_CB \
KC_ESC,           KC_4,               KC_5,              KC_6,              KC_T,             KC_F15,          KC_F7,            KC_F8,            KC_F9,          KC_F12,          \
KC_LSFT,          KC_Z,               KC_W,              KC_X,              KC_C,             KC_F14,          KC_F4,            KC_F5,            KC_F6,          KC_F11,          \
KC_LCTL,          KC_A,               KC_S,              KC_D,              KC_B,             KC_F13,          KC_F1,            KC_F2,            KC_F3,          KC_F10,          \
U_NP,             U_NP,               KC_LALT,           KC_SPACE,          U_NA,             TG(U_TD_U_BASE), KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_DA \
KC_TAB,           KC_1,               KC_2,              KC_3,              KC_R,             KC_Y,            KC_U,             KC_I,             KC_O,           KC_P,            \
KC_LSFT,          KC_Q,               KC_W,              KC_E,              KC_G,             KC_H,            KC_J,             KC_K,             KC_L,           KC_SCLN,         \
KC_LCTL,          KC_A,               KC_S,              KC_V,              KC_B,             KC_N,            KC_M,             KC_COMMA,         KC_DOT,         KC_SLASH,        \
U_NP,             U_NP,               KC_LALT,           KC_SPACE,          MO(U_TD_U_DB),    KC_RETN,         KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_DB \
KC_ESC,           KC_4,               KC_5,              KC_6,              KC_T,             KC_F15,          KC_F7,            KC_F8,            KC_F9,          KC_F12,          \
KC_LSFT,          KC_Q,               KC_D,              KC_F,              KC_G,             KC_F14,          KC_F4,            KC_F5,            KC_F6,          KC_F11,          \
KC_LALT,          KC_Z,               KC_X,              KC_C,              KC_B,             KC_F13,          KC_F1,            KC_F2,            KC_F3,          KC_F10,          \
U_NP,             U_NP,               KC_LALT,           KC_SPACE,          U_NA,             TG(U_TD_U_BASE), KC_BSPC,          KC_DEL,           U_NP,           U_NP

#define MIRYOKU_LAYER_LIST   \
MIRYOKU_X(BASE,   "Base")    \
MIRYOKU_X(EXTRA,  "Extra")   \
MIRYOKU_X(TAP,    "Tap")     \
MIRYOKU_X(BUTTON, "Button")  \
MIRYOKU_X(NAV,    "Nav")     \
MIRYOKU_X(MOUSE,  "Mouse")   \
MIRYOKU_X(MEDIA,  "Media")   \
MIRYOKU_X(NUM,    "Num")     \
MIRYOKU_X(SYM,    "Sym")     \
MIRYOKU_X(FUN,    "Fun")     \
MIRYOKU_X(AA,     "A Base")  \
MIRYOKU_X(AB,     "A Extra") \
MIRYOKU_X(CA,     "C Base")  \
MIRYOKU_X(CB,     "C Extra") \
MIRYOKU_X(DA,     "D Base")  \
MIRYOKU_X(DB,     "D Extra")

#define MIRYOKU_LAYERMAPPING_AA MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_AB MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_CA MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_CB MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_DA MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_DB MIRYOKU_MAPPING
