#include<stdio.h>
int main()
{
	int a,b,n,A;
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=0;b<=n;b++)
		{
			if(b<=A)
				printf("*");
			else
				printf(" ");

		}
	}

}
