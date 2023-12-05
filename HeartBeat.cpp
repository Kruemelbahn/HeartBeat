/*
||
|| @file HeartBeat.cpp
|| @version 1.0
|| @author Michael Zimmermann
|| @contact michael.zimmermann.sg@t-online.de
||
|| @description
|| | this provides a Heartbeat on pin 6 (default), so you can tell the software is running.
|| | Put an LED (with resistor) on the following pin:
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

#include "HeartBeat.h"

HeartBeat::HeartBeat(uint8_t ledPin)
: ui8_pinLed(ledPin)
, ui8_hbval(128)
, i8_delta(8)
, ul_previousMillis(0)
{
    pinMode(ui8_pinLed, OUTPUT);
    ul_previousMillis = millis();
}

void HeartBeat::beat()
{
    if((millis() - ul_previousMillis) > 20)

    {
      ul_previousMillis = millis();   // keep actual timevalue

      // change status:
      if (ui8_hbval > 192)
        i8_delta = -i8_delta;
      if (ui8_hbval < 32)
        i8_delta = -i8_delta;
      ui8_hbval += i8_delta;
      analogWrite(ui8_pinLed, ui8_hbval);
    }
}
