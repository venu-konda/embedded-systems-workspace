#include "myheader.h"
STUDENT *addFirst(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
		printf("node not created\n");
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
			newnode->link=head;
			newnode->prev=head;
		}
		else
		{
			newnode->link=head;
			temp=head;
			for(;temp->link!=head;temp=temp->link);
			temp->link=newnode;
			head=newnode;

		}

	}
	return head;
}
