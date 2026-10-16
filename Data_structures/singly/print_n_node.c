#include "myheader.h"
void node(STUDENT *head)
{
	int n,i=1;
	printf("enter the node to print::");
	scanf("%d",&n);
	if(n>countNodes(head))
		printf("invalid node printing\n");
	else
	{
	for(;head;head=head->link,i++)
		if(i==n)
		 printf("%4d %15s %10f\n",head->id,head->name,head->marks);
	
	}
}
