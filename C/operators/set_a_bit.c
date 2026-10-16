#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter any data=");
	scanf("%d",&data);
	printf("enter any bit=");
	scanf("%d",&bit);
	printf("%d",(data|(1<<bit)));
}
