#include<lpc21xx.h>
#include "delay.h"
int main()
{
	PINSEL1=0;
	IODIR1|=(~(0x0000ffff));
//	while(1)
//	{
	
		IODIR0|=0xffffffff;
		IODIR1|=0xFFFF0000;
		Delay(10000);
		IOSET0=0xffffffff;
		IOSET1=0xFFFF0000;
		Delay(10000);
		IOCLR0=0xffffffff;
		IOCLR1=0xFFFF0000;
		Delay(10000);
		IODIR0&=(~(0xFFFFffff));
		IODIR1&=(~(0xffff0000));
		Delay(10000);
//	}
while(1);
}

