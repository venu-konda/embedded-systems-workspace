#include <LPC21xx.h>
#include "delay.h"
#define SPIN_AH 0
#define EPIN_AH 3
#define SPIN_AL 4
#define EPIN_AL 7
#define SPRIME 50
int prime_check(int data)
{
int i,count=0;
	if(data==0||data==1)
	{
	return 0;
	}
	for(i=2;i<data;i++)
	{
		if(data%i==0)
		{
			count++;
		}
	}
	if(count==0||data==2)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int check_palindrome(int data)
{
	int i,rev=0;
	for(i=data;i;i/=10)
	{
		rev=(rev*10)+(i%10);
	}
	if(data==rev)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
int main()
{
   int i,count=0;
   IODIR0|=0xFF<<SPIN_AH;
   Delay_s(1);
   for(i=SPRIME;count<5;i++)
   {
   	IOSET0=0xF<<SPIN_AL;
	Delay_s(1);
   		if(prime_check(i))
		{
			count++;
		//	if(check_palindrome(i))
			{
			IOPIN0^=i;
		
			Delay_s(5);
			IOPIN0^=i;
			}
		}
   }
   
}
