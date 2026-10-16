//eint0.c

#include <LPC21xx.h>
#include<stdlib.h>
#include "types.h"
#include "defines.h"

#define CFGPIN(WORD,PIN,FUNC) \
WORD=(PIN<16) ? \
((WORD&~(3<<(PIN*2)))|(FUNC<<(PIN*2))) : \
((WORD&~(3<<((PIN-16)*2)))|(FUNC<<((PIN-16)*2))) 


u32 count,intCount,x,y;
u32 arr[5];
int test_unique(u32 *arr,u32 i)
{
int j;
	for(j=0;j<i;j++)
	{
	if(arr[i]==arr[j])
	return 0;
	}
	return 1;
}
void sort(u32 *a)
{
int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
}
void eint0_isr(void) __irq
{

	srand(y++);
	arr[x]=(rand()%100)+1;

	intCount++;
	x++;
	//CPLBIT(IOPIN0,7);
	if(intCount==5)
	{
    	VICIntEnClr=1<<14;
			sort(arr);
		}
	EXTINT=1<<0;
	VICVectAddr=0;
}
void Enable_EINT0(void)
{
//	IODIR0|=1<<7;
	//SETBIT(IODIR0,EINT0_LED);
	CFGPIN(PINSEL0,1,3);
	//VICIntSelect=0;
	VICIntEnable=1<<14;
	VICVectCntl0=0x20|14;
	VICVectAddr0=(u32)eint0_isr;
	EXTINT=1<<0;
	EXTMODE=1<<0;
	//EXTPOLAR=0;
}

main()
{
	Enable_EINT0();
	

	while(1)
	{
		count++;
	}
}

