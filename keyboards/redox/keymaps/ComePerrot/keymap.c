#include QMK_KEYBOARD_H

enum layers {
   _BEPO,
   _FUNC,
   _NAV
};

enum my_keycodes {
  RGB_SWT = SAFE_RANGE
};

// Shortcut to make keymap more readable
#define FUNC_MO   MO(_FUNC)
#define FUNC   TG(_FUNC)
#define NAV   TG(_NAV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BEPO] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_NO   ,                          KC_EQL  ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_NUHS ,                          KC_RBRC ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,FUNC    ,NAV     ,        NAV     ,FUNC    ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,RSFT_T(KC_CAPS) ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LALT ,KC_NUBS ,FUNC_MO ,KC_LGUI ,     KC_LCTL ,    KC_SPC  ,KC_ENT  ,        KC_DEL  ,KC_BSPC ,    KC_RALT ,     KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO   ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_MPRV ,KC_MPLY ,KC_MNXT ,KC_NO   ,KC_NO   ,KC_NO   ,                          KC_NUM  ,KC_PMNS ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PPLS ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_MUTE ,KC_VOLD ,KC_VOLU ,KC_NO   ,KC_NO   ,KC_NO   ,                          KC_NO   ,KC_PAST ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PCMM ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,RGB_SWT ,KC_TRNS ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,KC_PSLS ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PEQL ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,    KC_TRNS ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,    KC_P0   ,     KC_P0   ,KC_PDOT ,KC_PENT ,KC_NO 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO   ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                                            KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_NO   ,KC_MS_U ,KC_NO   ,KC_WH_U ,KC_NO   ,                          KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_D ,KC_NO   ,                          KC_NO   ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RIGHT,KC_NO   ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_NO   ,KC_TRNS ,     KC_BTN3 ,    KC_BTN1 ,KC_BTN2 ,        KC_TRNS ,KC_TRNS ,    KC_NO   ,     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  switch(biton32(state)) {
  case _BEPO:
    rgblight_sethsv_noeeprom(HSV_BLUE);
    break;
  case _FUNC:
    rgblight_sethsv_noeeprom(HSV_MAGENTA);
    break;
  case _NAV:
    rgblight_sethsv_noeeprom(HSV_ORANGE);
    break;
  default:
    rgblight_sethsv_noeeprom(HSV_BLUE);
    break;
}
return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SWT:
      if (record->event.pressed) {
        rgblight_toggle_noeeprom();
      }
      return true;
    default:
      return true; // Process all other keycodes normally
  }
}