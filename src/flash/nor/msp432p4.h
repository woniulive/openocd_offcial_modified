/***************************************************************************
 *   Copyright (C) 2014 by Vlad Ungureanu                                  *
 *   vvu@vdev.ro                                                           *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.           *
 ***************************************************************************/

#ifndef MSP432P4_H_
#define MSP432P4_H_

const uint8_t msp432p4_flash_write_code[] =
{
		0x00, 0x7A, 0x00, 0x20, 0x81, 0x01, 0x00, 0x01, 0x69, 0x06, 0x00, 0x01,
		0x6B, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01, 0x6D, 0x06, 0x00, 0x01,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0x00, 0xF0, 0xD8, 0xB9, 0x70, 0x47, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x10, 0xB5, 0x8F, 0x48,
		0x00, 0x68, 0x00, 0x68, 0x80, 0x47, 0x00, 0xF0, 0x2B, 0xFA, 0x8D, 0x4C,
		0x01, 0x20, 0x21, 0x1D, 0x08, 0x60, 0x20, 0x68, 0x40, 0x1E, 0x12, 0xD0,
		0x40, 0x1E, 0x0D, 0xD0, 0x80, 0x1E, 0x08, 0xD0, 0x00, 0x1F, 0x03, 0xD0,
		0x40, 0xF6, 0xAD, 0x30, 0x08, 0x60, 0x0A, 0xE0, 0x00, 0xF0, 0x0D, 0xF8,
		0x07, 0xE0, 0x00, 0xF0, 0x72, 0xF8, 0x04, 0xE0, 0x00, 0xF0, 0x4B, 0xF8,
		0x01, 0xE0, 0x00, 0xF0, 0x2C, 0xF8, 0x00, 0x20, 0x20, 0x60, 0x00, 0xBE,
		0xFE, 0xE7, 0x70, 0xB5, 0x7C, 0x4D, 0x2D, 0x1D, 0x7C, 0x49, 0x4F, 0xF0,
		0x80, 0x70, 0x08, 0x60, 0x7B, 0x4C, 0x04, 0xF1, 0x18, 0x00, 0x00, 0x68,
		0x80, 0x69, 0x01, 0x46, 0x00, 0x20, 0x88, 0x47, 0x06, 0x46, 0x20, 0x68,
		0x40, 0x6D, 0x02, 0x21, 0x02, 0x46, 0x00, 0x20, 0x90, 0x47, 0x20, 0x68,
		0x40, 0x6D, 0x02, 0x21, 0x02, 0x46, 0x01, 0x20, 0x90, 0x47, 0x4F, 0xF4,
		0x40, 0x30, 0x00, 0xF0, 0xCC, 0xF8, 0x01, 0x2E, 0x01, 0xD0, 0x6F, 0x48,
		0x01, 0xE0, 0x40, 0xF6, 0xCE, 0x20, 0x28, 0x60, 0x70, 0xBD, 0xF8, 0xB5,
		0x68, 0x4C, 0x24, 0x1D, 0x00, 0x27, 0x00, 0xF0, 0x59, 0xF8, 0x05, 0x25,
		0x67, 0x4E, 0x06, 0xE0, 0x30, 0x68, 0x00, 0x6A, 0x01, 0x46, 0x01, 0x20,
		0x88, 0x47, 0x07, 0x46, 0x6D, 0x1E, 0x0F, 0xB9, 0x00, 0x2D, 0xF5, 0xDC,
		0x15, 0xB1, 0x40, 0xF6, 0xCE, 0x20, 0x00, 0xE0, 0x61, 0x48, 0x20, 0x60,
		0x00, 0xF0, 0x8A, 0xF8, 0xF8, 0xBD, 0x2D, 0xE9, 0xF0, 0x41, 0x5A, 0x48,
		0x00, 0xF1, 0x14, 0x06, 0x00, 0xF1, 0x04, 0x08, 0x00, 0x25, 0x00, 0xF0,
		0x60, 0xF8, 0x05, 0x24, 0x57, 0x4F, 0x07, 0xE0, 0x38, 0x68, 0x41, 0x6A,
		0x30, 0x68, 0x0A, 0x46, 0x01, 0x21, 0x90, 0x47, 0x05, 0x46, 0x64, 0x1E,
		0x0D, 0xB9, 0x00, 0x2C, 0xF4, 0xDC, 0x14, 0xB1, 0x40, 0xF6, 0xCE, 0x20,
		0x01, 0xE0, 0x4D, 0xF6, 0xAD, 0x60, 0xC8, 0xF8, 0x00, 0x00, 0x00, 0xF0,
		0x67, 0xF8, 0xBD, 0xE8, 0xF0, 0x81, 0x38, 0xB5, 0x48, 0x4C, 0x25, 0x1D,
		0x00, 0xF0, 0x41, 0xF8, 0x48, 0x48, 0x00, 0x68, 0x83, 0x6A, 0x04, 0xF1,
		0x14, 0x01, 0x09, 0x68, 0x04, 0xF1, 0x10, 0x00, 0x00, 0x68, 0x18, 0x34,
		0x22, 0x68, 0x1C, 0x46, 0x01, 0x23, 0xA0, 0x47, 0x04, 0x46, 0x00, 0xF0,
		0x4F, 0xF8, 0x01, 0x2C, 0x02, 0xD0, 0x4D, 0xF6, 0xAD, 0x60, 0x01, 0xE0,
		0x40, 0xF6, 0xCE, 0x20, 0x28, 0x60, 0x38, 0xBD, 0x38, 0xB5, 0x3E, 0x4D,
		0x3A, 0x4C, 0x28, 0x68, 0x40, 0x08, 0x0E, 0xD3, 0x20, 0x68, 0x00, 0x69,
		0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x01, 0x20, 0x90, 0x47, 0x20, 0x46,
		0x00, 0x68, 0x00, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x02, 0x20,
		0x90, 0x47, 0x28, 0x68, 0x80, 0x08, 0x0D, 0xD3, 0x20, 0x68, 0x00, 0x69,
		0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x03, 0x20, 0x90, 0x47, 0x20, 0x68,
		0x00, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x04, 0x20, 0x90, 0x47,
		0x38, 0xBD, 0x10, 0xB5, 0x27, 0x4C, 0x20, 0x68, 0x00, 0x69, 0x4F, 0xF0,
		0xFF, 0x31, 0x02, 0x46, 0x01, 0x20, 0x90, 0x47, 0x20, 0x68, 0x00, 0x69,
		0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x02, 0x20, 0x90, 0x47, 0x20, 0x68,
		0x00, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x03, 0x20, 0x90, 0x47,
		0x20, 0x68, 0x00, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x04, 0x20,
		0x90, 0x47, 0x10, 0xBD, 0x10, 0xB5, 0x18, 0x4C, 0x20, 0x68, 0x40, 0x69,
		0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x01, 0x20, 0x90, 0x47, 0x20, 0x68,
		0x40, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x02, 0x20, 0x90, 0x47,
		0x20, 0x68, 0x40, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46, 0x03, 0x20,
		0x90, 0x47, 0x20, 0x68, 0x40, 0x69, 0x4F, 0xF0, 0xFF, 0x31, 0x02, 0x46,
		0x04, 0x20, 0x90, 0x47, 0x10, 0xBD, 0x0D, 0x4B, 0x46, 0xF6, 0x5A, 0x11,
		0x19, 0x60, 0x0C, 0x4A, 0x11, 0x68, 0x21, 0xF4, 0xE0, 0x21, 0x08, 0x43,
		0x10, 0x60, 0x00, 0x20, 0x18, 0x60, 0x70, 0x47, 0x64, 0x08, 0x00, 0x02,
		0x50, 0x01, 0x00, 0x20, 0x08, 0xED, 0x00, 0xE0, 0x1C, 0x08, 0x00, 0x02,
		0x00, 0xAD, 0xDE, 0x00, 0xAD, 0xDE, 0xAD, 0xDE, 0x6C, 0x01, 0x00, 0x20,
		0x00, 0x04, 0x01, 0x40, 0x04, 0x04, 0x01, 0x40, 0x00, 0x2A, 0x4A, 0xD0,
		0x5F, 0xEA, 0x00, 0x0C, 0x8B, 0x07, 0x1C, 0xD1, 0x83, 0x07, 0x22, 0xD1,
		0x10, 0x2A, 0x08, 0xD3, 0x70, 0xB4, 0x10, 0x3A, 0x78, 0xC9, 0x78, 0xC0,
		0x10, 0x3A, 0xFB, 0xD2, 0x70, 0xBC, 0x10, 0x32, 0x38, 0xD0, 0x04, 0x2A,
		0x2C, 0xD3, 0x08, 0x2A, 0x05, 0xD3, 0x0C, 0x2A, 0x24, 0xBF, 0x08, 0xC9,
		0x08, 0xC0, 0x08, 0xC9, 0x08, 0xC0, 0x08, 0xC9, 0x08, 0xC0, 0x92, 0x07,
		0x2A, 0xD0, 0x92, 0x0F, 0x22, 0xE0, 0x0B, 0x78, 0x03, 0x70, 0x49, 0x1C,
		0x40, 0x1C, 0x52, 0x1E, 0x22, 0xD0, 0x8B, 0x07, 0xF7, 0xD1, 0xC3, 0x07,
		0x14, 0xD1, 0x83, 0x07, 0xD8, 0xD0, 0x12, 0x1F, 0x12, 0xD3, 0x08, 0xC9,
		0x03, 0x80, 0x1B, 0x0C, 0x43, 0x80, 0x00, 0x1D, 0x12, 0x1F, 0xF8, 0xD2,
		0x0A, 0xE0, 0x08, 0xC9, 0x03, 0x70, 0x1B, 0x0A, 0x43, 0x70, 0x1B, 0x0A,
		0x83, 0x70, 0x1B, 0x0A, 0xC3, 0x70, 0x00, 0x1D, 0x12, 0x1F, 0xF4, 0xD2,
		0x12, 0x1D, 0x05, 0xD0, 0x0B, 0x78, 0x03, 0x70, 0x49, 0x1C, 0x40, 0x1C,
		0x52, 0x1E, 0xF9, 0xD1, 0x60, 0x46, 0x70, 0x47, 0xF0, 0xB5, 0x1E, 0x48,
		0x01, 0x27, 0xF8, 0x42, 0x01, 0xD0, 0x00, 0xF0, 0x67, 0xF8, 0x1E, 0x4D,
		0x1E, 0x4F, 0x1F, 0x4E, 0xBD, 0x42, 0x06, 0xD2, 0x03, 0xCD, 0x04, 0x78,
		0xA4, 0x00, 0x34, 0x59, 0x40, 0x1C, 0xA0, 0x47, 0xF6, 0xE7, 0x16, 0x4D,
		0x16, 0x4F, 0xBD, 0x42, 0x02, 0xD2, 0x10, 0xCD, 0xA0, 0x47, 0xFA, 0xE7,
		0xF0, 0xBD, 0x03, 0x25, 0x1B, 0xE0, 0x41, 0x68, 0x08, 0x30, 0x0A, 0x1C,
		0x2A, 0x40, 0x0B, 0xD1, 0x1A, 0x1C, 0x2A, 0x40, 0xAB, 0x43, 0x05, 0xD0,
		0x04, 0x68, 0x04, 0x30, 0x0C, 0x60, 0x04, 0x31, 0x04, 0x3B, 0xF9, 0xD1,
		0x13, 0x1C, 0x05, 0xD0, 0x04, 0x78, 0x01, 0x30, 0x0C, 0x70, 0x01, 0x31,
		0x01, 0x3B, 0xF9, 0xD1, 0x02, 0x1C, 0x2A, 0x40, 0x01, 0xD0, 0xA8, 0x43,
		0x04, 0x30, 0x03, 0x68, 0x00, 0x2B, 0xE0, 0xD1, 0x70, 0x47, 0xC0, 0x46,
		0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x4E, 0xF6, 0x88, 0x51, 0xCE, 0xF2, 0x00, 0x01, 0x08, 0x68, 0x4F, 0xF0,
		0xF0, 0x03, 0x40, 0xEA, 0x03, 0x40, 0x08, 0x60, 0x09, 0x48, 0x85, 0x46,
		0x09, 0x48, 0x85, 0x44, 0x6F, 0x46, 0x07, 0x20, 0x87, 0x43, 0xBD, 0x46,
		0x07, 0x48, 0x6F, 0x46, 0x07, 0x60, 0xFF, 0xF7, 0x9F, 0xFF, 0x00, 0xF0,
		0x6B, 0xF8, 0x01, 0x20, 0x00, 0xF0, 0x30, 0xF8, 0xFE, 0xE7, 0xC0, 0x46,
		0x00, 0x78, 0x00, 0x20, 0x00, 0x02, 0x00, 0x00, 0x80, 0x06, 0x00, 0x01,
		0x70, 0xB5, 0x0F, 0x4D, 0x06, 0x46, 0x73, 0x88, 0x00, 0x24, 0x16, 0xE0,
		0xA0, 0x00, 0x00, 0xEB, 0xC4, 0x00, 0x30, 0x18, 0x41, 0x68, 0xC2, 0x68,
		0x80, 0x68, 0x4A, 0xB9, 0x2A, 0x68, 0x52, 0xB1, 0x0A, 0x78, 0x55, 0xF8,
		0x22, 0x30, 0x4A, 0x1C, 0x01, 0x46, 0x10, 0x46, 0x98, 0x47, 0x01, 0xE0,
		0xFF, 0xF7, 0x2A, 0xFF, 0x73, 0x88, 0x64, 0x1C, 0xA4, 0xB2, 0xA3, 0x42,
		0xE6, 0xDC, 0x70, 0xBD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0x70, 0x47,
		0x08, 0xB5, 0xFF, 0xF7, 0xFB, 0xFF, 0xFE, 0xE7, 0x38, 0xB5, 0x05, 0x46,
		0x09, 0x48, 0x00, 0x68, 0x80, 0x47, 0x09, 0x4C, 0x20, 0x1D, 0x00, 0x68,
		0x10, 0xB1, 0x01, 0x46, 0x28, 0x46, 0x88, 0x47, 0x20, 0x68, 0x00, 0xB1,
		0x80, 0x47, 0x05, 0x48, 0x00, 0x68, 0x80, 0x47, 0xFF, 0xF7, 0xE8, 0xFF,
		0x38, 0xBD, 0xC0, 0x46, 0x70, 0x06, 0x00, 0x01, 0x78, 0x06, 0x00, 0x01,
		0x74, 0x06, 0x00, 0x01, 0xEF, 0xF3, 0x10, 0x80, 0x72, 0xB6, 0x70, 0x47,
		0x00, 0x20, 0x70, 0x47, 0xEF, 0xF3, 0x10, 0x80, 0x70, 0x47, 0x00, 0x20,
		0x70, 0x47, 0xEF, 0xF3, 0x10, 0x80, 0x62, 0xB6, 0x70, 0x47, 0x00, 0x20,
		0x70, 0x47, 0x30, 0xBF, 0x70, 0x47, 0x80, 0xF3, 0x11, 0x88, 0x70, 0x47,
		0xEF, 0xF3, 0x11, 0x80, 0x70, 0x47, 0x00, 0x20, 0x70, 0x47, 0x00, 0x00,
		0x04, 0x49, 0xB1, 0xF1, 0xFF, 0x3F, 0x07, 0xBF, 0x00, 0x21, 0x08, 0x1C,
		0x08, 0x68, 0x09, 0x1D, 0xFF, 0xF7, 0xA8, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF,
		0x03, 0x49, 0x08, 0x60, 0x70, 0x47, 0x02, 0x49, 0x09, 0x1F, 0x08, 0x60,
		0x70, 0x47, 0x70, 0x47, 0x74, 0x06, 0x00, 0x01, 0xFE, 0xE7, 0xFE, 0xE7,
		0xFF, 0xF7, 0xCA, 0xBF, 0x63, 0x06, 0x00, 0x01, 0x63, 0x06, 0x00, 0x01,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif /* MSP432P4_H_ */
