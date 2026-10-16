#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#define CA7SEG 8
u8 segLUT[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int main()
{
	u32 i;
	IODIR0|=0xFF<<CA7SEG;
	
	IOPIN0|=0<<CA7SEG;
	Delay_ms(100);
	while(1)
	{
		for(i=0;i<10;i++)
		{
			IOPIN0=segLUT[i]<<CA7SEG;
			Delay_ms(1000);
		}
	}
}

