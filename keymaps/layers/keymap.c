#include QMK_KEYBOARD_H

#include "leader_key.c"
#include "layer_definitions.c"
#include "tap_dance_setup.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[DVORAK] = LAYOUT_5x6(
// @kbd-prettier:start
KC_DLR         ,KC_AMPR        ,KC_LBRC        ,KC_LCBR        ,KC_RCBR        ,KC_LPRN        ,                                                                KC_EQL         ,KC_ASTR        ,KC_RPRN        ,KC_PLUS        ,KC_RBRC        ,KC_EXLM        ,
KC_HASH        ,KC_SCLN        ,KC_COMM        ,KC_DOT         ,KC_P           ,KC_Y           ,                                                                KC_F           ,KC_G           ,KC_C           ,KC_R           ,KC_L           ,KC_SLSH        ,
KC_AT          ,KC_A           ,KC_O           ,KC_E           ,KC_U           ,KC_I           ,                                                                KC_D           ,KC_H           ,KC_T           ,KC_N           ,KC_S           ,KC_MINS        ,
KC_GRV         ,KC_QUOT        ,KC_Q           ,KC_J           ,KC_K           ,KC_X           ,                                                                KC_B           ,KC_M           ,KC_W           ,KC_V           ,KC_Z           ,KC_BSLS        ,
                                KC_CIRC        ,KC_PERC        ,                                                                                                                                KC_TAB         ,KC_ENT         ,                                
                                                                TD(ESS)        ,LGUI_T(KC_BSPC),                                                                LALT_T(KC_ENT) ,TD(SCN)        ,                                                                
                                                                                KC_LEAD        ,KC_PGUP        ,                                KC_PGDN        ,TT(MOUSE)      ,                                                                                
                                                                                KC_SPC         ,TT(MEDIA_FN)   ,                                KC_ASTR        ,KC_BSPC                                                                                        
// @kbd-prettier:end
),


	[SYMBOLS] = LAYOUT_5x6(
// @kbd-prettier:start
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                KC_TRNS,KC_TRNS,KC_ASTR,KC_TRNS,KC_RGHT,KC_TRNS,
KC_DLR ,KC_AMPR,KC_LBRC,KC_LCBR,KC_RCBR,KC_LPRN,                                KC_EQL ,KC_LEFT,KC_RPRN,KC_PLUS,KC_RBRC,KC_EXLM,
KC_TRNS,KC_TRNS,KC_TRNS,KC_DOWN,KC_UP  ,KC_TRNS,                                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                KC_TRNS,KC_TRNS,                                                                KC_TRNS,KC_TRNS,                
                                KC_TRNS,KC_TRNS,                                KC_TRNS,KC_TRNS,                                
                                        KC_TRNS,KC_TRNS,                KC_TRNS,KC_TRNS,                                        
                                        KC_TRNS,KC_TRNS,                KC_TRNS,KC_TRNS                                        
// @kbd-prettier:end
	        ),


	[NUMPAD] = LAYOUT_5x6(
// @kbd-prettier:start
KC_TILD,KC_PERC,KC_P7  ,KC_P5  ,KC_P3  ,KC_P1  ,                                KC_P9  ,KC_P0  ,KC_P2  ,KC_P4  ,KC_P6  ,KC_P8  ,
KC_GRV ,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_LBRC,                                KC_RBRC,KC_7   ,KC_8   ,KC_9   ,KC_TRNS,KC_PLUS,
KC_CIRC,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                                KC_RPRN,KC_4   ,KC_5   ,KC_6   ,KC_MINS,KC_PIPE,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_UNDS,                                KC_TRNS,KC_1   ,KC_2   ,KC_3   ,KC_EQL ,KC_GRV ,
                KC_TRNS,KC_TRNS,                                                                KC_0   ,KC_TRNS,                
                                KC_TRNS,KC_TRNS,                                KC_TRNS,KC_TRNS,                                
                                        KC_TRNS,KC_TRNS,                KC_TRNS,KC_TRNS,                                        
                                        KC_TRNS,KC_TRNS,                KC_TRNS,KC_TRNS                                        
// @kbd-prettier:end
	        ),


	[MEDIA_FN] = LAYOUT_5x6(
// @kbd-prettier:start
KC_F12    ,KC_F1     ,KC_F2     ,KC_F3     ,KC_F4     ,KC_F5     ,                                            KC_F6     ,KC_F7     ,KC_F8     ,KC_F9     ,KC_F10    ,KC_F11    ,
KC_DOWN   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_LBRC   ,                                            KC_RBRC   ,KC_SLCK   ,KC_NLCK   ,KC_INS    ,KC_RGHT   ,KC_MUTE   ,
KC_TRNS   ,KC_UP     ,KC_MPRV   ,KC_MPLY   ,KC_MNXT   ,KC_LPRN   ,                                            KC_RPRN   ,KC_LEFT   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_VOLU   ,
KC_TRNS   ,RGB_M_P   ,RGB_M_B   ,RGB_M_R   ,RGB_M_SW  ,RGB_M_SN  ,                                            RGB_M_K   ,RGB_M_X   ,RGB_M_G   ,RGB_M_T   ,KC_TRNS   ,KC_VOLD   ,
                      KC_TRNS   ,KC_TRNS   ,                                                                                        KC_EQL    ,KC_TRNS   ,                      
                                            TO(DVORAK),RGB_TOG   ,                                            RGB_MOD   ,RGB_RMOD  ,
                                                       RGB_HUI   ,RGB_SAI   ,                      RGB_VAI   ,RGB_SPI   ,                                                       
                                                       RGB_HUD   ,RGB_SAD   ,                      RGB_VAD   ,RGB_SPD                                                          
// @kbd-prettier:end
	        ),

	[MOUSE] = LAYOUT_5x6(
// @kbd-prettier:start
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_R,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                KC_TRNS,KC_MS_L,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_D,KC_MS_U,KC_TRNS,                                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                KC_TRNS,KC_TRNS,                                                                KC_TRNS,KC_TRNS,                
                                KC_ACL1,KC_ACL2,                                KC_BTN1,KC_BTN2,                                
                                        KC_TRNS,KC_TRNS,                KC_TRNS,KC_TRNS,                                        
                                        KC_ACL0,KC_TRNS,                KC_TRNS,KC_TRNS                                        
// @kbd-prettier:end
	        )

};


#include "tap_dance.c"
