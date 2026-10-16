#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#define MAX 5
int arr[MAX];
int top=-1;
void push(int d)
{
	if(top==MAX-1)
		printf("stack is full\n");
	else
	arr[++top]=d;
}
int pop(void)
{
	return arr[top--];
}
int peek(void)
{
	return arr[top];
}
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.push  2.pop   3.peek   4.exit\n");
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
			case 2:if(top==-1)
				       printf("stack is empty\n");
			       else
				       printf("the poped data is %d\n",pop());
			       break;
			case 3:if(top==-1)
				       printf("stack is empty\n");
			       else
				       printf("the data pointed =%d\n",peek());
			       break;
			case 4:exit(0);
		}
	}

}

