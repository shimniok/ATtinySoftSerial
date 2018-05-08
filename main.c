/*
 * main.c - example for using TinySoftSerial for ATtiny
 *
 * Created: 5/8/2018 3:47:42 PM
 * Author : Michael Shimniok
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "SoftwareSerial.h"

// incoming buffer
volatile char *inbuf[32];
// outgoing buffer
volatile char *outbuf[32];

int main()
{
	softSerialBegin(38400);
	while (1) {
		if (softSerialAvailable()) {
			softSerialWrite( softSerialRead() );
			_delay_ms(10);
		}
	}
}

