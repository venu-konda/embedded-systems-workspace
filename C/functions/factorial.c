#include<stdio.h>
int fact(int);
int main()
{
	int data;
	scanf("%d",&data);
	printf("%d",fact(data));
}
int fact(int num)
{
	if(num!=0)
		return (num*fact(num-1));
	else
	return 1;
}
