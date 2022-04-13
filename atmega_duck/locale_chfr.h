/*
    This software is licensed under the MIT License. See the license file for details.
    Source: https://github.com/spacehuhntech/WiFiDuck
 */

#pragma once

#include "usb_hid_keys.h"

// Modifier(s), Key
const uint8_t ascii_chfr[] PROGMEM = {
    KEY_NONE,           KEY_NONE,           // NUL
    KEY_NONE,           KEY_NONE,           // SOH
    KEY_NONE,           KEY_NONE,           // STX
    KEY_NONE,           KEY_NONE,           // ETX
    KEY_NONE,           KEY_NONE,           // EOT
    KEY_NONE,           KEY_NONE,           // ENQ
    KEY_NONE,           KEY_NONE,           // ACK
    KEY_NONE,           KEY_NONE,           // BEL

    // 8, 0x08
    KEY_NONE,           KEY_BACKSPACE,      // BS Backspace
    KEY_NONE,           KEY_TAB,            // TAB Tab
    KEY_NONE,           KEY_ENTER,          // LF Enter

    KEY_NONE,           KEY_NONE,           // VT
    KEY_NONE,           KEY_NONE,           // FF
    KEY_NONE,           KEY_NONE,           // CR
    KEY_NONE,           KEY_NONE,           // SO
    KEY_NONE,           KEY_NONE,           // SI
    KEY_NONE,           KEY_NONE,           // DEL
    KEY_NONE,           KEY_NONE,           // DC1
    KEY_NONE,           KEY_NONE,           // DC2
    KEY_NONE,           KEY_NONE,           // DC3
    KEY_NONE,           KEY_NONE,           // DC4
    KEY_NONE,           KEY_NONE,           // NAK
    KEY_NONE,           KEY_NONE,           // SYN
    KEY_NONE,           KEY_NONE,           // ETB
    KEY_NONE,           KEY_NONE,           // CAN
    KEY_NONE,           KEY_NONE,           // EM
    KEY_NONE,           KEY_NONE,           // SUB
    KEY_NONE,           KEY_NONE,           // ESC
    KEY_NONE,           KEY_NONE,           // FS
    KEY_NONE,           KEY_NONE,           // GS
    KEY_NONE,           KEY_NONE,           // RS
    KEY_NONE,           KEY_NONE,           // US
    
    // 32, 0x20
    KEY_NONE,           KEY_SPACE,          // ' '
    KEY_MOD_LSHIFT,     KEY_RIGHTBRACE,     // !
    KEY_MOD_LSHIFT,     KEY_2,              // "
    KEY_MOD_RALT,       KEY_3,              // #

    // 36, 0x24
    KEY_NONE,           KEY_BACKSLASH,      // $
    KEY_MOD_LSHIFT,     KEY_5,              // %
    KEY_MOD_LSHIFT,     KEY_6,              // &
    KEY_NONE,           KEY_MINUS,          // '

    // 40, 0x28
    KEY_MOD_LSHIFT,     KEY_8,              // (
    KEY_MOD_LSHIFT,     KEY_9,              // )
    KEY_MOD_LSHIFT,     KEY_3,              // *
    KEY_MOD_LSHIFT,     KEY_1,              // +

    // 44, 0x2c
    KEY_NONE,           KEY_COMMA,          // ,
    KEY_NONE,           KEY_SLASH,          // -
    KEY_NONE,           KEY_DOT,            // .
    KEY_MOD_LSHIFT,     KEY_7,              // /

    // 48, 0x30
    KEY_NONE,           KEY_0,              // 0
    KEY_NONE,           KEY_1,              // 1
    KEY_NONE,           KEY_2,              // 2
    KEY_NONE,           KEY_3,              // 3

    // 52, 0x34
    KEY_NONE,           KEY_4,              // 4
    KEY_NONE,           KEY_5,              // 5
    KEY_NONE,           KEY_6,              // 6
    KEY_NONE,           KEY_7,              // 7

    // 56, 0x38
    KEY_NONE,           KEY_8,              // 8
    KEY_NONE,           KEY_9,              // 9
    KEY_MOD_LSHIFT,     KEY_DOT,            // :
    KEY_MOD_LSHIFT,     KEY_COMMA,          // ;

    // 60, 0x3c
    KEY_NONE,           KEY_102ND,          // <
    KEY_MOD_LSHIFT,     KEY_0,              // =
    KEY_MOD_LSHIFT,     KEY_102ND,          // >
    KEY_MOD_LSHIFT,     KEY_MINUS,          // ?

    // 64, 0x40
    KEY_MOD_RALT,       KEY_2,              // @
    KEY_MOD_LSHIFT,     KEY_A,              // A
    KEY_MOD_LSHIFT,     KEY_B,              // B
    KEY_MOD_LSHIFT,     KEY_C,              // C

    // 68, 0x44
    KEY_MOD_LSHIFT,     KEY_D,              // D
    KEY_MOD_LSHIFT,     KEY_E,              // E
    KEY_MOD_LSHIFT,     KEY_F,              // F
    KEY_MOD_LSHIFT,     KEY_G,              // G

    // 72, 0x48
    KEY_MOD_LSHIFT,     KEY_H,              // H
    KEY_MOD_LSHIFT,     KEY_I,              // I
    KEY_MOD_LSHIFT,     KEY_J,              // J
    KEY_MOD_LSHIFT,     KEY_K,              // K

    // 76, 0x4c
    KEY_MOD_LSHIFT,     KEY_L,              // L
    KEY_MOD_LSHIFT,     KEY_M,              // M
    KEY_MOD_LSHIFT,     KEY_N,              // N
    KEY_MOD_LSHIFT,     KEY_O,              // O

    // 80, 0x50
    KEY_MOD_LSHIFT,     KEY_P,              // P
    KEY_MOD_LSHIFT,     KEY_Q,              // Q
    KEY_MOD_LSHIFT,     KEY_R,              // R
    KEY_MOD_LSHIFT,     KEY_S,              // S

    // 84, 0x54
    KEY_MOD_LSHIFT,     KEY_T,              // T
    KEY_MOD_LSHIFT,     KEY_U,              // U
    KEY_MOD_LSHIFT,     KEY_V,              // V
    KEY_MOD_LSHIFT,     KEY_W,              // W

    // 88, 0x58
    KEY_MOD_LSHIFT,     KEY_X,              // X
    KEY_MOD_LSHIFT,     KEY_Z,              // Y
    KEY_MOD_LSHIFT,     KEY_Y,              // Z
    KEY_MOD_RALT,       KEY_LEFTBRACE,      // [

    // 92, 0x5c
    KEY_MOD_RALT,       KEY_102ND,          // bslash
    KEY_MOD_RALT,       KEY_RIGHTBRACE,     // ]
    KEY_NONE,           KEY_SPACE,          // ^
    KEY_MOD_LSHIFT,     KEY_SLASH,          // _

    // 96, 0x60
    KEY_NONE,           KEY_SPACE,          // `
    KEY_NONE,           KEY_A,              // a
    KEY_NONE,           KEY_B,              // b
    KEY_NONE,           KEY_C,              // c

    // 100, 0x64
    KEY_NONE,           KEY_D,              // d
    KEY_NONE,           KEY_E,              // e
    KEY_NONE,           KEY_F,              // f
    KEY_NONE,           KEY_G,              // g

    // 104, 0x68
    KEY_NONE,           KEY_H,              // h
    KEY_NONE,           KEY_I,              // i
    KEY_NONE,           KEY_J,              // j
    KEY_NONE,           KEY_K,              // k

    // 108, 0x6c
    KEY_NONE,           KEY_L,              // l
    KEY_NONE,           KEY_M,              // m
    KEY_NONE,           KEY_N,              // n
    KEY_NONE,           KEY_O,              // o

    // 112, 0x70
    KEY_NONE,           KEY_P,              // p
    KEY_NONE,           KEY_Q,              // q
    KEY_NONE,           KEY_R,              // r
    KEY_NONE,           KEY_S,              // s

    // 116, 0x74
    KEY_NONE,           KEY_T,              // t
    KEY_NONE,           KEY_U,              // u
    KEY_NONE,           KEY_V,              // v
    KEY_NONE,           KEY_W,              // w

    // 120, 0x78
    KEY_NONE,           KEY_X,              // x
    KEY_NONE,           KEY_Z,              // y
    KEY_NONE,           KEY_Y,              // z
    KEY_MOD_RALT,       KEY_APOSTROPHE,     // {

    // 124, 0x7c
    KEY_MOD_RALT,       KEY_7,              // |
    KEY_MOD_RALT,       KEY_BACKSLASH,      // }
    KEY_MOD_RALT,       KEY_EQUAL,          // ~
    KEY_NONE,           KEY_DELETE          // DEL
};

