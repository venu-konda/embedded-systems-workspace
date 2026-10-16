#include "kpm.h"

u8 keyV;
#include<lpc21xx.h>
int main()
{
	
	InitKPM();
	IODIR0|=1<<7;
	while(1)
	{
		keyV=KeyScan();
		while(ColScan()==0);
		if(keyV==1)
		{
			IOPIN0=1<<7;
		}
	}
}

