/*main.c: Very simple program to test the serial port. Expects the port to be looped back to itself */

#include<unistd.h>
#include<errno.h>
#include<stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>

#include "uart.h"
char s[100];
int i;
int main ()
{
	int fd ;
	char tx,rx ;

	puts("Opening serial port\n");

	if ((fd = serialOpen ("/dev/ttyUSB0",9600)) < 0)
	{

		fprintf (stderr, "Unable to open serial device: %s\n", strerror (errno)) ;
		return 1 ;
	}

	puts("serial port is opened\n");

	usleep(1000000);
	while(1)
	{

		rx=serialGetchar(fd);
		if(rx=='\0')
			break;
		s[i++]=rx;

	}
	s[i]='\0';

//	printf ("recvd : %s\n",s) ;
	usleep(1000000);
	//	system("clear");


	WriteToFile(s);
	printf("\n");
	serialClose(fd);
	puts("Closing serial port\n");
	//	printf ("recvd : %s\n",s) ;
	return 0 ;
}


