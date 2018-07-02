/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_SCREENWIDTH 128
#define STATUS_SCREEN_HOTEND_TEXT_X(E) (38 + (E) * 20)
#define STATUS_SCREEN_BED_TEXT_X (HOTENDS > 1 ? 81 : 73)
#define STATUS_SCREEN_FAN_TEXT_X 103

//============================================

#if HOTENDS < 2

  const unsigned char status_screen0_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
  0x00,0x00,0x1E,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
  0x20,0x00,0x03,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
  0x00,0x00,0x01,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
  0x00,0x00,0x03,0x62,0x00,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x2E,0x31,0xD0,
  0x2E,0x24,0x4E,0x62,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x2F,0x7B,0xD0,
  0x29,0x54,0x43,0x62,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x2F,0x7B,0xD0,
  0x29,0x54,0x41,0x62,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2E,0x31,0xD0,
  0x29,0x54,0x41,0x62,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2C,0x00,0xD0,
  0x29,0x52,0x81,0x62,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0x30,0x10,
  0x29,0x53,0x83,0x66,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0x78,0x10,
  0x29,0x21,0x1E,0x7C,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x20,0xFC,0x10,
  0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x30,0xFC,0x30,
  0x3F,0xFF,0xFF,0xFC,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00 
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
  0x00,0x00,0x1E,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
  0x20,0x00,0x03,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
  0x00,0x00,0x01,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
  0x00,0x00,0x03,0x62,0x00,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
  0x2E,0x24,0x4E,0x62,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
  0x29,0x54,0x43,0x62,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
  0x29,0x54,0x41,0x62,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
  0x29,0x54,0x41,0x62,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
  0x29,0x52,0x81,0x62,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
  0x29,0x53,0x83,0x66,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
  0x29,0x21,0x1E,0x7C,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
  0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
  0x3F,0xFF,0xFF,0xFC,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00 
  };

#else // HOTENDS >= 2

  const unsigned char status_screen0_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
  0x00,0x00,0x1E,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
  0x20,0x00,0x03,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
  0x00,0x00,0x01,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
  0x00,0x00,0x03,0x62,0x00,0x1F,0xE0,0x01,0xFE,0x00,0x08,0x20,0x80,0x2E,0x31,0xD0,
  0x2E,0x24,0x4E,0x62,0x00,0x3E,0xF0,0x03,0xCF,0x00,0x04,0x10,0x40,0x2F,0x7B,0xD0,
  0x29,0x54,0x43,0x62,0x00,0x3C,0xF0,0x03,0xB7,0x00,0x04,0x10,0x40,0x2F,0x7B,0xD0,
  0x29,0x54,0x41,0x62,0x00,0x3A,0xF0,0x03,0xF7,0x00,0x08,0x20,0x80,0x2E,0x31,0xD0,
  0x29,0x54,0x41,0x62,0x00,0x1E,0xE0,0x01,0xEE,0x00,0x10,0x41,0x00,0x2C,0x00,0xD0,
  0x29,0x52,0x81,0x62,0x00,0x1E,0xE0,0x01,0xDE,0x00,0x20,0x82,0x00,0x20,0x30,0x10,
  0x29,0x53,0x83,0x66,0x00,0x3E,0xF0,0x03,0xBF,0x00,0x20,0x82,0x00,0x20,0x78,0x10,
  0x29,0x21,0x1E,0x7C,0x00,0x3E,0xF0,0x03,0x87,0x00,0x10,0x41,0x00,0x20,0xFC,0x10,
  0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x03,0xFF,0x00,0x08,0x20,0x80,0x30,0xFC,0x30,
  0x3F,0xFF,0xFF,0xFC,0x00,0x0F,0xC0,0x00,0xFC,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x78,0x00,0xFF,0xFF,0xC0,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x30,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00 
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
  0x00,0x00,0x1E,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
  0x20,0x00,0x03,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
  0x00,0x00,0x01,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
  0x00,0x00,0x03,0x62,0x00,0x1F,0xE0,0x01,0xFE,0x00,0x08,0x20,0x80,0x20,0x30,0x10,
  0x2E,0x24,0x4E,0x62,0x00,0x3E,0xF0,0x03,0xCF,0x00,0x04,0x10,0x40,0x20,0x78,0x10,
  0x29,0x54,0x43,0x62,0x00,0x3C,0xF0,0x03,0xB7,0x00,0x04,0x10,0x40,0x20,0x78,0x10,
  0x29,0x54,0x41,0x62,0x00,0x3A,0xF0,0x03,0xF7,0x00,0x08,0x20,0x80,0x20,0x30,0x10,
  0x29,0x54,0x41,0x62,0x00,0x1E,0xE0,0x01,0xEE,0x00,0x10,0x41,0x00,0x2F,0x03,0xD0,
  0x29,0x52,0x81,0x62,0x00,0x1E,0xE0,0x01,0xDE,0x00,0x20,0x82,0x00,0x2F,0x87,0xD0,
  0x29,0x53,0x83,0x66,0x00,0x3E,0xF0,0x03,0xBF,0x00,0x20,0x82,0x00,0x2F,0x87,0xD0,
  0x29,0x21,0x1E,0x7C,0x00,0x3E,0xF0,0x03,0x87,0x00,0x10,0x41,0x00,0x27,0x87,0x90,
  0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x03,0xFF,0x00,0x08,0x20,0x80,0x33,0x87,0x30,
  0x3F,0xFF,0xFF,0xFC,0x00,0x0F,0xC0,0x00,0xFC,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
  0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x78,0x00,0xFF,0xFF,0xC0,0x3F,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x30,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00 
};

#endif // HOTENDS >= 2

