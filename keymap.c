/* Copyright 2021 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"


// clang-format off

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,    KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  _______,            RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,   _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,    _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,    _______,  _______,  _______,  _______,             _______,            _______,
        _______,            UC_WIN,   UC_LINX,  _______,  _______,  _______,  NK_TOGG,    _______,  _______,  _______,  _______,             _______,  _______,
        _______,  _______,  _______,                                _______,                                  _______,  _______,   _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,    KC_DEL,             KC_MUTE,
        KC_GRV,   KC_DLR,   KC_EXLM,  KC_LBRC,  KC_LCBR,  KC_LPRN,  KC_ASTR,  KC_RPRN,  KC_RCBR,  KC_RBRC,  KC_AMPR,  KC_BSLS,    KC_PERC,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_EQL,     KC_SLSH,   KC_AT,              KC_PGDN,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,               KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_UNDS,               KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,    KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  _______,            RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,   _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,    _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,    _______,  _______,  _______,  _______,             _______,            _______,
        _______,            UC_WIN,   UC_LINX,  _______,  _______,  _______,  NK_TOGG,    _______,  _______,  _______,  _______,             _______,  _______,
        _______,  _______,  _______,                                _______,                                  _______,  _______,   _______,  _______,  _______,  _______),
};

// clang-format on

/*
shift @ = #
shift % = ^
shift _ = -

shift $ = 1
shift ! = 2
shift [ = 3
shift { = 4
shift ( = 5
shift * = 6
shift ) = 7
shift } = 8
shift ] = 9
shift & = 0
*/

#define OVERRIDE_LAYER 1 << WIN_BASE

const key_override_t shift_at_hashtag = ko_make_with_layers(MOD_MASK_SHIFT, KC_AT, KC_HASH, OVERRIDE_LAYER);
const key_override_t shift_percent_caret = ko_make_with_layers(MOD_MASK_SHIFT, KC_PERC, KC_CIRC, OVERRIDE_LAYER);
const key_override_t shift_underscore_minus = ko_make_with_layers(MOD_MASK_SHIFT, KC_UNDS, KC_MINS, OVERRIDE_LAYER);

const key_override_t shift_dollar_one      = ko_make_with_layers(MOD_MASK_SHIFT, KC_DLR,  KC_1, OVERRIDE_LAYER);
const key_override_t shift_exclamation_two = ko_make_with_layers(MOD_MASK_SHIFT, KC_EXLM, KC_2, OVERRIDE_LAYER);
const key_override_t shift_lbracket_three  = ko_make_with_layers(MOD_MASK_SHIFT, KC_LBRC, KC_3, OVERRIDE_LAYER);
const key_override_t shift_lsquiggly_four  = ko_make_with_layers(MOD_MASK_SHIFT, KC_LCBR, KC_4, OVERRIDE_LAYER);
const key_override_t shift_lparen_five     = ko_make_with_layers(MOD_MASK_SHIFT, KC_LPRN, KC_5, OVERRIDE_LAYER);
const key_override_t shift_star_six        = ko_make_with_layers(MOD_MASK_SHIFT, KC_ASTR, KC_6, OVERRIDE_LAYER);
const key_override_t shift_rparen_seven    = ko_make_with_layers(MOD_MASK_SHIFT, KC_RPRN, KC_7, OVERRIDE_LAYER);
const key_override_t shift_rsquiggly_eight = ko_make_with_layers(MOD_MASK_SHIFT, KC_RCBR, KC_8, OVERRIDE_LAYER);
const key_override_t shift_rbracket_nine   = ko_make_with_layers(MOD_MASK_SHIFT, KC_RBRC, KC_9, OVERRIDE_LAYER);
const key_override_t shift_ampersand_zero  = ko_make_with_layers(MOD_MASK_SHIFT, KC_AMPR, KC_0, OVERRIDE_LAYER);

const key_override_t **key_overrides = (const key_override_t *[]){
    &shift_at_hashtag,
    &shift_percent_caret,
    &shift_underscore_minus,

    &shift_dollar_one,
    &shift_exclamation_two,
    &shift_lbracket_three,
    &shift_lsquiggly_four,
    &shift_lparen_five,
    &shift_star_six,
    &shift_rparen_seven,
    &shift_rsquiggly_eight,
    &shift_rbracket_nine,
    &shift_ampersand_zero,

    NULL
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)}
};
#endif // ENCODER_MAP_ENABLE

// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }
    return true;
}
