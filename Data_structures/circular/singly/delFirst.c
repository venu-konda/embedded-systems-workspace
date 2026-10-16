#include "myheader.h"
void *delFirst(STUDENT *head)
{
	STUDENT *temp=NULL,*temp1=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		if(head==head->link)
		{
			free(head);
			head=NULL;
		}
		else
		{
			temp=head;
			temp1=head;
			for(;temp->link!=head;temp=temp->link);
			head=head->link;
			temp->link=head;
			free(temp1);
		}
	}
	return head;
}
