#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
}
int fib(int data)
{
	if(data==1)
		return 0;
	if(data==2)
		return 1;
	else
		return (fib(data-1)+fib(data-2));
}
