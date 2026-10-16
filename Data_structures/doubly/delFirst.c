#include "myheader.h"
STUDENT *delFirst(STUDENT *head)
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
		head=head->link;
		head->prev=NULL;
	}
	return head;
}
