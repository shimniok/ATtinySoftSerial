# ATtinySoftSerial
Software Serial for ATtiny MCUs.

This is a port of Arduino SoftwareSerial for ATtiny using avr-gcc / Atmel Studio.

Originally described in my blog post [http://www.bot-thoughts.com/2013/11/attiny-software-serial.html|ATtiny Software Serial] 
which was written for ATtiny84, this is a revision for ATtiny85

It'd be nice if the code could be set up to more easily support configuration for multiple ATtiny MCUs.

* Appropriate Register names such as PCMSK (vs PCMSK0), PCIE (vs PCIE0), and so forth
* More easily select pins based on MCU chosen.

Then again, you could always just use ATtiny Core (Spence Konde) and do all this in Arduino.
