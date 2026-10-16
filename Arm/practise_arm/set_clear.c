#include<lpc21xx.h>
#include "delay1.h"
main()
{
	//PINSEL0=(PINSEL0&~(3<<(7*2)));

//	IODIR0|=1<<(7);
		 while(1)
		 {
	IOSET0=1<<(7);

	Delay(500);
	IOCLR0=1<<(7);
	Delay(500);
	}
}
