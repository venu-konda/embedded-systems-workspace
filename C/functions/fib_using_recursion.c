#include<stdio.h>
int i=0,j=1,count=2;
int n;
int fib(int);
int main()
{
	scanf("%d",&n);
	fib(count);
}
int fib(int count)
{
	if((n)>count)
	{
	if((i==0)&&(j==1))
	printf("%d,%d,",i,j);
	int a=i+j;
	printf("%d,",a);
	count++;
	i=j;
	j=a;
	fib(count);
	}
}


	
