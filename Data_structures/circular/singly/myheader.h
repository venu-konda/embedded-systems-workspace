#include<stdlib.h>
#include<stdio.h>
#include<stdio_ext.h>
typedef struct student
{
	int id;
	char name[20];
	float marks;
	struct student *link;
}STUDENT;

STUDENT *addFirst(STUDENT *);
STUDENT *addLast(STUDENT *);
void *delFirst(STUDENT *);
void *delLast(STUDENT *);
void print(STUDENT *);
