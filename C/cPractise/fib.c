#include<stdio.h>
#include<stdio_ext.h>
int fib(int data)
{
	if(data==0)
		return 0;
	else if(data==1)
		return 1;
	else if(data==2)
		return 2;
	else
	{
		return ((fib(data-1))+(fib(data-2)));
	}

}

int main()
{
	int data,min,max,i=1;
	//	scanf("%d\n",&data);
	__fpurge(stdin);
	//	printf("%d",data);
	scanf("%d %d",&min,&max);
	for(i=0;;i++)
	{
		int ret=fib(i);
		if(ret>=min&&ret<=max)
			printf("%d,",ret);
		else if(ret>max)
			break;
	}
//	printf("%d\n",fib(min));
}
