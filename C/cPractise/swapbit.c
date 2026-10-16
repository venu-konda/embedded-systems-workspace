#include<stdio.h>
int main()
{
	int data,i,pos1,pos2;
	scanf("%d",&data);
	scanf("%d%d",&pos1,&pos2);
	for(i=31;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
	/*data=((data&~((1<<pos1)|(1<<pos2)))|
			((data&(1<<pos1))<<pos2)|
			((data&(1<<pos2))<<pos1));*/
	data=((data&~((1<<pos1)|(1<<pos2)))|
			(((data>>pos1&1)<<pos2))|
			((data>>pos2&1)<<pos1));
	printf("%d \n",data);
	for(i=31;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}
