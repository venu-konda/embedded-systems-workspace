#include "myheader.h"
void print(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty\n");
	for(head;head;head=head->link)
		printf("%4d ",head->id);
}
