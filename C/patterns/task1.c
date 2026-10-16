#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
	{
		for(b=n;b>=a;b--)
		{
			printf("%d",(a+b)%2);
		}
	}

}
