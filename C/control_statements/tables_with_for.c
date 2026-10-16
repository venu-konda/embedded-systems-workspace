#include<stdio.h>
int main()
{
	int a,b=0;
	printf("enter the table do you want to print=");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
	{
	printf("%dX%d=%d\n",a,b,a*b);
	}	
}

