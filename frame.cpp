/* Copyright (c) 2013 Benjamin Phelps
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#include <ncurses.h>
#include "frame.hpp"

class Frame {

    int width;
    int height;
    int offset_x;
    int offset_y;
    WINDOW *thisWindow; 

public:

    WINDOW Frame(int width = 0, int height = 0) {
        thisWindow = newwin(width, height, 0, 0);
    }
    
    WINDOW Frame(int width, int height, int offset_y, int offset_x) {
        thisWindow = newwin(width, height, offset_y, offset_x);
    }

};