const uint8_t utf8_chfr[] PROGMEM = {
    0xC2, 0xA2, 0x00, 0x00, KEY_MOD_RALT,           KEY_8,              // ¢
    0xC2, 0xA3, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_BACKSLASH,      // £
    0xC2, 0xA6, 0x00, 0x00, KEY_MOD_RALT,           KEY_1,              // ¦
    0xC2, 0xA7, 0x00, 0x00, KEY_NONE,               KEY_GRAVE,          // §
    0xC2, 0xAC, 0x00, 0x00, KEY_MOD_RALT,           KEY_6,              // ¬
    0xC2, 0xB0, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_GRAVE,          // °
    0xC3, 0xA0, 0x00, 0x00, KEY_NONE,               KEY_APOSTROPHE,     // à
    0xC3, 0xA4, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_APOSTROPHE,     // ä
    0xC3, 0xA7, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_4,              // ç
    0xC3, 0xA8, 0x00, 0x00, KEY_NONE,               KEY_LEFTBRACE,      // è
    0xC3, 0xA9, 0x00, 0x00, KEY_NONE,               KEY_SEMICOLON,      // é
    0xC3, 0xB6, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_SEMICOLON,      // ö
    0xC3, 0xBC, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_LEFTBRACE,      // ü
    0xE2, 0x82, 0xAC, 0x00, KEY_MOD_RALT,           KEY_E,              // €
};

