#include <LPC21xx.h>
#include <stdlib.h>
#include <ctype.h>
#include "uart.h"

void delay_ms(u32 dlyms)
{
        for(dlyms*=12000;dlyms>0;dlyms--);
}

u32 i,j,n,a;
main()
{
        InitUART();
		 while(1)
		 {
		UART_puts("enter the no. of lines");
		 n=atoi((const char *)UART_gets());
		UART_puts("\r\n");
		 for(i=0;i<n;i++,UART_puts("\r\n"))
		 {
		 a=0;
		 	for(j=0;j<n;j++)
			{
				if((i+j)<(n-1))
					UART_Tx(' ');
					else
					{
						if((i+j)==(n-1))
						{
							a=i+1;
							UART_U32(a);
						}
						else
							UART_U32((--a));

					}			
			}
		 }
       }
       
}

