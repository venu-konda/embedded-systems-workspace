#include <LPC21xx.h>
#include "delay.h"
#include "defines.h"
int seg_LUT[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
int main()
{
	int i,j,k;
	IODIR0|=0xFF<<8|1<<16|1<<17;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
			 for(k=500;k>0;k--)
			 {
			/*	IOPIN0=seg_LUT[i]<<8;
				IOSET0=1<<16;
				Delay_ms(1);
				IOCLR0=1<<16;
				Delay_ms(100);
				IOPIN0=seg_LUT[j]<<8;
				IOSET0=1<<17;
			     Delay_ms(1);
				 IOCLR0=1<<17;*/
				 	IOPIN0=seg_LUT[i]<<8;
				IOSET0=1<<16;
				Delay_ms(1);
				IOCLR0=1<<16;
				IOPIN0=seg_LUT[j]<<8;
				IOSET0=1<<17;
				Delay_ms(1);
			    IOCLR0=1<<17;
				}
			}

		}
	}
}

