#include<stdio.h>
int main()
{
	int x=1;
	if(x==1)
	{
		printf("111\n");
		goto input;
	}
	else if(x==1)
	{
input:
		printf("111\n");
		goto input1;
	}
	else if(x==1)
	{
input1:
		printf("111\n");
		goto input2;
	}
	else
	{
input2:
		printf("111\n");
	}
}
