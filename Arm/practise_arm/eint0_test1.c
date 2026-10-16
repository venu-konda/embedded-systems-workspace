#include <LPC21xx.h>
#include "delay.h"
#define LED 7
void eint0_isr(void) __irq
{
	IOPIN0^=1<<LED;
	Delay_s(1);
	EXTINT=1<<0;
	VICVectAddr=0;
}
void Enable_eint(void)
{
	IODIR0|=1<<LED;
	PINSEL0=(PINSEL0&~(3<<2))|(3<<2);
	VICIntEnable=1<<14;
	VICVectCntl0=(1<<5)|14;
	VICVectAddr0=(unsigned int)eint0_isr;
	EXTINT=1<<0;
	EXTMODE=1<<0;
}
int count;
int main()
{
	Enable_eint();
	while(1)
	{
		count++;
	}	
}

