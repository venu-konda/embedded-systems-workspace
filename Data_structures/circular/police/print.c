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
                        printf("%4d ",temp->id);
                        temp=temp->link;
                }while(temp!=head);
        }
}
