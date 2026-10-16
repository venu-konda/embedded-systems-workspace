#include "myheader.h"
STUDENT *delLast(STUDENT *head)
{
	STUDENT *temp;
	if(head==NULL)
		printf("list is empty\n");
	else if(head->link==NULL)
	{
		temp=head;
		head=NULL;
		free(temp);
	}
	else
	{
		temp=head;
		for(;temp->link;temp=temp->link);
		temp->prev->link=NULL;
		free(temp);
	}
	return head;
}
