#include <stdio.h>

int main()
{
	int p1, p2,a;
	int i=0x12345678;
	printf("enter the p1:\n");
	scanf("%d",&p1);
	printf("enter the p2:\n");
	scanf("%d",&p2);
	printf("before swapping : %x\n",i);
//	printf("%x\n",(0xF<<(p1*4)));
//	printf("%x\n",(15<<(p2*4)));
//	printf("%x\n",(0xF<<(p1*4))|(15<<(p2*4)));
//	printf("%x\n",~((0xF<<(p1*4))|(15<<(p2*4))));
	printf("%x\n",i&~((0xF<<(p1*4))|(15<<(p2*4))));
//	printf("%x\n",i>>(p1*4));
//	printf("%x\n",i>>(p1*4)&15);
	printf("%x\n",(i>>(p1*4)&15)<<(p2*4));
//	printf("%x\n",i>>(p2*4));
//	printf("%x\n",(i>>(p2*4))&15);
	printf("%x\n",((i>>(p2*4))&15)<< p1*4);
	a=(i&~((0xF<<(p1*4))|(15<<(p2*4))))|((i>>(p1*4)&15)<<(p2*4))|(((i>>(p2*4))&15)<< p1*4);
	printf("after swap: %x\n",a);
}
