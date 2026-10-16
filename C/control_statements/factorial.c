#include<stdio.h>
int main()
{
	long int fact=1,i,num;
	scanf("%ld",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("%ld",fact);
}
