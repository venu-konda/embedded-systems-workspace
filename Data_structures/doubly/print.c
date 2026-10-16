#include "myheader.h"

void print(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		for(;head;head=head->link)
		{
			printf("%5d %10s %6f\n",head->id,head->name,head->marks);
		}
	}
}
