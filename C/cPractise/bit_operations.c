#include<stdio.h>
//#include<unistd.h>
#include<stdio_ext.h>
#include<stdlib.h>
void print(int data)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}
int main()
{
	int data,i,choice,pos,a;
	while(1)
	{
		__fpurge(stdin);
		printf("enter data:");
		scanf("%d",&data);
		printf("enter pos:");
		scanf("%d",&pos);
		printf("1.set  2.clear 3.toggle  4.status  5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:print(data);
			       data=(data|(1<<pos));
			       printf("data=%d\n",data);
			       print(data);
			       break;
			case 2:print(data);
			       data=(data&~(1<<pos));
			       printf("data=%d\n",data);
			       print(data);
			       break;
			case 3:print(data);
			       data=(data^(1<<pos));
			       printf("data=%d\n",data);
			       print(data);
			       break;
			case 4:print(data);
			       a=(data&(1<<pos));
			       printf("data=%d\n",a);
			       break;
			case 5:exit(0);
		}
	}
}
