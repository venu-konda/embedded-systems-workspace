
#include "delay.h"
//#include "uart.h"
#include <ctype.h>
#include <stdlib.h>
s8 *ope1,*ope2;
s8 ch;
int op1,op2,sum;
int main()
{
	InitUART();
	while(1)
	{
		ope1=UART_gets();
		
		Delay_ms(100);
		op1=atoi((const char *)ope1);
		UART_S32(op1);
		ch=UART_Rx();
		UART_Tx(ch);
		Delay_ms(100);
		ope2=UART_gets();
		Delay_ms(100);
		op2=atoi((const char *)ope2);
		UART_S32(op2);
		switch(ch)
		{
			case '+':sum=op1+op2;break;
			case '-':sum=op1-op2;break;
			case '*':sum=op1*op2;break;
			case '/':sum=op1/op2;break;
			case '%':sum=op1%op2;break;	
		}
		while(UART_Rx()!='=');
			UART_Tx('\n');
			UART_S32(sum);
		}
}

