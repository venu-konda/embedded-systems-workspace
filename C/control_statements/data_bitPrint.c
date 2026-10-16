#include<stdio.h>
#include<stdio_ext.h>
void PrintMenu(void);
int main()
{
	int data,bit,b;
	char choice;
	int flag=0,left,right;
	while(1)
	{
		PrintMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		{
		if(choice=='i');
		if(flag==0)
		{
			printf("no data supplied \n");
			choice='i';
		}}
		if((choice=='s')||(choice=='S'))
			data|=1<<bit;
		else if((choice=='c')||(choice=='C'))
			data&=~(1<<bit);
		else if((choice=='m')||(choice=='M'))
			data^=1<<bit;
		else if((choice=='p')||(choice=='P'))
		{
			printf("data=%d   bit position=%d\n",data,bit);
			printf("binary equation of data::");
			for(bit=31;bit>=0;b++)
				printf("%d",(data>>bit)&1);
			}
		else if((choice=='r')||(choice=='R'))
		{
			for(left=31,right=0;left>right;left--,right++)
			{
				if(((data>>left)&1)!=((data>>right)&1))
				{
					data^=(1<left);
					data^=(1<<right);
				}
			}
		}
		else if((choice=='i')||(choice=='I'))
		{
			printf("enter data:");
			scanf("%d",&data);
			printf("enter bit:");
			scanf("%d",&bit);
			flag=1;
		}
		else if((choice=='q')||(choice=='Q'))
			break;
		else
			printf("error invalid entry");
	}
}
void PrintMenu(void)
{
	printf("\n MENU\n");
	printf("s:set bit\n");
	printf("c:clear bit\n");
	printf("m:compliment bit\n");
	printf("i:input data and bit\n");
	printf("r:reverse bits\n");
	printf("p:print data\n");
	printf("q:quit\n");
	printf("enter your choice\n");


	}


