#include<stdio.h>
int main()
{
	int data,i,pos1,pos2;
	scanf("%x%d%d",&data,&pos1,&pos2);
	for(i=31;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
		if(i%8==0)
			printf(" ");
	}
	data=((data&~((3<<(pos1*2))|(3<<(pos2*2))))|
			((((data>>(pos1*2))&3)<<(pos2*2)))|
			(((data>>(pos2*2))&3)<<(pos1*2)));
	printf("\ndata=%x\n",data);
	for(i=31;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
		if(i%8==0)
			printf(" ");
	}
}
