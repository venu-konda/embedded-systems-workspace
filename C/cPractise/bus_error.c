#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	for(;;p+=100);
	{
		printf("\b\b");
	}
}
