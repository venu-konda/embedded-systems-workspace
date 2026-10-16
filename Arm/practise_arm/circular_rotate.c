#include <LPC21xx.h>
#include "delay.h"
#include "defines.h"
#include "lcd_defines.h"
#include "lcd.h"
#include "types.h"
int main()
{
	int i;
	s8 s[17]="vector hello";
	InitLCD();
	while(1)
	{
		for(i=0;i<17;i++)
		{
			CmdLCD(GOTO_LINE1_POS0+i);
			StrLCD(s);
				
			if(i==11)
			{
				CmdLCD(GOTO_LINE1_POS0);
			  StrLCD(s+5);
			}
			if(i==12)
			{
				CmdLCD(GOTO_LINE1_POS0);
			  StrLCD(s+4);
			}
			if(i==13)
			{
				CmdLCD(GOTO_LINE1_POS0);
			 StrLCD(s+3);
			}
			if(i==14)
			{
				CmdLCD(GOTO_LINE1_POS0);
			 StrLCD(s+2);
			}
			if(i==15)
			{
				CmdLCD(GOTO_LINE1_POS0);
			 StrLCD(s+1);
			}
			Delay_ms(500);
				CmdLCD(0x01);
				
		}
		
	}
}

