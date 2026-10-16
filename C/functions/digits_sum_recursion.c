#include<stdio.h>
int sumDigits(int);
int main()
{
	int data;
	scanf("%d",&data);
	int sum=sumDigits(data);
	printf("sum=%d",sum);
}
int sumDigits(int var)
{
	if(var/10==0)
		return 1;

	return (var%10+sumDigits(var/10));
}
