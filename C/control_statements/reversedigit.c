#include<stdio.h>
int main()
{
	int data,rev=0;
	scanf("%d",&data);
	while(data)
	{
		rev=rev*10+data%10;
		data/=10;
	}
	printf("%d",rev);
}
