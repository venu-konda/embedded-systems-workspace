#include<LPC21xx.h>
#include "delay.h"
#include"defines.h"
#define LED_AL_S_8 8
#define LED_AL_E_11 11
#define LED_AH_S_12 12
#define LED_AH_E_15 15
#define SW1_AL_0_6 6
int main()
{
	int i,j;
	WRITEBYTE(IODIR0,LED_AL_S_8,255);
	while(1)
	{
		WRITEBYTE(IOPIN0,8,0x0F);
		Delay_ms(100);
		if(((IOPIN0>>6)&1)==0)
		{
			for(i=LED_AL_S_8,j=LED_AH_E_15;i<=LED_AL_E_11;i++,j--)
			{
				if(((IOPIN0>>6)&1)==0){SCLRBIT(IOCLR0,i);}
				if(((IOPIN0>>6)&1)==0){SSETBIT(IOSET0,j);}
				if(((IOPIN0>>6)&1)==0){	Delay_s(2);	 }
				if(((IOPIN0>>6)&1)==0){WRITEBYTE(IOPIN0,8,0x0F);}
			}
			WRITEBYTE(IOPIN0,8,0x0F);
			Delay_ms(100);
		}
		if(((IOPIN0>>7)&1)==0)
		{
			for(i=LED_AL_E_11,j=LED_AH_S_12;i>=LED_AL_S_8;i--,j++)
			{
				if(((IOPIN0>>7)&1)==0){SCLRBIT(IOCLR0,i); }
				if(((IOPIN0>>7)&1)==0){SSETBIT(IOSET0,j); }
				if(((IOPIN0>>7)&1)==0){Delay_s(2);	}
				if(((IOPIN0>>7)&1)==0){SSETBIT(IOSET0,i);}
				if(((IOPIN0>>7)&1)==0){SCLRBIT(IOCLR0,j);}	
			}
		}
	}
}

