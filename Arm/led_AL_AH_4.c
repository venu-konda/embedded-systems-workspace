////4 AL AND AH LED TURN ON AND OFF
#include<LPC21xx.h>
#include "defines.h"
#include "delay.h"
#define LED_AL_S_8 8
#define LED_AL_E_11 11
#define LED_AH_S_12 12
#define LED_AH_E_15 15
int main()
{
	int i,d=0,t=100;
	WRITEBYTE(IODIR0,LED_AL_S_8,255);
	while(1)
	{
	d=0;
	for(i=LED_AL_S_8;i<=LED_AL_E_11;i++)
	{
		SCLRBIT(IOCLR0,i);
		d+=t;
		Delay_ms(d);
		SSETBIT(IOSET0,i);
	}
	for(i=LED_AH_S_12;i<=LED_AH_E_15;i++)
	{
		SSETBIT(IOSET0,i);
		d+=t;
		Delay_ms(d);
		SCLRBIT(IOCLR0,i);
	}

	}
}
