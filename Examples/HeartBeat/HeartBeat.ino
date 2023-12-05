/*
||
|| @file HeartBeat.ino
|| @version 1.0
|| @author Michael zimmermann
|| @contact kruemelbahn@hotmail.de
||
|| @description
|| | show an example of using heartbeat
|| #
||
|| @license
|| | Copyright (c) 2016 Michael Zimmermann. All rights reserved.
|| #
||
*/

#include <HeartBeat.h>

/*
||
|| Connect a LED (with resistor) on pin 6 to GND
||
*/

HeartBeat oBeat(6);

void setup()
{
    // nothing to do here
}

void loop()
{
    oBeat.beat();
}
