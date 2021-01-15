
uint8_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->pressed) return SINGLE_HOLD;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return SINGLE_TAP;
    } else if (state->count == 2) {
        // DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        //if (state->interrupted) return DOUBLE_SINGLE_TAP;
        if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }

    return 8; // Magic number. At some point this method will expand to work for more presses
}

// Create an instance of 'tap' for the 'x' tap dance.
static tap esstap_state = {
    .is_press_action = true,
    .state = 0
};

void ess_finished(qk_tap_dance_state_t *state, void *user_data) {
    esstap_state.state = cur_dance(state);
    switch (esstap_state.state) {
        case SINGLE_TAP:
            tap_code(KC_ESC);
            break;
        case SINGLE_HOLD:
            register_code(KC_LSFT);
            break;
        case DOUBLE_TAP:
            // Check to see if the layer is already set
            if (layer_state_is(SYMBOLS)) {
                // If already set, then switch it off
                layer_off(SYMBOLS);
            } else {
                // If not already set, then switch the layer on
                layer_on(SYMBOLS);
            }
            break;
        case DOUBLE_HOLD:
            layer_on(SYMBOLS);
            break;

    }
}

void ess_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (esstap_state.state) {
        case SINGLE_HOLD: unregister_code(KC_LSFT); break;
        case DOUBLE_HOLD: layer_off(SYMBOLS); break;
    }
    esstap_state.state = 0;
}

static tap scntap_state = {
    .is_press_action = true,
    .state = 0
};

void scn_finished(qk_tap_dance_state_t *state, void *user_data) {
    scntap_state.state = cur_dance(state);
    switch (scntap_state.state) {
         case SINGLE_TAP:
            tap_code(KC_SPC);
            break;
        case SINGLE_HOLD:
            register_code(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            // Check to see if the layer is already set
            if (layer_state_is(NUMPAD)) {
                // If already set, then switch it off
                layer_off(NUMPAD);
            } else {
                // If not already set, then switch the layer on
                layer_on(NUMPAD);
            }
            break;
        case DOUBLE_HOLD:
            layer_on(NUMPAD);
            break;
    }
}

void scn_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (scntap_state.state) {
        case SINGLE_HOLD: unregister_code(KC_LCTRL); break;
        case DOUBLE_HOLD: layer_off(NUMPAD); break;
    }
    scntap_state.state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [ESS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ess_finished, ess_reset),
    [SCN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, scn_finished, scn_reset)
};
