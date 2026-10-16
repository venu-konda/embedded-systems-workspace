#include<lpc21xx.h>
#include "delay.h"
int main()
{
	PINSEL1=0;
	IODIR0&=(~(0xFFFFFFFF));
		IODIR1&=(~(0xFFFF0000));
		Delay(5000);
	
		IODIR0|=0xffffffff;
		IODIR1|=0xFFFF0000;
		Delay(1000);
	while(1)
	{
		
		IOPIN0^=0xFFFFFFFF;
		IOPIN1^=0xFFFF0000;
		Delay(1000);
	
	}
	}

