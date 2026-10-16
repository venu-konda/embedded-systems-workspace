#include "myheader.h"
void *delAll(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		STUDENT *temp=NULL;
		while(head)
		{
			temp=head;
			head=head->link;
			free(temp);
		}
	}
	return head;
}
