#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
typedef struct s
{
	int data;
	struct s *link;
}v;

void * add(v *head)
{
	v *newnode=NULL;
	newnode=calloc(1,sizeof(v));
	if(newnode==NULL)
	{
		printf("node not created\n");
		exit(0);
	}
	printf("enter data::");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=newnode;
		head->link=NULL;
	}
	else
	{
		newnode->link=head;
		head=newnode;
	}
}
void print(v *head)
{
	if(head->link!=NULL)
	{
	//	head=head->link;
		print(head->link);
		printf("%d \n",head->data);
	}
/*	else
	{
		return ;
	}*/

}/*
void print(v *head)
{
	while(head)
	{
		printf("%d \n",head->data);
		head=head->link;
	}
}*/
int main()
{
	v *head=NULL;
	int choice;
	while(1)
	{
		__fpurge(stdin);
		printf("enter choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add(head);
			       break;
			case 2:print(head);
			       break;
		}

	}}
