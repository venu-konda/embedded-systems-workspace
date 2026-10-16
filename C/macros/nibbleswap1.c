#include<stdio.h>
int main()
{
	int d=0x12345678;
	int p1,p2;
	scanf("%d %d",&p1,&p2);
	d=(d&~((15<<(p1*4))|(15<<(p2*4))))
		|((d>>(p1*4)&15)<<(p2*4))
		|((d>>(p2*4)&15)<<(p1*4));
	printf("%x",d);
}
