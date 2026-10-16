#include<stdio.h>
#include<signal.h>
int main()
{
int i=1000000000;
while(i--);
	raise(2);
}
