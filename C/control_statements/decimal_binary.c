#include<stdio.h>
int main()
{
	int data,bit=sizeof(int)*8-1;
	printf("enter any integer data=");
	scanf("%d",&data);
	while(bit>=0)
	{
		printf("%d",((data>>bit)&1));
				if(bit%8==0)printf("  ");
				--bit;
	}

}
