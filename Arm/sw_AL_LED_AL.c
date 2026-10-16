//0.4 to 0.7 AL switch
//0.8 to 0.11 AL LED
#include<LPC21xx.h>
#include "defines.h"
#define SW_AL_0_4 4
#define LED_AL_0_8 8
int main()
{
	int i;
	WRITENIBBLE(IODIR0,LED_AL_0_8,15);
	while(1)
	{
	for(i=0;i<4;i++)
	{
		READWRITEBIT(IOPIN0,(LED_AL_0_8)+i,IOPIN0,(SW_AL_0_4)+i);
		//Delay_ms(100);
	}
//	WRITENIBBLE(IOPIN0,LED_AL_0_8,READNIBBLE(IOPIN0,SW_AL_0_4));
	}
}
