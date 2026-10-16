#include "types.h"

void CfgPortPin(u32 portNo,u32 pinNo,u32 pinFunc)
{
	if(portNo==0)
	{
		if(pinFunc==GPIO_IN)
		{
			IODIR0&=~(1<<pinNo);   pinFunc=FUNC1;
		}
		else if(pinFunc==GPIO_OUT)
		{
			IODIR0|=(1<<pinNo);   pinFunc=FUNC1;
		}
		if(pinNo<=15)
		{
			CFGPIN(PINSEL0,pinNo,pinFunc);
		}
		else if((pinNo>=16)&&(pinNo<=31))
		{
			CFGPIN(PINSEL1,(pinNo-16),pinFunc);
		}
	}
	
if(portNo==1)
	{
		if(pinFunc==GPIO_IN)
		{
			IODIR1&=~(1<<pinNo);   pinFunc=FUNC1;
		}
		else if(pinFunc==GPIO_OUT)
		{
			IODIR1|=(1<<pinNo);   pinFunc=FUNC1;
		}
		if((pinNo>=16)&&(pinNo<=31))
		{
			CFGPIN(PINSEL2,(pinNo-16),pinFunc);
		}
	}
	
}
void SetPortPin(u32 PortNo,u32 PinNo)
{
	(portNo==0)?  SSETBIT(IOSET0,pinNo) : SSETBIT(IOSET1,pinNo);
}

void ClrPortPin(u32 portNo,u32 pinNo)
{
	(portNo==0) ? SCLRBIT(IOCLR0,pinNo) : SCLRBIT(IOCLR1,pinNo);
}

void TogglePortPin(u32 portNo,u32 pinNo)
{
	(portNo==0) ? CPLBIT(IOPIN0,pinNo) : CPLBIT(IOPIN1,pinNo) ;
}

void Wr2PortPin(u32 portNo,u32 pinNo,u32 bit)
{
	(portNo==0) ? WRITEBIT(IOPIN0,pinNo,bit) : WRITEBIT(IOPIN1,pinNo,bit) ;
}

void RdPortPin(u32 portNo,u32 pinNo)
{
	(portNo==0) ? READBIT(IOPIN0,pinNo) : READBIT(IOPIN1,pinNo) ;
}

