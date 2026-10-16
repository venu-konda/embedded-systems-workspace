#include "myheader.h"
void *addSort(STUDENT *head)
{
	STUDENT *temp=NULL,*newnode=NULL;
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
		if((head==NULL) ||(head->id > newnode->id))
		{
			 newnode->link=head;
			if(head!=NULL)
			head->prev=newnode;
			head=newnode;
		}
		else
		{
			temp=head;
			temp=temp->link;
			while((temp)&&(temp->id < newnode->id))
			{
				temp=temp->link;
			}
			newnode->link=temp;
			newnode->prev=temp->prev;
			temp->prev=newnode;
			temp->prev->link=newnode;
		}
	}
	return head;
}
