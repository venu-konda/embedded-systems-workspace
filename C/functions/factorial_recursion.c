#include<stdio.h>
int factorial(int);
int fact=1;
int main()
{
	int data;
	scanf("%d",&data);
	printf("%d",factorial(data));
}
int factorial(int data)
{
	if(data==1)
	return 1;
	else
		return data*factorial(data-1);
}
