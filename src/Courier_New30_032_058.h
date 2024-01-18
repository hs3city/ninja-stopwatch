//
// Created by GLCD_FC2_compatible on 01.08.2023
//
//   Font Name:  Courier_New30_032_058
//   Orig. Name: Courier New
//
//   Start Char: 032 ' '
//   End Char:   058 ':'
//   # Chars:    27
//
//   Height:     30
//   Width:      18
//
//   Monospace:  False
//   Bold:       False
//   Italic:     False
//   Underline:  False
//   Strikeout:  False
//
//   Codesize:   1337
//
#include <avr/pgmspace.h>
#include <inttypes.h>

#ifndef _COURIER_NEW_H_
#define _COURIER_NEW_H_

#define COURIER_NEW_WIDTH 18
#define COURIER_NEW_HEIGHT 30

static const uint8_t Courier_New30_032_058[] PROGMEM = {
    0x05, 0x39, // size
    0x12,       // width
    0x1e,       // height
    0x20,       // first char
    0x1b,       // char count

    // char widths
    0x0d, 0x04, 0x0c, 0x10, 0x0d, 0x0f, 0x0e, 0x04, 0x06, 0x06, 0x0e, 0x12,
    0x07, 0x0f, 0x06, 0x0f, 0x0e, 0x0f, 0x0e, 0x0f, 0x0e, 0x0f, 0x0e, 0x0e,
    0x0d, 0x0f, 0x05,

    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, // char (032) ' '

    0xfc, 0xfc, 0xfc, 0xfc, 0x03, 0xff, 0xff, 0x03, 0xc0, 0xe1, 0xe1, 0xc0,
    0x00, 0x04, 0x04, 0x00, // char (033) '!'

    0x3c, 0xfc, 0xfc, 0xfc, 0x0c, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0x0c,
    0x00, 0x0f, 0x0f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (034) '"'

    0x00, 0x00, 0x00, 0x00, 0xc0, 0xfe, 0x3e, 0x00, 0x00, 0x00, 0xc0, 0xfe,
    0x3e, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0xff, 0xff, 0x0c, 0x0c,
    0x0c, 0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x03, 0x03, 0x03, 0xc3,
    0xff, 0x3f, 0x03, 0x03, 0x03, 0xc3, 0xff, 0x3f, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x00, 0x00, 0x1c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x00,
    0x00, 0x00, 0x00, 0x00, // char (035) '#'

    0x00, 0xc0, 0xe0, 0x30, 0x10, 0x18, 0x18, 0x1f, 0x1f, 0x30, 0xf0, 0xf0,
    0x00, 0x00, 0x07, 0x0f, 0x18, 0x18, 0x10, 0x30, 0x30, 0x30, 0x60, 0x60,
    0xc0, 0x80, 0x3e, 0x3e, 0x18, 0x30, 0x30, 0x30, 0xf0, 0xf0, 0x30, 0x38,
    0x18, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c, 0x00,
    0x00, 0x00, 0x00, 0x00, // char (036) '$'

    0x00, 0xf0, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x81, 0x42, 0x44, 0x44, 0x24, 0x24, 0x34, 0x12,
    0x11, 0x08, 0x08, 0x08, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c,
    0x82, 0x01, 0x01, 0x01, 0x01, 0x01, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
    0x00, // char (037) '%'

    0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0xc0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x8f, 0xff, 0x71, 0xc0, 0x80, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x3e, 0x7f, 0xe1, 0xc0, 0x80, 0x81, 0x87, 0xce,
    0x78, 0xf0, 0xde, 0x87, 0x83, 0x80, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04,
    0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, // char (038) '&'

    0x7c, 0xfc, 0xfc, 0x7c, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, // char (039) '''

    0x00, 0x00, 0xc0, 0xf0, 0x3c, 0x0c, 0xf0, 0xff, 0x07, 0x00, 0x00, 0x00,
    0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x3c, 0xf0,
    0xc0, // char (040) '('

    0x0c, 0x3c, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0,
    0x00, 0x00, 0x00, 0xe0, 0xff, 0x0f, 0xc0, 0xf0, 0x3c, 0x0c, 0x00,
    0x00, // char (041) ')'

    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x01, 0x01, 0x43, 0x63, 0x3b, 0x1f, 0x07, 0x0f, 0x1b, 0x33,
    0xe3, 0x43, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // char (042) '*'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0xff, 0xff, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (043) '+'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xf8, 0xf8, 0x38, 0x08, 0xe0, 0xfc, 0x3c,
    0x0c, 0x00, 0x00, 0x00, // char (044) ','

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (045) '-'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0x00, 0x04, 0x04, 0x04, 0x04,
    0x00, // char (046) '.'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0,
    0x3c, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0x3c,
    0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0x3c, 0x0f,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x3c, 0x0c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (047) '/'

    0x00, 0xe0, 0xf0, 0x18, 0x08, 0x0c, 0x0c, 0x0c, 0x0c, 0x08, 0x18, 0xf0,
    0xc0, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xff, 0x07, 0x1f, 0x78, 0xc0, 0xc0, 0x80, 0x80, 0x80,
    0x80, 0xc0, 0xe0, 0x78, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // char (048) '0'

    0x20, 0x30, 0x10, 0x10, 0x18, 0x08, 0x08, 0xfc, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0xff, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x04, // char (049) '1'

    0x00, 0xc0, 0xf0, 0x38, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x78,
    0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60,
    0x30, 0x1c, 0x0f, 0x03, 0xc0, 0xe0, 0xb0, 0x98, 0x8c, 0x86, 0x83, 0x81,
    0x80, 0x80, 0x80, 0x80, 0xe0, 0xe0, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // char (050) '2'

    0x00, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x38,
    0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30,
    0x30, 0x58, 0xdc, 0xcf, 0x83, 0x00, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0xc0, 0xe0, 0x71, 0x3f, 0x1e, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (051) '3'

    0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x38, 0x1c, 0x0c, 0xfc, 0xfc,
    0x00, 0x00, 0x80, 0xe0, 0x78, 0x1c, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x83, 0x83,
    0x83, 0x83, 0xff, 0xff, 0x83, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // char (052) '4'

    0x00, 0x00, 0xfc, 0xfc, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x0c, 0x18, 0x38, 0xf0, 0xc0, 0x30, 0x70, 0x60, 0xc0, 0xc0, 0x80,
    0x80, 0x80, 0x80, 0x80, 0xc0, 0xe0, 0x70, 0x3f, 0x0f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (053) '5'

    0x00, 0x00, 0xc0, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x08, 0xfc, 0xff, 0xc1, 0x60, 0x30, 0x38, 0x18, 0x18, 0x18, 0x18,
    0x30, 0x30, 0xe0, 0x80, 0x07, 0x1f, 0x79, 0xe0, 0xc0, 0x80, 0x80, 0x80,
    0x80, 0x80, 0xc0, 0xe0, 0x70, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, // char (054) '6'

    0x3c, 0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0xcc,
    0xfc, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
    0xfc, 0x1f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf8,
    0x7f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // char (055) '7'

    0xc0, 0xf0, 0x38, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x38, 0xf0,
    0xc0, 0x03, 0xcf, 0xcc, 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xec,
    0xcf, 0x03, 0x1f, 0x7f, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0,
    0xe0, 0x7f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x00, 0x00, 0x00, 0x00, // char (056) '8'

    0xc0, 0xe0, 0x70, 0x18, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x38,
    0x70, 0xc0, 0x00, 0x0f, 0x1f, 0x38, 0x60, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0,
    0x60, 0x60, 0x30, 0x18, 0xff, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0xc0, 0xc0, 0x60, 0x60, 0x30, 0x1c, 0x0f, 0x03, 0x00, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (057) '9'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3e, 0x3e, 0x3e, 0x1c, 0xe0, 0xf0,
    0xf0, 0xf0, 0xe0, 0x00, 0x04, 0x04, 0x04, 0x00 // char (058) ':'

};

#endif