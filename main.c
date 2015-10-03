/*
 * main.c
 *
 *  Created on: Oct 3, 2015
 *      Author: JohnnyP
 */

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB |= 1 << PINB3; 		// AVR ATtiny85 port B pin 3 set to output

	while(1)
	{
		PORTB ^= 1 << PINB3;	// Toggling pin 3 by using XOR operation
		_delay_ms(100);
	}
	return 0;
}
