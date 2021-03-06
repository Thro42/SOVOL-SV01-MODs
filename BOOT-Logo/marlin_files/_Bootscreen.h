/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'MeinLogo.jpg'
 */
#pragma once

#define CUSTOM_BOOTSCREEN_BMPWIDTH 128

const unsigned char custom_start_bmp[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x0F, 0xFE, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x3F, 0xFF, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xC0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE1, 0xFF, 0xFF, 0xE0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x1F, 0xF3, 0xFE, 0x1F, 0xE0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x07, 0xF3, 0xF8, 0x03, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x01, 0xFF, 0xF0, 0x01, 0xF8,
    0x03, 0x80, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0xFF, 0xC0, 0x00, 0xF8,
    0x03, 0x80, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x7F, 0xC0, 0x00, 0xF8,
    0x07, 0x80, 0xF0, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x7F, 0x80, 0x00, 0xFC,
    0x07, 0xC1, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x3F, 0x00, 0x00, 0x7C,
    0x07, 0xC1, 0xF0, 0x07, 0xC0, 0xE1, 0xCF, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x3F, 0x00, 0x00, 0x7C,
    0x07, 0xC1, 0xF0, 0x1F, 0xF0, 0xE1, 0xFF, 0x80, 0x00, 0x0F, 0x80, 0x00, 0x1E, 0x00, 0x00, 0x7C,
    0x0E, 0xE3, 0xB8, 0x3F, 0xF8, 0xE1, 0xFF, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C,
    0x0E, 0xE3, 0xB8, 0x38, 0x38, 0xE1, 0xE3, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C,
    0x0E, 0xE3, 0xB8, 0x70, 0x1C, 0xE1, 0xC1, 0xC0, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFC,
    0x0E, 0x77, 0x38, 0x7F, 0xFC, 0xE1, 0xC1, 0xC0, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF8,
    0x1E, 0x77, 0x3C, 0x7F, 0xFC, 0xE1, 0xC1, 0xC0, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF8,
    0x1C, 0x77, 0x1C, 0x7F, 0xFC, 0xE1, 0xC1, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xF8,
    0x1C, 0x3E, 0x1C, 0x70, 0x00, 0xE1, 0xC1, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xF0,
    0x1C, 0x3E, 0x1C, 0x38, 0x20, 0xE1, 0xC1, 0xC0, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xF0,
    0x1C, 0x3E, 0x1C, 0x3F, 0xF8, 0xE1, 0xC1, 0xC0, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xF0,
    0x38, 0x1C, 0x0E, 0x1F, 0xF0, 0xE1, 0xC1, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xE0,
    0x38, 0x1C, 0x0E, 0x07, 0xC0, 0xE1, 0xC1, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xE0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xC0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x1F, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x7F, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0xFE, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x01, 0xFC, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x03, 0xF8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x07, 0xF0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x1F, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x7F, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0xFF, 0x80, 0x00,
    0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x1F, 0xF3, 0xFF, 0x00, 0x00,
    0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00,
    0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00,
    0x0E, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00,
    0x0E, 0x07, 0x8E, 0xE7, 0x0E, 0x01, 0xF0, 0x38, 0x78, 0x1F, 0x03, 0xB8, 0x7F, 0x80, 0x00, 0x00,
    0x0E, 0x03, 0xCF, 0xE7, 0x0E, 0x07, 0xFC, 0x38, 0xF0, 0x7F, 0xC3, 0xF8, 0x1E, 0x00, 0x00, 0x00,
    0x0E, 0x01, 0xCF, 0xE7, 0x0E, 0x0F, 0xFE, 0x38, 0xE0, 0xFF, 0xE3, 0xF8, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x01, 0xCF, 0x07, 0x0E, 0x0F, 0x08, 0x39, 0xC0, 0xE0, 0xE3, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x01, 0xCE, 0x07, 0x0E, 0x1E, 0x00, 0x3B, 0xC1, 0xC0, 0x73, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x01, 0xCE, 0x07, 0x0E, 0x1C, 0x00, 0x3F, 0x81, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x01, 0xCE, 0x07, 0x0E, 0x1C, 0x00, 0x3F, 0x01, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x03, 0xCE, 0x07, 0x0E, 0x1C, 0x00, 0x3F, 0x81, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x03, 0x8E, 0x07, 0x0E, 0x1E, 0x00, 0x3B, 0xC1, 0xC0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0E, 0x0F, 0x8E, 0x07, 0x9E, 0x0F, 0x08, 0x39, 0xE0, 0xE0, 0x83, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0xFF, 0x0E, 0x03, 0xFC, 0x0F, 0xFE, 0x38, 0xF0, 0xFF, 0xE3, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0xFE, 0x0E, 0x03, 0xFC, 0x07, 0xFC, 0x38, 0x78, 0x7F, 0xC3, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0xF8, 0x0E, 0x00, 0xF0, 0x01, 0xF0, 0x38, 0x3C, 0x1F, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
