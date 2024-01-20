# HeartBeat

This is a simple library for usage with Arduino-platform.<br>
The library indicates the running on an AVR program using a LED lighting up and down like a heart beats.<br>
Tested on ATmega328.

> [!NOTE]
> If you use the delay()-function in your code, you can use the yield()[^1]-function to keep HeartBeat alive during delay, e.g.
> ```
> #include <HeartBeat.h>
> HeartBeat oHeartbeat;
> ...
> void yield(void) { oHeartbeat.beat(); }
> ```
> Place your(this) yield()-function at bottom of your main-ino-file

[^1]: yield() is defined in 'hooks.c' (placed normally in '<user>\AppData\Local\Arduino15\packages\arduino\hardware\avr\<version>\cores\arduino'
