#include<stdio.h>
int fact(int data,int sum);
int main()
{
	int data,sum=1;
	scanf("%d",&data);
	int ret=fact(data,sum);
	printf("%d\n",ret);
}
int fact(int data,int sum)
{
	if(data==0)
		return sum;
	else
	{
		sum*=data;
		data--;
		return fact(data,sum);
	}
}
