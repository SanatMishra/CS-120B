#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	
#include <stdio.h>
int main(void) {
DDRA = 0x00; PORTA = 0x00; // Configure port A's 8 pins as inputs
DDRB = 0x00; PORTB = 0x00; // Configure port A's 8 pins as inputs
DDRC = 0x00; PORTC = 0x00; // Configure port A's 8 pins as inputs
DDRD = 0xFF; PORTD = 0x00; // Configure port B's 8 pins as outputs
				// Initialize output on PORTB to 0x00
unsigned char inpa = 0x00, inpb = 0x00, inpc = 0x00;
while(1) {
	inpa = PINA;
	inpb = PINB;
	inpc = PINC;
	PORTD = inpa + inpb + inpc;
	if (PORTD > 140)
		PORTD |= 0x01;
	else
		PORTD &= 0xFE;
	if ((int)inpa - (int)inpc > 80 || (int)inpc - (int)inpa > 80)
		PORTD |= 0x02;
	else
		PORTD &= 0xFD;
	
}
return 1;
}

