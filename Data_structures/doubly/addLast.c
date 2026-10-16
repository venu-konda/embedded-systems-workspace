#include "myheader.h"
STUDENT *addLast(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
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
		iscanf("%f",&newnode->marks);
		if(head==NULL)
			head=newnode;
		else
		{
			temp=head;
			for(temp;temp->link;temp=temp->link);
			temp->link=newnode;
			newnode->prev=temp;
		}
	}
	return head;
}
