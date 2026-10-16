#include<stdio.h>
int main()
{
	int data,bit,count=0;
	printf("enter any integer data=");
	scanf("%d",&data);
	bit=31;
	while(bit>=0)
	{
		if((data>>bit)&1)
			{
				count++;
			}
		--bit;
	}
	printf("total number of set bits=%d",count);
}


