#include "myheader.h"
STUDENT *addFirst(STUDENT *head)
{
	STUDENT *newnode=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
		printf("node not created");
	else
	{
		printf("enter the id\n");
		scanf("%d",&newnode->id);

		newnode->link=head;
		head=newnode;
	}
	return head;
}
