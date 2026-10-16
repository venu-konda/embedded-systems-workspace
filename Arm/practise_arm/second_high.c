#include <LPC21xx.h>
#include "delay.h"
#include "defines.h"
#define NUM 1234
int read;
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
	
	//	secondHigh(read);
	IODIR0|=0xFF<<8;
	while(1)
	{
		//IOSET0=15<<8;
		//IOPIN0^=(15^second)<<8;
		read=READBYTE(IOPIN0,0);
	//    READWRITEBYTE(read,0,IOPIN0,0);
		secondHigh(read);
			WRITEBYTE(IOPIN0,8,second);
		//READWRITEBYTE(secondHigh(read),8,IOPIN0,0);
		Delay_ms(100);
	
	}
}

