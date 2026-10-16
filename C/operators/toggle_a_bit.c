#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter any data=");
	scanf("%d",&data);
first:
	printf("enter any bit=");
	scanf("%d",&bit);
	if((bit>=0)&&(bit<sizeof(int)*8))
	{
	printf("%d",(data^(1<<bit)));
	}
	else
	{
		printf("error \n");
		goto first;
			}
}


