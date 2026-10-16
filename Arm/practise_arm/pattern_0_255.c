//cfg 0.8 to 0.15
//send 0 to 255
#include<LPC21xx.h>
#include "delay1.h"
#define OPORT 8
int main()
{
	int i;
	IODIR0|=255<<OPORT;
	for(i=0;i<256;i++)
	{
		IOPIN0=i<<OPORT;
		Delay_ms(100);
	}
}
