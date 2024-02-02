// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE

// Draw to OLED
bool oled_task_user(void) {
    // Set cursor position
    switch(get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Base Layer"), false);
            break;
        case 1:
            oled_write_P(PSTR("Extra Layer"), false);
            break;
        case 2:
            oled_write_P(PSTR("Tap Layer"), false);
            break;
        case 3:
            oled_write_P(PSTR("Button Layer"), false);
            break;
        case 4:
            oled_write_P(PSTR("Nav Layer"), false);
            break;
        case 5:
            oled_write_P(PSTR("Mouse Layer"), false);
            break;
        case 6:
            oled_write_P(PSTR("Media Layer"), false);
            break;
        case 7:
            oled_write_P(PSTR("Num Layer"), false);
            break;
        case 8:
            oled_write_P(PSTR("Sym Layer"), false);
            break;
        case 9:
            oled_write_P(PSTR("Fun Layer"), false);
            break;
        default:
            oled_write_P(PSTR("Akhil KP...."), false);
    }
    return false;
}

#endif