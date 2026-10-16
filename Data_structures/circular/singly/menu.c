#include "myheader.h"
int main()
{
	STUDENT *head=NULL;
	char choice;
	while(1)
	{
		printf("A=add  P=print  E=exit  D=del\n");
		printf("enter the choice::");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A':head=addFirst(head);break;
			case 'D':head=delLast(head);break;
			case 'P':print(head);break;
			case 'E':exit(0);
		}
	}
}
