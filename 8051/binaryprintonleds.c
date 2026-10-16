#include <reg51.h>

#define LEDS P2

#include "delay.h"

main()
{
	unsigned char i;
/*
	for(i=0;i<255;i++)
	{
		LEDS = i;
		delay_ms(1000);		
	}
	LEDS = i;
*/
/*
	for(i=0;i<255;i++)
	{
		LEDS = ~i;
		delay_ms(1000);		
	}
	LEDS = ~i;
*/
	for(i=0;i<255;i++)
	{
		LEDS = i^0x0F;
		delay_ms(1000);		
	}
	LEDS = i^0x0F;
	while(1);

}
