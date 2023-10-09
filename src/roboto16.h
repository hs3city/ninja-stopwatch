

/*
 *
 * roboto16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : roboto16.h
 * Date                : 18.09.2014
 * Font size in bytes  : 10574
 * Font width          : 10
 * Font height         : 17
 * Font first char     : 32
 * Font last char      : 145
 * Font used chars     : 113
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <avr/pgmspace.h>
#include <inttypes.h>

#ifndef ROBOTO16_H
#define ROBOTO16_H

#define ROBOTO16_WIDTH 10
#define ROBOTO16_HEIGHT 17

static const uint8_t roboto16[] PROGMEM = {
    0x29, 0x4E, // size
    0x0A,       // width
    0x11,       // height
    0x20,       // first char
    0x71,       // char count

    // char widths
    0x00, 0x01, 0x03, 0x08, 0x07, 0x0A, 0x08, 0x01, 0x04, 0x04, 0x07, 0x07,
    0x02, 0x04, 0x01, 0x06, 0x07, 0x03, 0x07, 0x07, 0x08, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x01, 0x02, 0x06, 0x07, 0x07, 0x06, 0x0D, 0x0A, 0x08, 0x08,
    0x09, 0x08, 0x08, 0x09, 0x09, 0x01, 0x06, 0x09, 0x07, 0x0B, 0x09, 0x09,
    0x08, 0x09, 0x09, 0x08, 0x09, 0x08, 0x0A, 0x0D, 0x09, 0x09, 0x08, 0x03,
    0x06, 0x03, 0x05, 0x07, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x04, 0x07,
    0x07, 0x01, 0x02, 0x07, 0x01, 0x0C, 0x07, 0x07, 0x07, 0x07, 0x04, 0x06,
    0x05, 0x07, 0x08, 0x0B, 0x07, 0x08, 0x06, 0x04, 0x01, 0x05, 0x09, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00,

    // font data
    0xFC, 0x11, 0x00,                                     // 33
    0x1E, 0x10, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x20, 0x20, 0xF8, 0x24, 0x20, 0xE0, 0x3C, 0x20, 0x02, 0x1E, 0x03, 0x02,
    0x1E, 0x03, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 35
    0x38, 0x44, 0x44, 0x83, 0x84, 0x04, 0x18, 0x0C, 0x10, 0x10, 0x70, 0x10,
    0x11, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x3C, 0x44, 0x42, 0x3C, 0x80, 0x40, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x06, 0x01, 0x0E, 0x11, 0x11, 0x11, 0x0E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0xBC, 0x44, 0xC2, 0x24, 0x1C, 0x00, 0x00, 0x0F, 0x10, 0x10, 0x10,
    0x13, 0x14, 0x08, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00,             // 38
    0x0E, 0x00, 0x00, // 39
    0xE0, 0x1C, 0x02, 0x01, 0x0F, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x80, // 40
    0x01, 0x06, 0x18, 0xE0, 0x00, 0xC0, 0x30, 0x0F, 0x80, 0x00, 0x00,
    0x00, // 41
    0x10, 0x90, 0x50, 0x3C, 0x50, 0x90, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x80, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x40, 0x70, 0x00, 0x00,                   // 44
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00,             // 45
    0x00, 0x10, 0x00, // 46
    0x00, 0x00, 0x00, 0xE0, 0x1C, 0x04, 0x20, 0x1C, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xF8, 0x04, 0x04, 0x02, 0x04, 0x04, 0xF8, 0x07, 0x18, 0x10, 0x10, 0x10,
    0x18, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x04, 0x04, 0xFC, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, // 49
    0x18, 0x04, 0x04, 0x02, 0x84, 0x6C, 0x10, 0x10, 0x18, 0x14, 0x13, 0x10,
    0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x18, 0x04, 0x84, 0x82, 0x84, 0xC4, 0x38, 0x0C, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x80, 0x60, 0x10, 0x0C, 0xFC, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02,
    0x02, 0x1F, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 52
    0xC0, 0xBC, 0x44, 0x44, 0x44, 0x44, 0x84, 0x04, 0x18, 0x10, 0x10, 0x10,
    0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0xF0, 0x4C, 0x44, 0x24, 0x42, 0x44, 0x80, 0x07, 0x08, 0x10, 0x10, 0x10,
    0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x04, 0x04, 0x04, 0xC4, 0x24, 0x1C, 0x04, 0x00, 0x00, 0x1E, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x38, 0xC4, 0x84, 0x82, 0x84, 0xC4, 0x38, 0x0F, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xF8, 0x04, 0x04, 0x02, 0x04, 0x8C, 0xF0, 0x00, 0x11, 0x11, 0x12, 0x11,
    0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0x20, 0x10, 0x00,                                     // 58
    0x00, 0x20, 0x40, 0x70, 0x00, 0x00,                   // 59
    0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x04, 0x04, 0x02, 0x02, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x0C, 0x04, 0x02, 0x84, 0x6C, 0x10, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0xC0, 0x30, 0x08, 0x08, 0x84, 0x44, 0x24, 0x24, 0xC4, 0x04, 0x08, 0x30,
    0xC0, 0x1F, 0x60, 0x80, 0x8F, 0x10, 0x10, 0x10, 0x08, 0x9F, 0x10, 0x10,
    0x0C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, // 64
    0x00, 0x00, 0x80, 0x70, 0x0C, 0x0C, 0x70, 0x80, 0x00, 0x00, 0x10, 0x0C,
    0x03, 0x02, 0x02, 0x02, 0x02, 0x03, 0x0C, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0xFC, 0x84, 0x84, 0x84, 0x84, 0xC4, 0xEC, 0x10, 0x1F, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 66
    0xF0, 0x08, 0x04, 0x04, 0x02, 0x04, 0x04, 0x18, 0x07, 0x08, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 67
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x18, 0xE0, 0x1F, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 68
    0xFC, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x04, 0x1F, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 69
    0xFC, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x04, 0x1F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 70
    0xF0, 0x08, 0x04, 0x04, 0x02, 0x04, 0x04, 0x0C, 0x10, 0x03, 0x0C, 0x10,
    0x10, 0x10, 0x11, 0x11, 0x11, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 71
    0xFC, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFC, 0x1F, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 72
    0xFC, 0x1F, 0x00, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0xFC, 0x80, 0x80, 0xC0, 0x20, 0x10, 0x08, 0x04, 0x04, 0x1F, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x0C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 75
    0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0xFC, 0x04, 0x38, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x18, 0xFC, 0x1F,
    0x00, 0x00, 0x00, 0x07, 0x18, 0x0C, 0x03, 0x00, 0x00, 0x1F, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0xFC, 0x04, 0x18, 0x20, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x1F, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x06, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 78
    0xF0, 0x08, 0x04, 0x04, 0x02, 0x04, 0x04, 0x08, 0xF0, 0x07, 0x08, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 79
    0xFC, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x78, 0x1F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 80
    0xF0, 0x08, 0x04, 0x04, 0x02, 0x04, 0x04, 0x08, 0xF0, 0x07, 0x08, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x2C, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 81
    0xFC, 0x84, 0x84, 0x84, 0x84, 0x84, 0x44, 0x38, 0x00, 0x1F, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 82
    0x38, 0x44, 0x44, 0x82, 0x82, 0x84, 0x04, 0x18, 0x0C, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x11, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 83
    0x04, 0x04, 0x04, 0x04, 0xFC, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 84
    0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x08, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 85
    0x04, 0x1C, 0xE0, 0x00, 0x00, 0x00, 0x80, 0x60, 0x1C, 0x04, 0x00, 0x00,
    0x00, 0x03, 0x1C, 0x1C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x3C, 0xC0, 0x00, 0x00, 0xE0, 0x1C, 0x1C, 0xE0, 0x00, 0x00, 0x80, 0x78,
    0x04, 0x00, 0x03, 0x1C, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x07, 0x18, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 87
    0x00, 0x04, 0x08, 0x30, 0xC0, 0xC0, 0x30, 0x08, 0x04, 0x10, 0x18, 0x0C,
    0x02, 0x01, 0x01, 0x02, 0x0C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 88
    0x04, 0x0C, 0x30, 0x40, 0x80, 0x80, 0x60, 0x18, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 89
    0x04, 0x04, 0x04, 0x84, 0x64, 0x14, 0x0C, 0x04, 0x18, 0x14, 0x13, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00,                                                 // 90
    0xFF, 0x01, 0x01, 0x7F, 0x40, 0x40, 0x00, 0x00, 0x00, // 91
    0x04, 0x1C, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1C, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                   // 92
    0x01, 0x01, 0xFF, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00, // 93
    0x60, 0x18, 0x0C, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 95
    0x02, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x40, 0x20, 0x10, 0x10, 0x20, 0xE0, 0x00, 0x1E, 0x12, 0x11, 0x11, 0x11,
    0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0xFE, 0x20, 0x20, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x08, 0x10, 0x10, 0x10,
    0x18, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0xC0, 0x20, 0x10, 0x10, 0x20, 0x60, 0x80, 0x0F, 0x10, 0x10, 0x10, 0x10,
    0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0xC0, 0x20, 0x10, 0x10, 0x20, 0x40, 0xFE, 0x0F, 0x10, 0x10, 0x10, 0x10,
    0x08, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0xC0, 0x20, 0x10, 0x10, 0x20, 0x60, 0x80, 0x0F, 0x19, 0x11, 0x11, 0x11,
    0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0x20, 0xFE, 0x22, 0x22, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 102
    0xC0, 0x20, 0x10, 0x10, 0x20, 0x40, 0xE0, 0x0F, 0x90, 0x90, 0x90, 0x90,
    0xC8, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 103
    0xFE, 0x20, 0x20, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0xE2, 0x1F, 0x00,                                     // 105
    0x00, 0xE2, 0x80, 0xFF, 0x00, 0x00,                   // 106
    0xFE, 0x00, 0x00, 0x80, 0x60, 0x20, 0x00, 0x1F, 0x01, 0x01, 0x02, 0x0C,
    0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0xFE, 0x1F, 0x00,                                     // 108
    0xE0, 0x20, 0x20, 0x10, 0x10, 0x60, 0xC0, 0x20, 0x10, 0x10, 0x20, 0xC0,
    0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 109
    0xE0, 0x20, 0x20, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0xC0, 0x20, 0x20, 0x10, 0x20, 0x20, 0xC0, 0x0F, 0x18, 0x10, 0x10, 0x10,
    0x18, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0xE0, 0x20, 0x20, 0x10, 0x10, 0x20, 0xC0, 0xFF, 0x08, 0x10, 0x10, 0x10,
    0x18, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0xC0, 0x20, 0x10, 0x10, 0x20, 0x40, 0xE0, 0x0F, 0x10, 0x10, 0x10, 0x10,
    0x08, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 113
    0xE0, 0x20, 0x20, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 114
    0xE0, 0x20, 0x10, 0x10, 0x20, 0x60, 0x08, 0x11, 0x11, 0x11, 0x12, 0x0E,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0x20, 0x20, 0xFC, 0x20, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, // 116
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x18, 0x10, 0x10, 0x10,
    0x08, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0x20, 0xE0, 0x00, 0x00, 0x00, 0x80, 0x60, 0x20, 0x00, 0x00, 0x03, 0x1C,
    0x1C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 118
    0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x20, 0x00,
    0x0F, 0x18, 0x07, 0x00, 0x00, 0x07, 0x18, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x00, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x18, 0x0C, 0x03, 0x03,
    0x0C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0x20, 0xE0, 0x00, 0x00, 0x00, 0x80, 0x60, 0x20, 0x00, 0x80, 0x83, 0x7C,
    0x1C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // 121
    0x20, 0x20, 0x20, 0xA0, 0x60, 0x20, 0x18, 0x14, 0x13, 0x11, 0x10, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0xF8, 0x06, 0x02, 0x01, 0x3E, 0x40, 0x80, 0x00, 0x00, 0x00,
    0x00,             // 123
    0xFC, 0x7F, 0x00, // 124
    0x02, 0x02, 0xFC, 0x00, 0x00, 0x80, 0x80, 0x7E, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, // 125
    0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // 126

};

#endif
