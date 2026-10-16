#include<LPC21xx.h>
#include "delay.h"
#include "types.h"
#define CA7SEG_2_MUX 8
#define DSEL1 16
#define DSEL2 17
u8 segLUT[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int main()
{
	u32 i=25;
	IODIR0|=0xFF<<CA7SEG_2_MUX|1<<DSEL1|1<<DSEL2;
	while(1)
	{
		IOPIN0=segLUT[i/10]<<CA7SEG_2_MUX;
		IOSET0=1<<DSEL1;
		Delay_ms(5);
		IOCLR0=1<<DSEL1;


		IOPIN0=segLUT[i%10]<<CA7SEG_2_MUX;
		IOSET0=1<<DSEL2;
                Delay_ms(5);
                IOCLR0=1<<DSEL2;
	}
}

