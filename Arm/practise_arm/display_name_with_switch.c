#include <LPC21xx.h>
#include "delay.h"
#include "defines.h"
#include "lcd_defines.h"
#include "lcd.h"
#include "types.h"
#define SW1 28
int main()
{
	s8 s1[20]="vector india";
	s8 s2[20]="institute";
	InitLCD();
	while(1)
	{
	if(((IOPIN1>>SW1)&1)==0)
{
		StrLCD(s1);
		Delay_us(100);
		CmdLCD(0x01);
		}

	else
	{
		StrLCD(s2);
		Delay_us(100);
		CmdLCD(0x01);
		}
	}
		
}

