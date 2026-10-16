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

main()
{
        InitUART();

        while(1)
        {
                //UART_puts("Enter\n\r");
                //op1=UART_Rx();
                p1=atoi((const char *)UART_gets());
                //UART_puts("op1=\n\r"); 
                 //UART_Tx(p1);
                // UART_puts("\n");


                op=UART_Rx();
                //UART_puts("op=\n\r"); 
                UART_Tx(op);
                //UART_puts("\n");

                //op2=UART_Rx();
                p2=atoi((const char *)UART_gets());
                //UART_puts("op2=\n\r"); 
                //UART_Tx(p2);
                //UART_puts("\n");

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
        //      r2=r+48;
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

