#include <LPC21xx.h>
#include "delay.h"
#include "defines.h"
#include "lcd_defines.h"
#include "lcd.h"
#include "types.h"
#include <string.h>
int main()
{
	int i;
	char temp;
	s8 s[20]="vector         ";
	InitLCD();
	while(1)
	{
		for(i=14;i>0;i--)
		{

				temp=s[i];
				s[i]=s[i-1];
				s[i-1]=temp;
				}
				
			StrLCD(s);
				
				Delay_ms(300);
				CmdLCD(0x01);
		
	}	

	}

