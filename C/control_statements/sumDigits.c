#include<stdio.h>
int main()
{
	int data,r,sum=0;
	scanf("%d",&data);
	while(data)
	{
		r=data%10;
		sum+=r;
		data/=10;
	}
	printf("%d",sum);
}
