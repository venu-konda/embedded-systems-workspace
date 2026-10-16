#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter n number of lines do you want to print=");
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",a);
		}
	}
}
