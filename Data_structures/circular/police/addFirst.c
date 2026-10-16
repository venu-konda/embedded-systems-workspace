#include "myheader.h"
STUDENT *addFirst(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		printf("enter the data::");
		scanf("%d",&newnode->id);

		if(head==NULL)
		{
			head=newnode;
			newnode->link=newnode;
		}
		else
		{
			temp=head->link;
			for(;temp->link!=head;temp=temp->link);
			newnode->link=head;
			head=newnode;
			temp->link=head;
		}
	}
	return head;
}
