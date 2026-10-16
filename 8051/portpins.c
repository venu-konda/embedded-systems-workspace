#include <reg51.h>

#include "delay.h"

sbit portpin = P1^0;

#define portpins P2


main()
{
	portpin = 0;
	delay_ms(1);
	portpin = 1;
	delay_ms(1);
	portpins = 0x23;
	delay_ms(1);
	portpins = 0x48;
	while(1);
}
