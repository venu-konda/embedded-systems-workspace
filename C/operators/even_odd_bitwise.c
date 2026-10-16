#include<stdio.h>
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	((a&(1<<0))==0)?printf("it is a even number"):printf("it is a odd number");
}
