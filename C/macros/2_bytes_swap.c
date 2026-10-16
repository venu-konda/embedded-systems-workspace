#include<stdio.h>
int main()
{
unsigned long long int d=0x12345678abcd;
	int p1,p2;
	scanf("%d %d",&p1,&p2);
	printf("%llx\n",d);
	d=(d&~((65535<<(p1*16))|(65535<<(p2*16))))|
		((d>>(p1*16)&65535)<<(p2*16))|
		((d>>(p2*16)&65535)<<(p1*16));
	printf("%llx",d);
}

