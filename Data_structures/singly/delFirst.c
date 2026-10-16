#include "myheader.h"
STUDENT *delFirst(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty");
	else
	{
		STUDENT *temp=head;
		head=head->link;
		free(temp);
	}
	return head;

}
