/*
 * Copyright 2022 M. Adam Price
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include "config_common.h"

// QMK configuration /////////
#define TAPPING_TERM 400
#define PERMISSIVE_HOLD

//                  H     S     V/B/L
// dracula purple:  265°  89%   78%

#define RGBLIGHT_DEFAULT_HUE 187
#define RGBLIGHT_DEFAULT_SAT 227
#define RGBLIGHT_DEFAULT_VAL 200
//////////////////////////////

// k64 keymap configuration //
#define KEYMAP_REVISION "1"
#define VER_NEWLINE_WAIT 200 // in milliseconds
//////////////////////////////
