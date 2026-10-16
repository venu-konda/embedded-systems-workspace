#include<stdio.h>
int main()
{
	int data,bit,temp=0,i,count=0,num;
	scanf("%d",&data);
	for(bit=31;bit>=0;bit--);
	{
		if((data>>bit)&1)
		{
			count++;
			if(temp<=count)
			{
				temp=count;
			}
		else
		{
			count=0;
		}
		}
		printf("%d",temp);
	}
}
