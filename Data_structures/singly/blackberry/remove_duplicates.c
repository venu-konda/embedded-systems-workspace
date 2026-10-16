#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct s
{
	int roll;
	struct s *link;
}STUDENT;
STUDENT *add(STUDENT *head,int n)
{
	int i;
	STUDENT *newnode;
	srand(getpid());
	for(i=0;i<n;i++)
	{
		newnode=calloc(1,sizeof(STUDENT));
		if(newnode==NULL)
		{
			printf("node not created\n");
			exit(0);
		}
		newnode->roll=rand()%10+1;
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
	return head;
}
STUDENT *remove_duplicate(STUDENT *head)
{
	STUDENT *temp,*prev,*t1,*t2;
	for(t1=head;t1;t1=t1->link)
	{
		prev=t1;
		for(t2=t1->link;t2;)
		{
			if(t1->roll==t2->roll)
			{
				temp=t2;
				t2=t2->link;
				prev->link=t2;
				free(temp);
			}
			else
			{
				prev=prev->link;
				t2=t2->link;
			}
		}
	}
	return head;
	
}
void print(STUDENT *head)
{
	while(head)
	{
		printf("%d,",head->roll);
		head=head->link;
	}
	printf("\n");
}
int main()
{
	int n;
	scanf("%d",&n);
	STUDENT *head=NULL;
	head=add(head,n);
	print(head);
	remove_duplicate(head);
	print(head);

}

