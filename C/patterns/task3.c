#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
	{
		for(b=1;b<=n;b++)
		{
			if(b<a)
			{
				printf(" ");
			}
			else
			{
				printf("%c",b+64);
			}
		}
	}

}
