#include <LPC21xx.h>
#include "delay.h"
#include "defines1.h"
#include "lcd_defines.h"
#include "lcd1.h"
#include "types1.h"
int main()
{
	int i;
	char temp;
	s8 s[20]="HYDERBAD        ";
	InitLCD();
	CmdLCD(0X80);

	StrLCD("HYDERBAD");
	while(1);
	while(1)
	{
	for(i=15;i>0;i--)
	{
		temp=s[i];
		s[i]=s[i-1];
		s[i-1]=temp;	
	}
	
	StrLCD(s);
	Delay_ms(200);
	CmdLCD(0X01);
	}

}
