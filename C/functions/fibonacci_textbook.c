#include<stdio.h>
int fib(int);
int main()
{
	int data;
	scanf("%d",&data);
	printf("%d",fib(data));
}
int fib(int data)
{
	if(data==1)
		return 0;
	if(data==2)
		return 1;
	else
		return (fib(data-1)+(fib(data-2)));
}

