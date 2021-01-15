LEADER_EXTERNS();
// Declare a boolean variable to keep track of whether any sequence
// will have been matched.
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {

    SEQ_ONE_KEY(KC_TAB) {
      SEND_STRING(SS_LCTL("0"));
    }
    SEQ_ONE_KEY(KC_M) {
      SEND_STRING(SS_LCTL("1"));
    }
    SEQ_ONE_KEY(KC_W) {
      SEND_STRING(SS_LCTL("2"));
    }
    SEQ_ONE_KEY(KC_V) {
      SEND_STRING(SS_LCTL("3"));
    }
    SEQ_ONE_KEY(KC_H) {
      SEND_STRING(SS_LCTL("4"));
    }
    SEQ_ONE_KEY(KC_T) {
      SEND_STRING(SS_LCTL("5"));
    }
    SEQ_ONE_KEY(KC_N) {
      SEND_STRING(SS_LCTL("6"));
    }
    SEQ_ONE_KEY(KC_G) {
      SEND_STRING(SS_LCTL("7"));
    }
    SEQ_ONE_KEY(KC_C) {
      SEND_STRING(SS_LCTL("8"));
    }
    SEQ_ONE_KEY(KC_R) {
      SEND_STRING(SS_LCTL("9"));
    }
//2 keys
    SEQ_TWO_KEYS(KC_O, KC_TAB) {
      SEND_STRING(SS_LSFT(SS_LCTL("0")));
    }
    SEQ_TWO_KEYS(KC_O, KC_M) {
      SEND_STRING(SS_LSFT(SS_LCTL("1")));
    }
    SEQ_TWO_KEYS(KC_O, KC_W) {
      SEND_STRING(SS_LSFT(SS_LCTL("2")));
    }
    SEQ_TWO_KEYS(KC_O, KC_V) {
      SEND_STRING(SS_LSFT(SS_LCTL("3")));
    }
    SEQ_TWO_KEYS(KC_O, KC_H) {
      SEND_STRING(SS_LSFT(SS_LCTL("4")));
    }
    SEQ_TWO_KEYS(KC_O, KC_T) {
      SEND_STRING(SS_LSFT(SS_LCTL("5")));
    }
    SEQ_TWO_KEYS(KC_O, KC_N) {
      SEND_STRING(SS_LSFT(SS_LCTL("6")));
    }
    SEQ_TWO_KEYS(KC_O, KC_G) {
      SEND_STRING(SS_LSFT(SS_LCTL("7")));
    }
    SEQ_TWO_KEYS(KC_O, KC_C) {
      SEND_STRING(SS_LSFT(SS_LCTL("8")));
    }
    SEQ_TWO_KEYS(KC_O, KC_R) {
      SEND_STRING(SS_LSFT(SS_LCTL("9")));
    }
//2 keys
    SEQ_TWO_KEYS(KC_S, KC_TAB) {
      SEND_STRING(SS_LSFT(SS_LGUI("0")));
    }
    SEQ_TWO_KEYS(KC_S, KC_M) {
      SEND_STRING(SS_LSFT(SS_LGUI("1")));
    }
    SEQ_TWO_KEYS(KC_S, KC_W) {
      SEND_STRING(SS_LSFT(SS_LGUI("2")));
    }
    SEQ_TWO_KEYS(KC_S, KC_V) {
      SEND_STRING(SS_LSFT(SS_LGUI("3")));
    }
    SEQ_TWO_KEYS(KC_S, KC_H) {
      SEND_STRING(SS_LSFT(SS_LGUI("4")));
    }
    SEQ_TWO_KEYS(KC_S, KC_T) {
      SEND_STRING(SS_LSFT(SS_LGUI("5")));
    }
    SEQ_TWO_KEYS(KC_S, KC_N) {
      SEND_STRING(SS_LSFT(SS_LGUI("6")));
    }
    SEQ_TWO_KEYS(KC_S, KC_G) {
      SEND_STRING(SS_LSFT(SS_LGUI("7")));
    }
    SEQ_TWO_KEYS(KC_S, KC_C) {
      SEND_STRING(SS_LSFT(SS_LGUI("8")));
    }
    SEQ_TWO_KEYS(KC_S, KC_R) {
      SEND_STRING(SS_LSFT(SS_LGUI("9")));
    }
    // Call leader_end at the end of the function, instead of at
    // the start. This way, we're sure we have set did_leader_succeed.
  }
}
