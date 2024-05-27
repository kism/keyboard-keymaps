/*
Copyright 2021 andys8 <andys8@users.noreply.github.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#define MACRO_LAYER_TIMEOUT 300000  //configure your timeout in milliseconds

#include QMK_KEYBOARD_H

typedef union {
  uint32_t raw;
  struct {
    bool     rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;

enum custom_keycodes {
    MACRO_USER_1 = SAFE_RANGE,
    MACRO_USER_1_PW,
    MACRO_USER_2,
    MACRO_USER_2_PW,
    MACRO_USER_3,
    MACRO_USER_3_PW,
    MACRO_USER_4,
    MACRO_USER_4_PW,
    MACRO_USER_5,
    MACRO_USER_5_PW,
    MACRO_CONTACT_INFO,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MACRO_USER_1:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_1_PW:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_2:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_2_PW:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_3:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_3_PW:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_4:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_4_PW:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_5:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_USER_5_PW:
            if (record->event.pressed) {
                SEND_STRING("");
            }
            break;
        case MACRO_CONTACT_INFO:
            if (record->event.pressed) {
                SEND_STRING("Return to Owner, PHONE NUMBER ");
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(MACRO_CONTACT_INFO, TO(0), TO(0),
               TO(0),              TO(0), TO(0),
               TO(0),              TO(0), TO(0)),

  [1] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [2] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [3] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [4] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [5] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [6] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [7] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [8] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

  [9] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

 [10] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

 [11] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

 [12] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

 [13] = LAYOUT(TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0),
               TO(0), TO(0), TO(0)),

 [14] = LAYOUT(MACRO_USER_1, MACRO_USER_4, TO(0),
               MACRO_USER_2, MACRO_USER_5, KC_TAB,
               MACRO_USER_3, KC_NO,        MO(15)),

 [15] = LAYOUT(MACRO_USER_1_PW, MACRO_USER_4_PW, TO(0),
               MACRO_USER_2_PW, MACRO_USER_5_PW, KC_ENTER,
               MACRO_USER_3_PW, KC_NO,           KC_NO),

};

void eeconfig_init_user(void) {  // EEPROM is getting reset!
//   user_config.raw = 0;
//   user_config.rgb_layer_change = true; // We want this enabled by default
//   eeconfig_update_user(user_config.raw); // Write default value to EEPROM now

  // use the non noeeprom versions, to write these values to EEPROM too
  rgblight_enable(); // Enable RGB by default
  rgblight_mode(1); // set to solid by default
  rgblight_sethsv(0, 0, 50); // Set it to white by default
  rgblight_enable_noeeprom();
  rgblight_mode_noeeprom(1);
  rgblight_sethsv_noeeprom(0, 0, 50);
}

layer_state_t layer_state_set_user(layer_state_t state) {
//   rgb_config_t rgblight_config; ???
  switch(biton32(state)) {
  case 14:
    // Green
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(1);
    rgblight_sethsv_noeeprom(100, 120, 127);
    break;
  case 15:
    // Red
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(1);
    rgblight_sethsv_noeeprom(255, 120, 127);
    break;
  default:
    // White
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(1);
    rgblight_sethsv_noeeprom(0, 0, 50);
    break;
}
return state;
}

void matrix_scan_user(void) {
  if (get_highest_layer(layer_state) == 14) {
    if (last_input_activity_elapsed() > MACRO_LAYER_TIMEOUT) {
      layer_move(0);
    }
  }
}
