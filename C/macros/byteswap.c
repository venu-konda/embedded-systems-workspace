#include<stdio.h>
int main()
{
	int d=0x12345678;
	int p1,p2;
	scanf("%d %d",&p1,&p2);
	d=(d&~((255<<(p1*8))|(255<<(p2*8))))
		|((d>>(p1*8)&255)<<(p2*8))
		|((d>>(p2*8)&255)<<(p1*8));
	printf("%x",d);
}
