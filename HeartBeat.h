/*
||
|| @file HeartBeat.h
|| @version 1.0
|| @author Michael Zimmermann
|| @contact michael.zimmermann.sg@t-online.de
||
|| @description
|| | this provides a Heartbeat on pin 6 (default), so you can tell the software is running.
|| | Put a LED (with resistor) on the following pin:
|| | 	6: Heartbeat - shows the program is running
|| #
||
|| @license
|| |	Copyright (c) 2018 Michael Zimmermann <http://www.kruemelsoft.privat.t-online.de>
|| |	All rights reserved.
|| |	
|| |	This program is free software: you can redistribute it and/or modify
|| |	it under the terms of the GNU General Public License as published by
|| |	the Free Software Foundation, either version 3 of the License, or
|| |	(at your option) any later version.
|| |	
|| |	This program is distributed in the hope that it will be useful,
|| |	but WITHOUT ANY WARRANTY; without even the implied warranty of
|| |	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
|| |	GNU General Public License for more details.
|| |	
|| |	You should have received a copy of the GNU General Public License
|| |	along with this program. If not, see <http://www.gnu.org/licenses/>.
|| #
||
*/

#ifndef _KS_HEARTBEAT_H
#define _KS_HEARTBEAT_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class HeartBeat{
  public:
    HeartBeat(uint8_t ledPin = 6);
    void beat();
  private: 
    uint8_t ui8_pinLed;
    uint8_t ui8_hbval;
    int8_t i8_delta;
    unsigned long ul_previousMillis;
};

#endif
