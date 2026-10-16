#include "myheader.h"
void *addSort(STUDENT *head)
{
	STUDENT *temp=NULL,*prev=NULL,*newnode=NULL;
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
		if(head==NULL||(head->id>newnode->id))
		{
			newnode->link=head;
			head=newnode;
		}
		else
		{
			prev=head;
			temp=head->link;
			while((temp) && (newnode->id > temp->id))
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=newnode;
			newnode->link=temp;
		}
	}
	return head;
}
