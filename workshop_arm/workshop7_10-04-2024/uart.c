//uart.c
#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "uart_defines.h"
void InitUART(void)
{
	PINSEL0=0x05;
//	U0LCR=1<<DLAB_BIT|WORD_LEN;//0x83
	U0LCR=0x83;
  //cfg baudrate generator
	U0DLM=LOADVAL>>8;
	U0DLL=LOADVAL;
	//disable dlab bit
	CLRBIT(U0LCR,DLAB_BIT);
}

void UART_Tx(u8 sByte)
{
	//place byte into trasmit buffer
	U0THR=sByte;
	//wait until transmission completion status
	while(READBIT(U0LSR,TEMT_BIT)==0);
}

u8 UART_Rx(void)
{
	//wait until reception completion status
	while(READBIT(U0LSR,RDR_BIT)==0);
	//read & return recv data from recv buffer
	return U0RBR;
}

void UART_puts(s8 *s)
{
	while(*s)
		UART_Tx(*s++);
}

s8 * UART_gets(void)
{
	s32 i=0;
  static s8 a[100];
	while(1)
	{
		a[i]=UART_Rx();
		UART_Tx(a[i]);
		if((a[i]=='\r') || (a[i]=='\n'))
		{
			break;
		}
		i++;
	}
	a[i]='\0';
	return a;
}
void U32LCD(u32 n)
{
	 s32 i=0;   u8 a[10];
	 if(n==0)
		 UART_Tx('0');
	 else
	 {
		 while(n>0)
		 {
			 a[i++]=(n%10)+48;
			 n/=10;
		 }
		 for(--i;i>=0;i--)
		   UART_Tx(a[i]);
	 }
}

void S32LCD(s32 n)
{
	if(n<0)
	{
		UART_Tx('-');
		n=-n;
	}
	U32LCD(n);
}

void F32LCD(f32 f,u8 nDP)
{
	u32 n,i;
	if(f<0.0)
	{
		UART_Tx('-');
		f=-f;
	}
	n=f;
	U32LCD(n);
	UART_Tx('.');
	for(i=0;i<nDP;i++)
	{
		f=(f-n)*10;
		n=f;
		UART_Tx(n+48);
	}
}

void BinLCD(u32 n,u8 nBD)
{
  s32 i;
	for(i=nBD;i>=0;i--)
	{
		UART_Tx(((n>>i)&1)+48);
	}
}	

void HexLCD(u32 n)
{
   s32 i=0;   u8 a[8],t;
	 if(n==0)
		 UART_Tx('0');
	 else
	 {
		 while(n>0)
		 {
			 ((t=(n%16))<10)? (t=t+48): (t=(t-10)+'A');
			 a[i++]=t;
			 n/=16;
		 }
		 for(--i;i>=0;i--)
		   UART_Tx(a[i]);
	 }
}	
void OctLCD(u32 n)
{
	
   s32 i=0;   u8 a[11],t;
	 if(n==0)
		 UART_Tx('0');
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
		   UART_Tx(a[i]);
	 }
}

