#include<stdio.h>
int main()
{
	int d,p1,p2;
	scanf("%d %d %d",&d,&p1,&p2);
	d=((d&~((1<<p1)|(1<<p2))))|
		((d>>p1&1)<<p2)|
		((d>>p2&1)<<p1);
	printf("%d",d);
}
