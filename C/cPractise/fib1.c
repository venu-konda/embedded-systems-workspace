#include<stdio.h>
#include<stdio_ext.h>
int fib(int data)
{
	if(data==1)
		return 0;
	else if(data==2)
		return 1;
	else
	{
		return ((fib(data-1))+(fib(data-2)));
	}

}

int main()
{
	int data,min,max,i=1;
	scanf("%d",&data);
	for(i=1;i<=data;i++)
	{
			printf("%d,",fib(i));
	}
}
