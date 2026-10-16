#include<LPC21xx.h>
#include "Delay.h"
#include "defines.h"
#define OPIN 7
int main()
{
	int i;
	char sdata='A';
	SETBIT(IODIR0,OPIN);
	for(i=7;i>=0;i--)
	{
		READWRITEBIT(IOPIN0,OPIN,sdata,i);
		Delay(1000);
	}
}

