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

#include "window.hpp"

class Window {
    
    int width;
    int height;
    
    int used_windows;
    WINDOW *windows[9];
    
    
    void setupWindow() {
        initscr();            // Start the session
        curs_set(0);          // Don't show the cursor
        noecho();             // Don't echo key presses
        keypad(stdscr, TRUE); // Accept keypad U/D/L/R
        refresh();            // Blank the screen
    }
    
public:
    
    Window() {
        used_windows = 0;
        setupWindow();
    }
    
    
    void draw() {
        
    }
    
};