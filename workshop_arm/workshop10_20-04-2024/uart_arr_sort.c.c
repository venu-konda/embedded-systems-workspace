#include <LPC21xx.h>
#include <stdlib.h>
#include <ctype.h>
#include "uart_defines.h"
//#define N 10

u32 arr[100],i,j,temp,N;
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
	Init_UART();
	while(1)
	{
	
		UART_puts("Enter the size of array  ");
			UART_puts("=");
    N=UART_readNum();
		UART_puts("\n\r");   
	// while(1)
	{
		for(i=0;i<N;i++)
		{
			UART_puts("Enter the element  ");
			UART_S32(i+1);
			UART_puts("=");
			arr[i]=UART_readNum();
			// UART_S32(arr[i]);
			UART_puts("\n\r");    
		}
		sort(arr,N);
			for(i=0;i<N;i++,UART_puts(","))
				UART_S32(arr[i]);
	}
		UART_puts("\n\r");
	}
}






