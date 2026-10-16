#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for(a=1;a<=5;a++,printf("\n"))
		{
			for(b=1;b<=a;b++)
			  {
			printf("%c",b+64);
			}
			}
}
