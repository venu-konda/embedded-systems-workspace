#include<LPC21xx.h>
#include "delay.h"
#include "defines.h"
#define IPIN 1
char data;
int main()
{
	int i;
	
	//SETBIT(IODIR0,IPIN);
	for(i=7;i>=0;i--)
	{
		READWRITEBIT(data,i,IOPIN0,IPIN);
		Delay(1000);
	}
	while(1);
}

