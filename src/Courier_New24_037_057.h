//
// Created by GLCD_FC2_compatible on 01.08.2023
//
//   Font Name:  Courier_New24_037_057
//   Orig. Name: Courier New
//
//   Start Char: 037 '%'
//   End Char:   057 '9'
//   # Chars:    21
//
//   Height:     24
//   Width:      13
//
//   Monospace:  False
//   Bold:       False
//   Italic:     False
//   Underline:  False
//   Strikeout:  False
//
//   Codesize:   612
//
#include <avr/pgmspace.h>
#include <inttypes.h>

#ifndef _COURIER_NEW_H_
#define _COURIER_NEW_H_

#define COURIER_NEW_WIDTH 13
#define COURIER_NEW_HEIGHT 24

static const uint8_t Courier_New24_037_057[] PROGMEM = {
    0x02, 0x64, // size
    0x0d,       // width
    0x18,       // height
    0x25,       // first char
    0x15,       // char count

    // char widths
    0x0a, 0x0a, 0x04, 0x04, 0x04, 0x0b, 0x0d, 0x06, 0x0c, 0x04, 0x0b, 0x0b,
    0x0b, 0x0b, 0x0b, 0x0a, 0x0b, 0x0b, 0x0a, 0x0a, 0x0a,

    // font data
    0x70, 0x88, 0x04, 0x04, 0x04, 0x88, 0x70, 0x00, 0x00, 0x00, 0x10, 0x10,
    0x09, 0x89, 0x49, 0x24, 0x24, 0x24, 0x42, 0x82, 0x00, 0x00, 0x00, 0x03,
    0x04, 0x08, 0x08, 0x08, 0x04, 0x03, // char (037) '%'

    0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x60, 0x20, 0x00, 0xc0, 0x30,
    0x13, 0x0c, 0x30, 0xc0, 0x00, 0x80, 0x60, 0x20, 0x03, 0x06, 0x08, 0x08,
    0x08, 0x0c, 0x07, 0x07, 0x08, 0x08, // char (038) '&'

    0x3c, 0xfc, 0xfc, 0x3c, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (039) '''

    0x00, 0xc0, 0x38, 0x0c, 0xfe, 0x01, 0x00, 0x00, 0x01, 0x0e, 0x70,
    0xc0, // char (040) '('

    0x0c, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xfe, 0xc0, 0x70, 0x0e,
    0x01, // char (041) ')'

    0x40, 0x40, 0x80, 0x80, 0x80, 0xfc, 0x80, 0x80, 0x80, 0x40, 0x40, 0x00,
    0x00, 0x10, 0x08, 0x04, 0x03, 0x02, 0x04, 0x18, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // char (042) '*'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08, 0x08,
    0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, // char (043) '+'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80,
    0xe0, 0xfe, 0x3f, 0x0f, 0x03, 0x00, // char (044) ','

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // char (045) '-'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0f, 0x0f,
    0x06, // char (046) '.'

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x30, 0x0c, 0x03, 0x00,
    0x00, 0x00, 0xc0, 0x30, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0c,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // char (047) '/'

    0xc0, 0x30, 0x08, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x08, 0x30, 0xc0, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x03,
    0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, // char (048) '0'

    0x10, 0x10, 0x18, 0x08, 0x0c, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x08, 0x08, 0x08, 0x0f, 0x08, 0x08, 0x08, 0x08, 0x08, // char (049) '1'

    0x00, 0x60, 0x18, 0x08, 0x04, 0x04, 0x04, 0x04, 0x08, 0x18, 0xe0, 0x00,
    0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x0c, 0x0a,
    0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0c, // char (050) '2'

    0x00, 0x10, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x0e, 0x0b, 0x10, 0xe0, 0x02, 0x04,
    0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, 0x01, // char (051) '3'

    0x00, 0x00, 0x00, 0x00, 0xc0, 0x20, 0x18, 0xfc, 0x00, 0x00, 0x60, 0x58,
    0x44, 0x43, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x0f, 0x08, 0x08, // char (052) '4'

    0x00, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
    0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x04, 0xf8, 0x02, 0x04,
    0x08, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x04, 0x02, 0x01, // char (053) '5'

    0x80, 0x40, 0x20, 0x10, 0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x0c, 0xff,
    0x10, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xf0, 0x00, 0x01,
    0x06, 0x04, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, 0x01, // char (054) '6'

    0x1c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xe4, 0x1c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x0e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x00, // char (055) '7'

    0xe0, 0x18, 0x08, 0x04, 0x04, 0x04, 0x04, 0x08, 0x18, 0xe0, 0xf1, 0x0a,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1a, 0xe1, 0x01, 0x06, 0x04, 0x08,
    0x08, 0x08, 0x08, 0x04, 0x06, 0x01, // char (056) '8'

    0xe0, 0x18, 0x08, 0x04, 0x04, 0x04, 0x04, 0x08, 0x70, 0x80, 0x03, 0x0c,
    0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x86, 0x7f, 0x08, 0x08, 0x08, 0x08,
    0x08, 0x04, 0x04, 0x02, 0x01, 0x00 // char (057) '9'

};

#endif