#include <LPC21xx.h>
#include "lcd.h"
#include "lcd_defines.h"
#include "types.h"
#include "delay.h"
#include "defines.h"
int main()
{
	int i,j,count;
		InitLCD();
	while(1)
	{ CmdLCD(GOTO_LINE1_POS0);
	StrLCD("vector");
	Delay_ms(500);

//	Delay_ms(500);
	CmdLCD(GOTO_LINE2_POS0);
	  	StrLCD("v23he7");
		Delay_ms(800);
	CmdLCD(GOTO_LINE1_POS0);
	//CmdLCD(CLEAR_LCD);
	StrLCD("                     ");
		CmdLCD(GOTO_LINE2_POS0);
		///CmdLCD(CLEAR_LCD);
	StrLCD("                     ");
		Delay_ms(200);
	
	//StrLCD("      ");


	for(i=2;i<20;i++)
	{
	count=0;	
		for(j=2;j<i;j++)
	   {
	   	if(i%j==0)
		count++;
	   }
	   if(count==0)
	   {
	   U32LCD(i);
	   Delay_ms(500);
	   CmdLCD(CLEAR_LCD);
	   Delay_ms(500);
	   }

	}


}}
