/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#pragma once

// Fix problems with fast typing and homerow mods
#define TAPPING_TERM 150
//#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
//#define TAPPING_FORCE_HOLD
#define EE_HANDS
//#define RETRO_TAPPING

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 60000
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_SLEEP true  // turn off leds on sleep
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
#define SPLIT_USB_DETECT
#define NO_USB_STARTUP_CHECK

#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 3
