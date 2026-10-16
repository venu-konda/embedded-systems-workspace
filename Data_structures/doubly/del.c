#include "myheader.h"
STUDENT *del(STUDENT *head)
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		int data;
		STUDENT *temp=NULL;
		printf("enter the id to delete::");
		scanf("%d",&data);
		if(head->id==data)
		{
			if(head->link==NULL)
			{
				free(head);
				head=NULL;
			}
			else
			{
				temp=head;
				head=head->link;
				head->prev=NULL;
				free(temp);
			}
		}
		else if(head->link==NULL)
			printf("id not found\n");
		else
		{
			temp=head;
			for(;temp;temp=temp->link)
			{
				if(temp->id==data)
				{
					if(temp->link!=NULL)
					{
						temp->prev->link=temp->link;
						temp->link->prev=temp->prev;
						free(temp);
					}
					else
					{
						temp->prev->link=NULL;
						free(temp);
					}
				}
			}
		}
	}
	return head;

}
