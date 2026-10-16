#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct student
{
	int data;
	struct student *link;
}STUDENT;
STUDENT *top=NULL;
void push(int data)
{
	STUDENT *newnode=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	newnode->data=data;
	newnode->link=top;
	top=newnode;
}
int pop(void)
{
	STUDENT *temp=NULL;
	int val;
	temp=top;
	top=top->link;
	val=temp->data;
	free(temp);
	return val;
}
int peek(void)
{
	return top->data;
}
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.push  2.pop   3.peek    4.exit\n");
		printf("enter your choice::");
		__fpurge(stdin);
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the data::");
			       __fpurge(stdin);
			       scanf("%d",&data);
			       push(data);
			       break;
			case 2:if(top==NULL)
				       printf("stack is empty\n");
			       else
				       printf("the poped data is %d\n",pop());
			       break;
			case 3:if(top==NULL)
				       printf("stack is empty\n");
			       else
				       printf("the peek data is %d\n",peek());
			       break;
			case 4:exit(0);
		}
	}
}
