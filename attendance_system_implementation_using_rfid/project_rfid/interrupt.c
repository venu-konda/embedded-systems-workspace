#include<LPC21xx.h>
#include<stdlib.h>
#include "types.h"
#include "delay.h"
#include "pin_function_defines.h"
#include "defines.h"
#include "kpm.h"
#include "lcd.h"

u32 readnum(void);
void eint1_isr(void) __irq
{
		CmdLCD(0x01);
		IOCLR1=0XFF<<16;
        Initkpm();
	//	StrLCD("enter");
      //  delay_ms(100);
		//CmdLCD(0x01);
		StrLCD("enter HOURS");
        HOUR=readnum();
        while(ColScan() == 0);
		CmdLCD(0x01);
		StrLCD("hour:");
		U32LCD(HOUR);
		delay_ms(500);
		CmdLCD(0x01);
		StrLCD("enter MIN");
        MIN=readnum();
        while(ColScan() == 0);
		CmdLCD(0x01);
		StrLCD("minute:");
		U32LCD(MIN);
		delay_ms(500);
		CmdLCD(0x01);
		StrLCD("enter SEC");
        SEC=readnum();
        while(ColScan() == 0);
		CmdLCD(0x01);
		StrLCD("seconds:");
		U32LCD(SEC);
				delay_ms(500);

		CmdLCD(0x01);
		StrLCD("enter date");
        DOM=readnum();
        while(ColScan() == 0);
		CmdLCD(0x01);
		CharLCD('D');
		U32LCD(DOM);
				delay_ms(500);

		CmdLCD(0x01);
		StrLCD("enter month");
        MONTH=readnum();
        while(ColScan() == 0);
		CmdLCD(0x01);
		StrLCD("month:");
		U32LCD(MONTH);
				delay_ms(500);

		CmdLCD(0x01);
		StrLCD("enter year");
        YEAR=readnum();
        while(ColScan() == 0);
		CmdLCD(0x01);
		StrLCD("year:");
		U32LCD(YEAR);
				delay_ms(500); 
		CmdLCD(0x01);
		/*
		HOUR=22;
		MIN=22;
		SEC=22;*/
      //  VICIntEnClr=1<<16;
        EXTINT=1<<2;
        VICVectAddr=0;
}
u32 readnum()
{
        int sum=0,n;
        while(1)
        {
               n=KeyScan();
                while(ColScan()==0);
                delay_ms(100);
                if(n<10)
                {
					CmdLCD(0x01);
					U32LCD(n);
                        sum=(sum*10)+n;
                }
                else
                {
                        break;
                }
        } 
	/*	while((n=KeyScan())<=9)
		{
			CmdLCD(0x01);
			U32LCD(n);
			sum=(sum*10)+n;
		}  */
			
			CmdLCD(0x01);
			//U32LCD(sum);
        return sum;
}
void Enable_EINT0(void)
{
        CFGPIN(PINSEL0,7,3);
        //VICIntSelect=0;
        VICIntEnable=1<<16;
        VICVectCntl1=0x20|16;
        VICVectAddr1=(u32)eint1_isr;
        EXTINT=1<<2;
        EXTMODE=1<<2;
        //EXTPOLAR=0;
}

