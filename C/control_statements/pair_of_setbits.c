#include<stdio.h>
int main()
{
	int data,bit=31,count=0;
	printf("enter any integer=");
	scanf("%d",&data);
	while(bit>=0)
	{
		if((data>>bit&&1)&&((data>>(bit-1)&1)))
		{
			count++;
		}
		--bit;
		--bit;
	}
	printf("pair of set bits=%d",count);
}

