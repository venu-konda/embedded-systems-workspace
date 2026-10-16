#include<LPC21xx.h>
#include<stdlib.h>
#include "types.h"
#include "delay.h"
#define CA7SEG 8
#define SW  2
u8 segLUT[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int main()
{
	u32 i=0,j=1;
	IODIR0|=0xFF<<CA7SEG;
	IOPIN0=segLUT[i]<<CA7SEG;
	while(1)
	{
		while(((IOPIN0>>SW)&1)==0)
		{
			srand(j++);
			i=rand()%6+1;
			IOPIN0=segLUT[i]<<CA7SEG;
			Delay_ms(50);
		}
	}
}

