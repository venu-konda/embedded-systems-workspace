#include<stdio.h>
int main()
{
	int a,b,n,A;
	scanf("%d",&n);
	for(a=-n;a<=n;a++,printf("\n"))
	{
		A=(a<0)?-a:a;
		for(b=1;b<=(n+1-A);b++)
		{
		//	if(b<(n+1-A))
		//	{
				printf("*");
		//	}else
		//	{
		//		printf(" ");}
		}
	}
}

