#include "myheader.h"
STUDENT *DelLast(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty");
	else
	{
	STUDENT *prev,*temp;
	temp=head;
		while(temp->link)
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=NULL;
		free(temp);
	}
	return head;
}
