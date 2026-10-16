#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct s
{
	int roll;
	struct s *link;
}stu;
stu *add(stu *head,int i)
{
	stu *newnode;
	newnode=calloc(1,sizeof(stu));
	if(newnode==NULL)
	{
		printf("node not created\n");
		exit(0);
	}
	newnode->roll=i;
	if(head==NULL)
		head=newnode;
	else
	{
		newnode->link=head;
		head=newnode;
	}
	return head;
}
void print(stu *head)
{
	while(head)
	{
		printf("%d ",head->roll);
		head=head->link;
	}
}
int main()
{
	stu *head1=NULL,*head2=NULL,*head=NULL,*temp1,*temp2,*pre;
	int i=1;
	for(i=1;i<10;i+=2)
		head1=add(head1,i);
	for(i=2;i<11;i+=2)
		head2=add(head2,i);
	printf("head 1\n");
	print(head1);
	printf("head 2\n");
	print(head2);
	for(temp=head1;temp->link;temp=temp->link);
	temp->link=head2;
	printf("head\n");
	print(head1);
	int a=INT_MAX;
	for(temp1=head1;temp1;temp1=temp1->link)
	{
		a
		for(temp2=temp1;temp2;temp2=temp2->link)
		
		if(a>temp2->roll)
		{
			a=temp->roll;

		}
	}

}









































