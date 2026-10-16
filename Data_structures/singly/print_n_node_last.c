#include "myheader.h"
void nodeLast(STUDENT *head)
{
	int n,i=0,count;
	printf("enter the n node from last::");
	scanf("%d",&n);
	if(n>countNodes(head))
		printf("invalid node printing\n");
	else
	{
		count=countNodes(head);
		for(;head;head=head->link,i++)
			if(count-i==n)
				printf("%4d %15s %10f\n",head->id,head->name,head->marks);
	}
}
