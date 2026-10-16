#include<stdio.h>
int main()
{
	int i,count=1,a=1,n,j;
	scanf("%d",&n);
//	for(i=0,j=1;n>count;)
	for(i=0,j=1;a<=n;)
	{
		count++;
		if((i==0))
		{
		printf("%d ",i);
		}
		printf("%d ",a);
		a=i+j;
		i=j;
		j=a;
		}
}
