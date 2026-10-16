#include<stdio.h>
int main()
{
	short int n;
	scanf("%hx",&n);
	printf("%x\n",(n&0xFF00)>>8);
	printf("%x\n",(n&0x00FF)<<8);
	n=((n>>8)&0x00FF)|((n<<8)&0xff00)|(n&0x0000);
	printf("%x",n);
}

