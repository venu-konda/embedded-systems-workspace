#include<stdio.h>
int main()
{
	int data,bit,count=0;
	printf("enter any integer=");
	scanf("%d",&data);
	bit=31;
count:
	if(bit>=0)
	{
       if(((data>>bit)&1)&&((data>>(bit-1)&1)))
       {
	       count++;
       }
       --bit;
       --bit;
       goto count;
	}
       printf("pair of set bits=%d",count);
}

