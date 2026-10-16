#include "myheader.h"
int main()
{
	STUDENT *head=NULL;
	char choice;
	while(1)
	{
		printf("A=addFirst  P=print  D=delete  E=Exit\n");
		__fpurge(stdin);
		printf("enter the choice::");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A':head=addSort(head);break;
			case 'D':head=del(head);break;
			case 'P':print(head);break;
			case 'E':exit(0);
		}
	}
}
