#include QMK_KEYBOARD_H
#include "keycodes.h"
#include "unicodes.h"
#include "macros.h"

#ifdef OLED_DRIVER_ENABLE
#   include "oled.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    //|------------------------------------------------------------|        |-----------------------------------------------------------|
       SSH_PI,    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,         GPSCR,
    //|--------+--------+--------+--------+--------+--------------|         |--------+--------+--------+--------+--------+--------------|
       ALT_TAB,   SFA,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,     KC_L,    SFCLN,        MAKE,
    //---------+--------+--------+--------+--------+-------------|          |--------+--------+--------+--------+--------+--------------|
       CP_PSTE,   CTLTZ,  KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM,  KC_DOT,  CTLSLH,       CTLS,
    //---------+--------+--------+--------+--------+--------+---------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_LGUI, MO(1), KC_SPC,          KC_BSPC, MO(2), TG(3)
                                      //|----------------------------|  |------------------------|


  ),

  [_LOWER] = LAYOUT(
    //|-------------------------------------------------------------|            |------------------------------------------------------------------|
       _______, KC_1,    KC_2,    KC_3,     KC_4,     KC_5,                       KC_6,     KC_7,     KC_8,     KC_9,      KC_0,      CD1,
    //|--------+--------+--------+--------+--------+----------------|            |--------+--------+--------+--------+--------+---------------------|
       GIT,    SFEXM,    KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,                    KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN ,  SFPRN,     ZAD,
    //|--------+--------+--------+--------+--------+----------------|            |--------+--------+--------+--------+--------+---------------------|
       SETUP,  CTLESC,   KC_TAB,  KC_CAPS,  KC_TILD,  KC_GRV,                     KC_QUOT,  KC_PSCR,  KC_MPRV,  KC_MPLY,   CTLNXT,    CONF,
    //|--------+--------+--------+--------+--------+--------+------------|  |--------+--------+--------+--------+--------+--------+-----------------|
                                          KC_PGUP, KC_TRNS, KC_SPC,             KC_ENT, KC_TRNS, KC_PGDN
                                   //|----------------------------------|  |---------------------------------|
  ),

  [_RAISE] = LAYOUT(
    //|-----------------------------------------------------|                    |-----------------------------------------------------|
       _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,                      UNIT,     UNIT2,   UNIT4,    UNIT5,  _______, _______,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,                      _______,  KC_UP,   X(VIB),  X(HAS),  X(SIDE), _______,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_LEFT, KC_DOWN,  KC_RGHT,  X(STAR),  X(UPAR), _______,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                       KC_VOLD, KC_TRNS, KC_SPC,             KC_ENT, KC_TRNS, KC_VOLU
                                      //|---------------------------|  |---------------------------------------|
  ),

  [_ADJUST] = LAYOUT(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     _______, RGB_TOG,  RGB_VAI, RGB_HUI, _______, _______,                       _______, _______, KC_ASON, KC_ASDN, UC_M_WC,  RESET,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, _______,  RGB_VAD, RGB_HUD,  _______, _______,                      _______, _______, KC_ASOFF, KC_ASUP, UC_M_MA, EEP_RST,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, _______,  _______, _______,  _______, _______,                      _______, _______, _______, _______, UC_M_LN,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                     _______, KC_TRNS, _______,           _______, KC_TRNS, TG(3)
                                      //|--------------------------|  |--------------------------|
  )
};
