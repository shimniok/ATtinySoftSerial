/*
 * TinySoftSerial.c
 *
 * Created: 5/8/2018 3:47:42 PM
 * Author : User
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "SoftwareSerial.h"

// Timer timing for baud rates
//
#define OCR4800		 52	// div 64
#define OCR9600		 26	// div 64
#define OCR19200	104	// div 8
#define OCR38400	 52	// div 8
#define OCR115200	138	// div 1

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

