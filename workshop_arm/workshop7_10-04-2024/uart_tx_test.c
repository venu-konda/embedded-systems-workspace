//uart_tx_test.c
#include "uart.h"
#include "delay.h"
#include "kpm.h"
u8 keyV;
main()
{
	InitKPM();
	InitUART();
	while(1)
	{
	   	//Delay_ms(100);
		keyV=KeyScan();
		UART_Tx(keyV);
		while(ColScan()==0);
		Delay_ms(100);
			}
}

