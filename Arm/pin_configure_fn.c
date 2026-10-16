#include<lpc21xx.h>
#include "pin_configure.h"
int main()
{
	CFGPIN(PINSEL0,8,FUNC4);
	CFGPIN(PINSEL0,8,FUNC3);
	CFGPIN(PINSEL0,8,FUNC2);
	CFGPIN(PINSEL0,8,FUNC1);


	CFGPIN(PINSEL1,16,FUNC4);
	CFGPIN(PINSEL1,16,FUNC3);
	CFGPIN(PINSEL1,16,FUNC2);
	CFGPIN(PINSEL1,16,FUNC1);

	PinFn(7,FUNC4);
	PinFn(7,FUNC3);
	PinFn(7,FUNC2);
	PinFn(7,FUNC1);

	PinFn(20,FUNC4);
	PinFn(20,FUNC3);
	PinFn(20,FUNC2);
	PinFn(20,FUNC1);
	while(1);
}
