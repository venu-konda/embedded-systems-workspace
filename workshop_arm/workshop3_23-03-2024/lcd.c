//lcd.c
#include <LPC21xx.h>
#include "types1.h"
#include "delay.h"
#include "defines1.h"
#include "lcd_defines.h"

void WriteLCD(u8 dat)
{
	//select write operation
	IOCLR1=1<<LCD_RW;
	//write data onto data pins
	//IOPIN1=(IOPIN1&~(0xff<<LCD_DATA))|(dat<<LCD_DATA);
	WRITEBYTE(IOPIN1,LCD_DATA,dat);
	//enable high
	IOSET1=1<<LCD_EN;
	Delay_us(1);
	//to low for latching
	IOCLR1=1<<LCD_EN;
	//delay for internal write cycle ops
	Delay_ms(2);
}

void CmdLCD(u8 cmd)
{
	//select cmd/instruction reg
	IOCLR1=1<<LCD_RS;
	//write to cmd/inst reg
	WriteLCD(cmd);
}

void CharLCD(u8 asciiVal)
{
  //select data reg
  IOSET1=1<<LCD_RS;
  //write to data reg & dd/cg ram for display
  WriteLCD(asciiVal);	
}	

void InitLCD(void)
{
	//cfg p1.16 to p1.26 as gpio output pins
	IODIR1=0xFF<<LCD_DATA|1<<LCD_RS
	       |1<<LCD_RW|1<<LCD_EN;
	//wait after power on
	Delay_ms(15);
	//Initialization flow/algorithm @specs
	CmdLCD(0x30);
	Delay_ms(5);
	CmdLCD(0x30);
	Delay_us(100);
	CmdLCD(0x30);
	CmdLCD(MODE_8BIT_2LINE);    //38
        CmdLCD(DSP_ON_CUR_ON);      //0E
        CmdLCD(CLEAR_LCD);          //01
        CmdLCD(SHIFT_CUR_RIGHT);    //06
}	

void StrLCD(s8 *p)
{
	while(*p)
		CharLCD(*p++);
}

void U32LCD(u32 n)
{
	 s32 i=0;   u8 a[10];
	 if(n==0)
		 CharLCD('0');
	 else
	 {
		 while(n>0)
		 {
			 a[i++]=(n%10)+48;
			 n/=10;
		 }
		 for(--i;i>=0;i--)
		   CharLCD(a[i]);
	 }
}

void S32LCD(s32 n)
{
	if(n<0)
	{
		CharLCD('-');
		n=-n;
	}
	U32LCD(n);
}

void F32LCD(f32 f,u8 nDP)
{
	u32 n,i;
	if(f<0.0)
	{
		CharLCD('-');
		f=-f;
	}
	n=f;
	U32LCD(n);
	CharLCD('.');
	for(i=0;i<nDP;i++)
	{
		f=(f-n)*10;
		n=f;
		CharLCD(n+48);
	}
}

void BinLCD(u32 n,u8 nBD)
{
  s32 i;
	for(i=nBD;i>=0;i--)
	{
		CharLCD(((n>>i)&1)+48);
	}
}	

void HexLCD(u32 n)
{
   s32 i=0;   u8 a[8],t;
	 if(n==0)
		 CharLCD('0');
	 else
	 {
		 while(n>0)
		 {
			 ((t=(n%16))<10)? (t=t+48): (t=(t-10)+'A');
			 a[i++]=t;
			 n/=16;
		 }
		 for(--i;i>=0;i--)
		   CharLCD(a[i]);
	 }
}	
void OctLCD(u32 n)
{
	
   s32 i=0;   u8 a[11],t;
	 if(n==0)
		 CharLCD('0');
	 else
	 {
		 while(n>0)
		 {
			 t=(n%8);
			 t=t+48;
			 a[i++]=t;
			 n/=8;
		 }
		 for(--i;i>=0;i--)
		   CharLCD(a[i]);
	 }
}
