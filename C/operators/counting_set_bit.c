#include<stdio.h>
int main()
{
	int data,bit,count=0;
	printf("enter any integer data=");
	scanf("%d",&data);
	bit=sizeof(int)*8-1;
COUNTBITS:
	if(bit>=0)
	{
	//	if(data&(1<<bit))
	if((data>>bit)&1)
		{
			count++;
		}
		bit--;
		goto COUNTBITS;
	}
	printf("%d\n",count);
}

