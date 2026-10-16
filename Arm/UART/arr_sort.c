#include <LPC21xx.h>
#include <stdlib.h>
#include <ctype.h>
#include "uart.h"
#define N 10

u32 arr[N],i,j,temp;
void delay_ms(u32 dlyms)
{
	for(dlyms*=12000;dlyms>0;dlyms--);
}


void sort(u32 *p,int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}

int main()
{
	InitUART();

	// while(1)
	{
		for(i=0;i<N;i++)
		{
			UART_puts("Enter the element  ");
			UART_S32(i+1);
			UART_puts("=");
			arr[i]=atoi((const char *)UART_gets());
			// UART_S32(arr[i]);
			UART_puts("\n\r");    
		}
		sort(arr,N);
	}
	while(1);
}






