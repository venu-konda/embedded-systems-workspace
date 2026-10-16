#include <reg51.h>

#include "delay.h"

sbit LED = P1^0;

#define OPERATION COM

#define SETCLR 1
#define COM	2

main()
{
	while(1)
	{
#if (OPERATION == SETCLR)
		LED = 0;
		delay_ms(1000);
		LED = 1;
		delay_ms(1000);
#elif (OPERATION == COM)
		LED = ~LED;
		delay_ms(1000);
#endif

	}
}
