typedef struct {
    bool is_press_action;
    uint8_t state;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP, // Send two single taps
    TRIPLE_TAP,
    TRIPLE_HOLD
};

// Tap dance enums
enum {
    ESS,
    SCN
};

uint8_t cur_dance(qk_tap_dance_state_t *state);

// For the x tap dance. Put it here so it can be used in any keymap
void ess_finished(qk_tap_dance_state_t *state, void *user_data);
void ess_reset(qk_tap_dance_state_t *state, void *user_data);
void scn_finished(qk_tap_dance_state_t *state, void *user_data);
void scn_reset(qk_tap_dance_state_t *state, void *user_data);
