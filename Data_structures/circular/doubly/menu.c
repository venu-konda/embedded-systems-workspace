#include "myheader.h"
int main()
{
	int choice;
	STUDENT *head=NULL;
	while(1)
	{
		printf("1.add  2.print   3.del   4.exit\n");
		printf("enter your choice::");
		__fpurge(stdin);
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=addFirst(head);break;
			case 2:print(head);break;
		//	case 3:head=delFirst(head);break;
			case 4:exit(0);
		}
	}
}
