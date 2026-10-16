#include "myheader.h"
void print(STUDENT *head)
{
	STUDENT *temp=NULL;
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		temp=head;
		do
		{
			printf("%4d %10s %6f\n",temp->id,temp->name,temp->marks);
			temp=temp->link;
		}while(temp!=head);
	}
}
