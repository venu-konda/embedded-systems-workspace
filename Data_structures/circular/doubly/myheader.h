#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct student
{
	int id;
	char name[20];
	float marks;
	struct student *link,*prev;
}STUDENT;

STUDENT *addFirst(STUDENT *);
STUDENT *addLast(STUDENT *);
STUDENT *delFirst(STUDENT *);
STUDENT *delLast(STUDENT *);
void print(STUDENT *);
