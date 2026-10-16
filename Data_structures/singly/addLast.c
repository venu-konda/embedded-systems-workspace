#include "myheader.h"
STUDENT *AddLast(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("node not created");
		return head;
	}
	printf("enter the id::");
	scanf("%d",&newnode->id);
	printf("enter the name::");
	scanf("%s",newnode->name);
	printf("enter the marks::");
	scanf("%f",&newnode->marks);
	if(head==NULL)
		head=newnode;
	else
	{
		temp=head;
		while(temp->link)
			temp=temp->link;
		temp->link=newnode;
	}
	return head;

}
