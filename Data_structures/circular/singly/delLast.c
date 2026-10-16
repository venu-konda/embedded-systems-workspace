#include "myheader.h"
void *delLast(STUDENT *head)
{
	STUDENT *temp=NULL,*prev=NULL;
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		if(head->link==head)
		{
			free(head);
			head=NULL;
		}
		else
		{
			temp=head;
			for(;temp->link!=head;temp=temp->link)
			{
				prev=temp;
			}
			free(temp);
			prev->link=head;
		}
	}
	return head;
}
