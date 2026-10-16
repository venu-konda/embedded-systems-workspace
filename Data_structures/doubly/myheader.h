#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

typedef struct student
{
	int id;
	char name[20];
	float marks;
	struct student *prev,*link;
}STUDENT;

STUDENT *addLast(STUDENT *);
//STUDENT *addFirst(STUDENT *);
void print(STUDENT *);
//STUDENT *delFirst(STUDENT *head);
//STUDENT *delLast(STUDENT *head);
STUDENT *del(STUDENT *head);
void *addSort(STUDENT *head);
