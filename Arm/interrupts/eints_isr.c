#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "pin_function_defines.h"

#define EINT0_LED 8
#define EINT1_LED 9
#define EINT2_LED 10

u32 count,intCount;

void eint0_isr(void) __irq
{
	//activity of isr start
	CPLBIT(IOPIN0,EINT0_LED);
	intCount++;
	if(intCount==10)
		VICIntEnClr=1<<14;
	//activity of isr end
	//clr eint0 status in external interrupt peripheral
	EXTINT=1<<0;
	//clr eint0 status in VIC
	VICVectAddr=0;
}

void eint1_isr(void) __irq
{
	//activity of isr start
	CPLBIT(IOPIN0,EINT1_LED);
	intCount++;
	if(intCount==10)
		VICIntEnClr=1<<15;
	//activity of isr end
	//clr eint0 status in external interrupt peripheral
	EXTINT=1<<1;
	//clr eint0 status in VIC
	VICVectAddr=0;
}
void eint2_isr(void) __irq
{ 
	CPLBIT(IOPIN0,EINT2_LED);
	intCount++;                                                                                                                                                 if(intCount==10)
		VICIntEnClr=1<<16;                                                                                                                                  //activity of isr end
	//clr eint0 status in external interrupt peripheral
	EXTINT=1<<2;
	VICVectAddr=0;
}

void Enable_EINTs(void)
{
	//cfg i/o as gpio out for eint0,eint1 status LED
	IODIR0|=1<<EINT0_LED|1<<EINT1_LED|1<<EINT2_LED;
	//cfg i/o as eint0 input pin
	CFGPIN(PINSEL0,1,FUNC4);
	//cfg i/o as eint0 input pin
	CFGPIN(PINSEL0,3,FUNC4);
	CFGPIN(PINSEL0,7,FUNC4);
	//default
	VICIntSelect=1<<14;
	//enable eint0,eint1 in VIC
	VICIntEnable=1<<14|1<<15|1<<16;
	//select eint0,eint1 as V.IRQs 0,1
	VICVectCntl10=0x20|15;
	//& load eint0 isr into hardware lut
	VICVectAddr0=(u32)eint1_isr;
	//VICVectCntl0=0x20|15;
	VICDefVectAddr=(u32)eint2_isr;
	//& load eint1 isr into hardware lut
	//VICVectAddr0=(u32)eint1_isr;
	//enable eint0,eint1 in ext.int peripheral
	EXTINT=1<<2|1<<1|1<<0;
	//cfg eint0,eint1 for edge triggering
	EXTMODE=1<<2|1<<1|1<<0;
	//default eint0,eint1 is falling edge
	//EXTPOLAR=0;
}

