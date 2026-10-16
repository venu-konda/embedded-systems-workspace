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
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);


		newnode->link=head;
		head=newnode;

	}
	return head;
}
