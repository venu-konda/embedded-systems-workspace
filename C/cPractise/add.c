#include<stdio.h>
int main()
{
	int data,a,b,c;
	scanf("%d %d",&a,&b);
	c=printf("%*c%*c",a,'\r',b,'\r');
	printf("%d",c);
}
