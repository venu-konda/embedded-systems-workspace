#include "myheader.h"
int main()
{
	STUDENT *head=NULL;
	char choice;
	while(1)
	{
		printf("\nA=AddLast  P=Print E=exit S=red blue \n");
		__fpurge(stdin);
		printf("enter the choice::");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A':head=addFirst(head);break;
			case 'P':print(head);break;
			case 'E':exit(0);
			case 'S':redBlue(head);break;
		}
	}
}
