#include<stdio.h>
int main()
{
	int data;
	int bit;
	printf("enter any data=");
	scanf("%d",&data);
venu:
	printf("enter any bit=");
	scanf("%d",&bit);
	if((bit>=0)&&(bit<(sizeof(int)*8)))
	{
	//if(data&(1<<bit))
	if((data>>bit)&1)
	{
		printf("the given data is it is set bit");
	}
	else
	{
		printf("the given data is clear bit");
	}}
	else
	{
	printf("error:i cannot do the opeeration\n");
	goto venu;
	}
}



