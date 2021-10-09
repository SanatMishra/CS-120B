#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	
#include <stdio.h>
int main(void) {
DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs
				// Initialize output on PORTB to 0x00
unsigned char inp = 0x00;
while(1) {
	inp = PINA;
	PORTB = inp % 2 + (inp>>1) % 2 + (inp>>2) % 2 + (inp>>3) % 2;
}
return 1;
}

