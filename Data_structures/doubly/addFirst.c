#include "myheader.h"

STUDENT *addFirst(STUDENT *head)
{
	STUDENT *newnode=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
		printf("node not created");
	else
	{
		printf("enter the id::");
		scanf("%d",&newnode->id);
		printf("enter the name::");
		scanf("%s",newnode->name);
		printf("enter the marks::");
		scanf("%f",&newnode->marks);
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			newnode->link=head;
			head->prev=newnode;
			head=newnode;
		}
	}
	return head;
}
