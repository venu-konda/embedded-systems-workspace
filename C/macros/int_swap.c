#include<stdio.h>
int main()
{
	long long int data=0x12345678;
	int pos1,pos2;
	scanf("%d %d",&pos1,&pos2);
	data=((data&~((0xffffffff<<(pos1*32))|(0xffffffff<<(pos2*32))))|
			((data>>(pos1*32)&0xffffffff)<<(pos2*32))|
			((data>>(pos2*32)&0xffffffff)<<(pos1*32)));
	printf("%d",data);
}
