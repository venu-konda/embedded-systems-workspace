#include<stdlib.h>
#include<stdio.h>
#include<stdio_ext.h>
typedef struct student
{
        int id;
        struct student *link;
}STUDENT;

STUDENT *addFirst(STUDENT *);
STUDENT *addLast(STUDENT *);
void *delFirst(STUDENT *);
void *delLast(STUDENT *);
void print(STUDENT *);
void *soldier(STUDENT *);
