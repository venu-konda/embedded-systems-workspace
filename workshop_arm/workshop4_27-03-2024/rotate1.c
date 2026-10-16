#include <LPC21xx.h>
#include <string.h>
#include "delay.h"
#include "defines1.h"
#include "lcd_defines.h"
#include "lcd1.h"
#include "types1.h"
int main()
{
	int i,l;
	char temp;
	s8 s[20]="HYDERBAD";
	l=strlen(s);
	InitLCD();
	while(1)
	{
	for(i=0;i<l;i++)
	{
			StrLCD(s);
			Delay_ms(200);
			CmdLCD(0X01);	
	}

	}

}
