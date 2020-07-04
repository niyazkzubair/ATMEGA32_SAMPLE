#ifndef F_CPU
	#define F_CPU 12000000UL
#endif

#include <stdio.h>
#include <math.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/signal.h>
#include <inttypes.h>
#include <util/delay.h>


int main(void) {
	DDRA = DDRA | ((1<<PA3) | (1<<PA2) | (1<<PA1) | (1<<PA0));
	while (1) {
		PORTA ^= (1<<PA3);
		PORTA ^= (1<<PA2);
		PORTA ^= (1<<PA1);
		PORTA ^= (1<<PA0);
		
		_delay_ms(500);
	}
	
	return (0);
}
