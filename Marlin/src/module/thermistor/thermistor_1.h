/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, NRBG105F3950B1F, 4.43 kOhm pull-up, hotend thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
  { OV(16), 300 },
  { OV(17), 295 },
  { OV(19), 290 },
  { OV(21), 285 },
  { OV(22), 280 },
  { OV(24), 275 },
  { OV(27), 270 },
  { OV(29), 265 },
  { OV(32), 260 },
  { OV(35), 255 },
  { OV(38), 250 },
  { OV(42), 245 },
  { OV(46), 240 },
  { OV(51), 235 },
  { OV(56), 230 },
  { OV(61), 225 },
  { OV(67), 220 },
  { OV(74), 215 },
  { OV(82), 210 },
  { OV(90), 205 },
  { OV(99), 200 },
  { OV(109), 195 },
  { OV(121), 190 },
  { OV(133), 185 },
  { OV(147), 180 },
  { OV(162), 175 },
  { OV(179), 170 },
  { OV(197), 165 },
  { OV(217), 160 },
  { OV(239), 155 },
  { OV(263), 150 },
  { OV(290), 145 },
  { OV(319), 140 },
  { OV(350), 135 },
  { OV(383), 130 },
  { OV(417), 125 },
  { OV(454), 120 },
  { OV(491), 115 },
  { OV(529), 110 },
  { OV(567), 105 },
  { OV(606), 100 },
  { OV(644), 95 },
  { OV(682), 90 },
  { OV(718), 85 },
  { OV(752), 80 },
  { OV(784), 75 },
  { OV(814), 70 },
  { OV(842), 65 },
  { OV(867), 60 },
  { OV(890), 55 },
  { OV(910), 50 },
  { OV(928), 45 },
  { OV(944), 40 },
  { OV(958), 35 },
  { OV(969), 30 },
  { OV(979), 25 },
  { OV(987), 20 },
  { OV(994), 15 },
  { OV(1000), 10 },
  { OV(1005), 5 },
  { OV(1009), 0 }
};
