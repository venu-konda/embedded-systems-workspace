#include<stdio.h>
int main()
{
	int data,bit,count=0;
	printf("enter any integer data=");
	scanf("%d",&data);
	bit=sizeof(int)*8-1;
SETPAIRS:
	 printf("%d",((data>>bit)&1));
	if(bit>=0)
	{
		if(((data>>bit)&1)&&(data>>(bit-1)&1))
		{

			count++;
		}
		--bit;
		goto SETPAIRS;
	}
	printf("\n pair of set bit=%d",count);
}

