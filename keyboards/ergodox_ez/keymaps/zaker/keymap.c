#ifdef QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#else
#include "ergodox_ez.h"
#endif
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#include "keymap_german.h"

#include "keymap_nordic.h"
#define ___ KC_TRANSPARENT

enum custom_keycodes
{
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  LOWER,
  RAISE,
  SHFT_CAP,
  CTRLB,
  CPYPST,
  FACE,
  LSQBRKT,
  RSQBRKT,
  LSPRNTS,
  RSPRNTS,
  DOLLAR,
  ALPHA,
  POUNDSTAR,
  FNUTT,
  INTER,
  RANDIG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   ESC  |   1  |   2  |   3  |   4  |   5  |   6  |           |      |   7  |   8  |   9  |   0  |   +  |   \    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   TAB  |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   Å    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |   L1   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   Ø  |   Æ    |
 * |--------+------+------+------+------+------| T 1  |           |  L1  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   -  | Enter  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |lCrtl |      |      |      |  Alt |                                       | Left |  Up  | Down | Right| Win  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |PRTSRN| Win  |       | Home | End  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Ins  |       | T3   |      |      |
 *                                 | Space| Bksp |------|       |------|  TAB |Enter |
 *                                 |      |      | Del  |       | T2   |      |      |
 *                                 `--------------------'       `--------------------'
 */
    [0] = LAYOUT_ergodox(                                               // LH
        KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                  // LH-R1 7 keys
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TD(1),                    // LH-R2 7 keys
        KC_BSPACE, KC_A, KC_S, KC_D, KC_F, KC_G,                        // LH-R3 6 keys
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TG(1),                 // LH-R4 7 keys
        CTL_T(KC_GRAVE), ___, ___, ___, KC_LALT,                        // LH-R5 5 keys
        KC_ENTER, KC_LGUI,                                              // LH-R6 2 keys
        KC_HOME,                                                        // LH-R7 1 key
        KC_SPACE, KC_BSPACE, KC_DEL,                                    // LH-R8 3 keys
                                                                        // RH
        KC_BSPACE, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,             // RH-R1 7 keys
        TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,                   // RH-R2 7 keys
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,                      // RH-R3 6 keys
        MEH_T(KC_NO), KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_ENTER, // RH-R4 7 keys
        KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_LGUI,                      // RH-R5 5 keys
        KC_LALT, CTL_T(KC_ESCAPE),                                      // RH-R6 2 keys
        TG(3),                                                          // RH-R7 1 key
        TG(2), KC_TAB, KC_ENTER),                                       // RH-R8 3 keys
    /* Keymap 1: Layer 1
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   |  |  [<  |  {(  |  )}  |  >]  |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   @  |   $  |   #  |   *  |  '"  |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   &  |   ?+ |      |  /\  |  `   |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
    [1] = LAYOUT_ergodox(
        // left
        ___, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        ___, KC_PIPE, LSQBRKT, LSPRNTS, RSPRNTS, RSQBRKT, ___,
        ___, ALPHA, DOLLAR, KC_HASH, POUNDSTAR, FNUTT,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___,
        ___, ___,
        ___,
        ___, ___, ___,
        // right
        ___, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___,
        ___, ___,
        ___,
        ___, ___, ___),

    /* Keymap 1: Layer 1
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   |  |  [<  |  {(  |  )}  |  >]  |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   @  |   $  |   #  |   *  |  '"  |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   &  |   ?+ |      |  /\  |  `   |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
    [2] = LAYOUT_ergodox(
        // left
        ___, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        ___, KC_PIPE, ___, KC_LCBR, KC_RCBR, ___, ___,
        ___, KC_AT, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___,
        ___, ___,
        ___,
        ___, ___, ___,
        // right
        ___, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___,
        ___, ___,
        ___,
        ___, ___, ___),
    /* Keymap 1: Layer 1
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   |  |  [<  |  {(  |  )}  |  >]  |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   @  |   $  |   #  |   *  |  '"  |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   &  |   ?+ |      |  /\  |  `   |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
    [3] = LAYOUT_ergodox(
        // left
        ___, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        ___, KC_PIPE, ___, KC_LCBR, KC_RCBR, ___, ___,
        ___, KC_AT, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___,
        ___, ___,
        ___,
        ___, ___, ___,
        // right
        ___, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___,
        ___, ___,
        ___,
        ___, ___, ___),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(1)};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch (id)
  {
  case 0:
    if (record->event.pressed)
    {
      SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
    }
    break;
  }
  return MACRO_NONE;
};

void matrix_init_user(void)
{
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// static uint16_t key_timer;
// static uint8_t caps_status = 0;
static uint8_t shift_status = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  case KC_LSHIFT:
    if (record->event.pressed)
    {
      shift_status = 1;
    }
    else
    {
      shift_status = 0;
    }
    break;
  case LSQBRKT:
    if (record->event.pressed)
    {
      if (shift_status == 1)
      {
        unregister_code(KC_LSHIFT);
        register_code(KC_NONUS_BSLASH);
        unregister_code(KC_NONUS_BSLASH);
        register_code(KC_LSHIFT);
      }
      else
      {
        register_code(KC_RALT);
        register_code(KC_8);
        unregister_code(KC_8);
        unregister_code(KC_RALT);
      }
    }
    return false;
  case RSQBRKT:
    if (record->event.pressed)
    {
      if (shift_status == 1)
      {
        register_code(KC_NONUS_BSLASH);
        unregister_code(KC_NONUS_BSLASH);
      }
      else
      {
        register_code(KC_RALT);
        register_code(KC_9);
        unregister_code(KC_9);
        unregister_code(KC_RALT);
      }
    }
    return false;
  case LSPRNTS:
    if (record->event.pressed)
    {
      if (shift_status == 0)
      {
        register_code(KC_LSHIFT);
        register_code(KC_8);
        unregister_code(KC_8);
        unregister_code(KC_LSHIFT);
      }
      else
      {
        unregister_code(KC_LSHIFT);
        register_code(KC_RALT);
        register_code(KC_7);
        unregister_code(KC_7);
        unregister_code(KC_RALT);
        register_code(KC_LSHIFT);
      }
    }
    return false;
  case RSPRNTS:
    if (record->event.pressed)
    {
      if (shift_status == 0)
      {
        register_code(KC_LSHIFT);
        register_code(KC_9);
        unregister_code(KC_9);
        unregister_code(KC_LSHIFT);
      }
      else
      {
        unregister_code(KC_LSHIFT);
        register_code(KC_RALT);
        register_code(KC_0);
        unregister_code(KC_0);
        unregister_code(KC_RALT);
        register_code(KC_LSHIFT);
      }
    }
    return false;
  case POUNDSTAR:
    if (record->event.pressed)
    {

      register_code(KC_LSHIFT);
      register_code(KC_NONUS_HASH);
      unregister_code(KC_NONUS_HASH);
      unregister_code(KC_LSHIFT);
    }
    return false;
  case ALPHA:
    if (record->event.pressed)
    {
      register_code(KC_RALT);
      register_code(KC_2);
      unregister_code(KC_2);
      unregister_code(KC_RALT);
    }
    return false;
  case DOLLAR:
    if (record->event.pressed)
    {
      register_code(KC_RALT);
      register_code(KC_4);
      unregister_code(KC_4);
      unregister_code(KC_RALT);
    }
    return false;
  case FNUTT:
    if (record->event.pressed)
    {
      if (shift_status == 1)
      {
        register_code(KC_LSHIFT);
        register_code(KC_2);
        unregister_code(KC_2);
        unregister_code(KC_LSHIFT);
      }
      else
      {

        register_code(KC_NONUS_HASH);
        unregister_code(KC_NONUS_HASH);
      }
    }
    return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state)
{

  uint8_t layer = biton32(layer_state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer)
  {
  case 0:
    break;

  case 1:
    ergodox_right_led_1_on();
    break;
  case 2:
    ergodox_right_led_2_on();
    break;
  case 3:

    ergodox_right_led_3_on();

    break;
  default:
    break;
  }

  return state;
};
