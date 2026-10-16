#include "myheader.h"
STUDENT *addFirst(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp1=NULL,*temp2=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
		printf("node not created");
	else
	{
		printf("enter the id\n");
		scanf("%d",&newnode->id);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);
		if(head==NULL)
		{
			head=newnode;
			newnode->link=newnode;
		}
		else
		{
			temp1=head;
			temp2=head;
			newnode->link=head;
			head=newnode;
			for(;temp1->link!=temp2;temp1=temp1->link);
			temp1->link=head;
		}
	}	
		return head;
}
