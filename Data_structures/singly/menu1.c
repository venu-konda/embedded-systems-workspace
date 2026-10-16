#include "myheader.h"
int main()
{
	STUDENT *head=NULL;
	char choice;
	while(1)
	{
		printf("A=addLast   N=nth node   L=nth from last   P=Print  p=primeprint  E=exit   d=delAll \n");
		__fpurge(stdin);
		printf("enter the choice::");
		scanf("%c",&choice);
		switch(choice)
		{
		//	case 'A':head=addSort(head);break;
			case 'A':head=AddLast(head);break;
			case 'P':print(head);break;
			case 'N':node(head);break;
			case 'L':nodeLast(head);break;
			case 'p':primePrint(head);break;
			case 'E':exit(0);
		//	case 'C':printf("nodes count=%d\n",countNodes(head));break;
		//	case 'D':head=delFirst(head);break;
			case 'd':head=delAll(head);break;
		//	case 'd':head=DelLast(head);break;
		//	case 'M':findMedian(head);break;
		}
	}
}
