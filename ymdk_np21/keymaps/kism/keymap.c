#include QMK_KEYBOARD_H

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMKBEST:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("QMK is the best thing ever!");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_ortho_6x4(TO(0),   TO(1),   TO(2),   TO(3), 
                               KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
                               KC_P7,   KC_P8,   KC_P9,   KC_PPLS, 
                               KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
                               KC_P1,   KC_P2,   KC_P3,   KC_PENT, 
                               KC_P0,   KC_P0,   KC_PDOT, KC_PENT),

        [1] = LAYOUT_ortho_6x4(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                               QMKBEST, QMKBEST, QMKBEST, KC_NO, 
                               QMKBEST, QMKBEST, QMKBEST, KC_NO, 
                               QMKBEST, QMKBEST, QMKBEST, KC_NO, 
                               QMKBEST, QMKBEST, QMKBEST, KC_TRNS, 
                               KC_NO,   KC_NO,   KC_NO,   KC_TRNS),

        [2] = LAYOUT_ortho_6x4(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                               KC_F22,  KC_F23,  KC_F24,  BL_DEC, 
                               KC_F19,  KC_F20,  KC_F21,  BL_INC, 
                               KC_F16,  KC_F17,  KC_F18,  BL_INC, 
                               KC_F13,  KC_F14,  KC_F15,  KC_TRNS, 
                               BL_TOGG, BL_TOGG, KC_NO,   KC_TRNS),

        [3] = LAYOUT_ortho_6x4(KC_TRNS, KC_TRNS, KC_TRNS, TG(4), 
                               KC_1,    KC_2,    KC_3,    KC_4, 
                               KC_Q,    KC_W,    KC_E,    KC_R, 
                               KC_A,    KC_S,    KC_D,    KC_R,
                               KC_Z,    KC_X,    KC_C,    KC_SPC,
                               KC_V,    KC_V,    KC_F,    KC_SPC),

        [4] = LAYOUT_ortho_6x4(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_PENT, 
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_PENT)
};