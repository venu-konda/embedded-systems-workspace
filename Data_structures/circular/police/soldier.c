#include "myheader.h"
int cnt;
int count(STUDENT *head)
{
	cnt=0;
	STUDENT *temp=head;
	if(head->link==temp)
		return 1;
	do
	{
		cnt++;
		temp=temp->link;
	}while(temp!=head);
	return cnt;
}
void *soldier(STUDENT *head)
{
	int i=1,cnt;
	STUDENT *prev=NULL,*temp=head,*del=NULL;
	for(;temp;i++)
	{
		if(i==5)
		{
			del=temp;
			temp=temp->link;
			prev->link=temp;
			free(del);
			cnt=count(prev);
			i=1;
		}
		if(cnt==1)
			break;
		prev=temp;
		temp=temp->link;
	}
	printf("%d\n",prev->id);
	return prev;
}
