#pragma once

#include "types.h"
#include <stdio.h>
#include <stdarg.h>

#ifndef ESCAPE_CODES_LIB
#define ESCAPE_CODES_LIB

enum color {
    BLACK = 16,
    DARK_RED = 88,
    RED = 196,
    DARK_BLUE = 17,
    BLUE = 27,
    DARK_GREEN = 22,
    GREEN = 82,
    DARK_AQUA = 23,
    AQUA = 87,
    DARK_YELLOW = 100,
    YELLOW = 226,
    GRAY = 240,
    WHITE = 255,
    DARK_PURPLE = 92,
    PURPLE = 207,
    DARK_ORANGE = 130,
    ORANGE = 208,
    DARK_PINK = 95,
    PINK = 217
};

enum mode {
    BOLD = 0b00000001,
    DIM = 0b00000010,
    ITALIC = 0b00000100,
    UNDERLINE = 0b00001000,
    BLINK = 0b00010000,
    REVERSE = 0b00100000,
    HIDDEN = 0b01000000,
    STRIKETHROUGH = 0b10000000
};

enum mode_code {
    BOLD_C = 1,
    DIM_C,
    ITALIC_C,
    UNDERLINE_C,
    BLINK_C,
    REVERSE_C = 7,
    HIDDEN_C,
    STRIKETHROUGH_C
};

void put(const char* s);

void set_modes(u8 modes);

void reset_modes(u8 modes);

void set_modes_c(u8 modes_count, ...);

void reset_modes_c(u8 modes_count, ...);

void set_mode(u8 mode);

void reset();

void reset_mode(u8 mode);

void move_to_start();

void move(u16 x, u16 y);

void move_up(u16 lines);

void move_down(u16 lines);

void move_right(u16 columns);

void move_left(u16 columns);

void move_down_from_line_start(u16 lines);

void move_up_from_line_start(u16 lines);

void move_to_column(u16 column);

void move_up_once();

void save_cursor_position_dec();

void restore_cursor_position_dec();

void save_cursor_position_sco();

void restore_cursor_position_sco();

void color(u8 color_id);

void color_rgb(u8 r, u8 g, u8 b);

void background_color(u8 color_id);

void background_color_rgb(u8 r, u8 g, u8 b);

void sound();

void show_cursor();

void hide_cursor();

void enable_alternative_buffer();

void disable_alternative_buffer();

void save_screen();

void restore_screen();

void erase_after_cursor();

void erase_before_cursor();

void erase_screen();

void erase_saved_lines();

void erase_line_after_cursor();

void erase_line_before_cursor();

void erase_line();

void clear_screen();

#endif // !ESCAPE_CODES_LIB