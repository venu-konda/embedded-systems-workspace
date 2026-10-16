#include<stdio.h>
int main()
{
	int data,bit,count=0,counts=0,c=0;
	printf("enter any integer data=");
	scanf("%d",&data);
	bit=sizeof(int)*8-1;
	printf("decimal to binary of =%d is=",data); 
COUNTSETS:
	printf("%d",(data>>bit)&1);
	if(bit>=0)
	{
		if(bit%8==0)printf("  ");
		if((data>>bit)&1)
		{
			count++;
		}
		if(((data>>bit)&1)&&((data>>bit-1)&1))
		{
			counts++;
		}
		--bit;
//		--bit;
		goto COUNTSETS;
			
	}
	printf("\n total number of set bits=%d",count);
	printf("\n pair of set bits=%d",counts);
}