const uint8_t combinations_chfr[] PROGMEM = {
    0x5E, 0x00, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_NONE,           KEY_SPACE,          // ^
    0x60, 0x00, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_NONE,           KEY_SPACE,          // `
    0xC2, 0xB4, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_NONE,           KEY_SPACE,          // ´
    0xC3, 0x80, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_A,              // À
    0xC3, 0x81, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_MOD_LSHIFT,     KEY_A,              // Á
    0xC3, 0x82, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_A,              // Â
    0xC3, 0x84, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_MOD_LSHIFT,     KEY_A,              // Ä
    0xC3, 0x88, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_E,              // È
    0xC3, 0x89, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_MOD_LSHIFT,     KEY_E,              // É
    0xC3, 0x8A, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_E,              // Ê
    0xC3, 0x8B, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_MOD_LSHIFT,     KEY_E,              // Ë
    0xC3, 0x8C, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_I,              // Ì
    0xC3, 0x8D, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_MOD_LSHIFT,     KEY_I,              // Í
    0xC3, 0x8E, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_I,              // Î
    0xC3, 0x8F, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_MOD_LSHIFT,     KEY_I,              // Ï
    0xC3, 0x92, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_O,              // Ò
    0xC3, 0x93, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_MOD_LSHIFT,     KEY_O,              // Ó
    0xC3, 0x94, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_O,              // Ô
    0xC3, 0x96, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_MOD_LSHIFT,     KEY_O,              // Ö
    0xC3, 0x99, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_U,              // Ù
    0xC3, 0x9A, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_MOD_LSHIFT,     KEY_U,              // Ú
    0xC3, 0x9B, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_MOD_LSHIFT,     KEY_U,              // Û
    0xC3, 0x9C, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_MOD_LSHIFT,     KEY_U,              // Ü
    0xC3, 0xA1, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_NONE,           KEY_A,              // á
    0xC3, 0xA2, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_NONE,           KEY_A,              // â
    0xC3, 0xAA, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_NONE,           KEY_E,              // ê
    0xC3, 0xAB, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_NONE,           KEY_E,              // ë
    0xC3, 0xAC, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_NONE,           KEY_I,              // ì
    0xC3, 0xAD, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_NONE,           KEY_I,              // í
    0xC3, 0xAE, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_NONE,           KEY_I,              // î
    0xC3, 0xAF, 0x00, 0x00, KEY_NONE,               KEY_RIGHTBRACE,     KEY_NONE,           KEY_I,              // ï
    0xC3, 0xB2, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_NONE,           KEY_O,              // ò
    0xC3, 0xB3, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_NONE,           KEY_O,              // ó
    0xC3, 0xB4, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_NONE,           KEY_O,              // ô
    0xC3, 0xB9, 0x00, 0x00, KEY_MOD_LSHIFT,         KEY_EQUAL,          KEY_NONE,           KEY_U,              // ù
    0xC3, 0xBA, 0x00, 0x00, KEY_MOD_RALT,           KEY_MINUS,          KEY_NONE,           KEY_U,              // ú
    0xC3, 0xBB, 0x00, 0x00, KEY_NONE,               KEY_EQUAL,          KEY_NONE,           KEY_U,              // û
};

static hid_locale_t locale_chfr {
    (uint8_t*)ascii_chfr, 128,
    (uint8_t*)utf8_chfr, sizeof(utf8_chfr) / 6,
    (uint8_t*)combinations_chfr, sizeof(combinations_chfr) / 8,
};