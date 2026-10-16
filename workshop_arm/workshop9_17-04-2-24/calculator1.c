#include <LPC21xx.h>
#include <stdlib.h>
#include <ctype.h>
#include "uart.h"

void delay_ms(u32 dlyms)
{
        for(dlyms*=12000;dlyms>0;dlyms--);
}

u8 op1[10];
u8 op2[10];
u32 r,p1,p2;
u8 op,e,r2;

int main()
{
        InitUART();

        while(1)
        {
                UART_puts("Enter\n\r");
                p1=atoi((const char *)UART_gets());
               
                op=UART_Rx();
                UART_Tx(op);
                
                p2=atoi((const char *)UART_gets());

                switch(op)
                {
                        case '+': r=p1+p2;
                                                break;
                        case '-': r=p1-p2;
                                                break;
                        case '*': r=p1*p2;
                                                break;
                        case '/': r=p1/p2;
                                                break;
                }
                e=UART_Rx();
                while(e=='=')
                {
                UART_Tx('=');
                UART_S32(r);
                UART_puts("\n");
                e='a';
                }
        }
}


