#include <LPC21xx.h>
#include <stdlib.h>
#include "lcd1.h"
#include "lcd_defines.h"
#include "types1.h"
#include "delay.h"
#include "defines1.h"
int main()
{
	int i,j,k,temp;
	int a[10];
		InitLCD();
		srand(k++);
		for(i=0;i<10;i++)
		{
			a[i]=(rand()%80)+10;
		}

	
	CmdLCD(GOTO_LINE1_POS0);
	StrLCD("before sorting");
	Delay_s(1);
	CmdLCD(CLEAR_LCD);
	CmdLCD(GOTO_LINE1_POS0);
	for(i=0;i<5;i++,CharLCD(' '))
	U32LCD(a[i]); 
	CmdLCD(GOTO_LINE2_POS0);
	for(i=5;i<10;i++,CharLCD(' '))
	U32LCD(a[i]);
	Delay_s(15);
	CmdLCD(CLEAR_LCD);
	CmdLCD(GOTO_LINE1_POS0);
	StrLCD("after sorting");
	Delay_s(1);
	for(i=0;i<10-1;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	Delay_s(1);
	CmdLCD(CLEAR_LCD);
	CmdLCD(GOTO_LINE1_POS0);
	for(i=0;i<5;i++,CharLCD(' '))
	U32LCD(a[i]); 
	CmdLCD(GOTO_LINE2_POS0);
	for(i=5;i<10;i++,CharLCD(' '))
	U32LCD(a[i]);
	Delay_s(15);
	CmdLCD(CLEAR_LCD);
}
