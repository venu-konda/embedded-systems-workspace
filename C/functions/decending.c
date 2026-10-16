#include<stdio.h>
int decending(int);
int main()
{
	int data;
	scanf("%d",&data);
	decending(data);
}
int decending(int var)
{
	int i,rem,high=9;
	while(1)
	{
	for(i=var;i;i/=10)
	{
		rem=i%10;
		if(rem==high) 
			printf("%d ",rem);
	}
		high==high-1;
		if(high==-1)break;
	}
}
