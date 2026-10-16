#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("max=%d\n",((a+b)+abs(a-b))/2);
	printf("min=%d\n",((a+b)-abs(a-b))/2);
//	printf("max=%d\n",(abs(a-b)));
}
