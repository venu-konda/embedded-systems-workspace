#include <reg51.h>

sbit LED = P2^0;
sbit SW = P1^0;


main()
{
	while(1)
	{
		LED = SW;
/*
		if(SW == 0)
			LED = 0;
		else
			LED = 1;
*/
	}
}
