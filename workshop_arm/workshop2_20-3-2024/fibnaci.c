#include<lpc21xx.h>
#include "delay.h"
#include "defines.h"
#define SPIN 8
#define DSEL1 16
#define DSEL2 17
unsigned char s[10]={0xC0,0xF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X90};
int fib(int data)
{
	if(data==1)
	return 0;
	if(data==2)
	return 1;
	else
	return (fib(data-1)+fib(data-2));
}
int main()
{
	int i,k,a=0;
	IODIR0|=(0XFF<<SPIN)|(1<<DSEL1)|(1<<DSEL2);
	for(i=0;a<100;i++)
	{
		a=fib(i);
		if(a<100)
		{
		for(k=500;k>0;k--)
		{
			IOPIN0=s[(a)/10]<<SPIN;
			IOSET0=1<<DSEL1;
			Delay_ms(1);
			IOCLR0=1<<DSEL1;
			IOPIN0=s[(a)%10]<<SPIN;
			IOSET0=1<<DSEL2;
			Delay_ms(1);
			IOCLR0=1<<DSEL2;
		}
		}
	}
}
