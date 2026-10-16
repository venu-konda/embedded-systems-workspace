#include <LPC21xx.h>
#include <stdlib.h>
#include "delay.h"
#include "types.h"
#include "defines.h"
#define CA7SEG 8
#define SW 2
u8 segLUT[2]={0x87,0x89};
int main()
{
	u32 i=0,j=1;
	IODIR0|=0xFF<<CA7SEG;
//	IOPIN0=segLUT[i]<<CA7SEG;
	while(1)
	{
		while(((IOPIN0>>SW)&1)==0)
		{
			srand(j++);
			i=rand()%2;
			IOPIN0=segLUT[i]<<CA7SEG;
			Delay_ms(5);
			}
	}
}
