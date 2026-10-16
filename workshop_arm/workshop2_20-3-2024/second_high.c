#include <LPC21xx.h>
#include "delay.h"
#include "defines.h"
#define NUM 12815454
#define SPIN 8

unsigned char segLUT[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int high,second;
void secondHigh(int data)
{
	int i,a=data;
	for(i=data;i;i/=10)
	{
		if(high<(i%10))
		{
			high=i%10;
		}
	}
	for(i=a;i;i/=10)
	{
		if((second<(i%10))&&(high>(i%10)))
		{
			second=i%10;
		}
	}
}
int main()
{
//	int i;
	IODIR0|=0xFF<<SPIN;
	secondHigh(NUM);
	IOPIN0=segLUT[second]<<SPIN;
	while(1);
}

