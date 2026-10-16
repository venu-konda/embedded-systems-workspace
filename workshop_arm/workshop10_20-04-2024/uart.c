#include <LPC21xx.h>
#include "uart_defines.h"

void Init_UART(void)
{
	PINSEL0=0X05;
	U0LCR=1<<DLAB_BIT|WORD_LEN;
	U0DLM=LOADVAL>>8;
	U0DLL=LOADVAL;
	CLRBIT(U0LCR,DLAB_BIT);
}
void UART_Tx(char sByte)
{
	U0THR=sByte;
	while(READBIT(U0LSR,TEMT_BIT)==0);
}
char UART_Rx(void)
{
	while(READBIT(U0LSR,RDR_BIT)==0);
	return U0RBR; 
}
int UART_readNum(void)
{
	char s[10];
	int i=0,n=0;
	while(1)
	{
	s[i]=UART_Rx();
	if(s[i]=='\n'||s[i]=='\r')
		break;
	UART_Tx(s[i]);
		i++;
	}
	s[i]='\0';
	for(i=0;s[i];i++)
	{
	n=(n*10)+(s[i]-48);
	}
	return n;
}
void UART_puts(s8 *s)
{
	while(*s)
		UART_Tx(*s++);
}
   void UART_U32(u32 n)
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

void UART_S32(s32 n)
{
	if(n<0)
	{
		UART_Tx('-');
		n=-n;
	}
	UART_U32(n);
}




