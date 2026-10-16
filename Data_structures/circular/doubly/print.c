#include "myheader.h"
void print(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		STUDENT *temp=head;
		do
		{
			printf("%5d %10s %6f\n",temp->id,temp->name,temp->marks);
			temp=temp->link;
		}while(temp!=head);
	}
}
