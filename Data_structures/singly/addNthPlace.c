#include "myheader.h"
STUDENT *addNthPlace(STUDENT *head)
{
	int n,i,j,count;
	STUDENT *temp=NULL,*prev=NULL;
INPUT:	printf("enter the nth place to add::");
	scanf("%d",&n);
	count=countNodes(head);
	if((n<0)&&(n>count))
	{
		printf("invalid input\n");
		goto INPUT;
	}
	if(n==0)
		head=addFirst(head);
	else if(n==count)
		head=AddLast(head);
	else
	{
		STUDENT *newnode=NULL;
		newnode=calloc(1,sizeof(STUDENT));
		if(newnode==NULL)
			printf("node not created");
		else
		{
			printf("enter the id\n");
			scanf("%d",&newnode->id);
			printf("enter the name\n");
			scanf("%s",newnode->name);
			printf("enter the marks\n");
			scanf("%f",&newnode->marks);

			temp=head;
			for(i=1;i<count;i++)
			{
				prev=temp;
				temp=temp->link;
				if(i==n)
					break;

			}
			prev->link=newnode;
			newnode->link=temp;

		}
	}
	return head;
}

