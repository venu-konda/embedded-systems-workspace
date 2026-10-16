#include "myheader.h"
STUDENT *addLast(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		printf("enter the id\n");
		scanf("%d",&newnode->id);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);
		if(head==NULL)
			head=newnode;
		else
		{
			for(temp=head;temp->link;temp=temp->link);
			temp->link=newnode;
		}
	}
	return head;
}
