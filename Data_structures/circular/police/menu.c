#include "myheader.h"
int main()
{
	int choice;
	STUDENT *head=NULL;
	while(1)
	{
		printf("\n1.add  2.print   3.soldier   4.exit\n");
		printf("enter the choice::");
		__fpurge(stdin);
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=addFirst(head);break;
			case 2:print(head);break;
			case 3:head=soldier(head);break;
			case 4:exit(0);
		}
	}
}
