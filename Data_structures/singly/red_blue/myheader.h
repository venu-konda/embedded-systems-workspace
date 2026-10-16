#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
typedef struct student
{
	int id;
	struct student *link;
}STUDENT;
void redBlue(STUDENT *head);
STUDENT *addNthPlace(STUDENT *head);
STUDENT *AddLast(STUDENT *);
STUDENT *addFirst(STUDENT *);
void print(STUDENT *);
void node(STUDENT *);
void nodeLast(STUDENT *);
void primePrint(STUDENT *);
STUDENT *DelLast(STUDENT *);
int countNodes(STUDENT *);
STUDENT *delFirst(STUDENT *);
void *delAll(STUDENT *);
void findMedian(STUDENT *);
void *addSort(STUDENT *);
