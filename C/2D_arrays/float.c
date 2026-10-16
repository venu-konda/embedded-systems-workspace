#include<stdio.h>
int main()
{
	double f=12.3;
	long long int *p=&f;
	for(int i=31;i>=0;i--)
	{
		printf("%d ",(*p>>i)&1);
	}
}
