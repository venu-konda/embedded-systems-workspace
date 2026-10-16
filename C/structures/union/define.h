#include <stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<unistd.h>
#include<string.h>
#define MAX 5
struct DOB
{
	unsigned short int day:5;
	unsigned short int month:6;
	unsigned short int year;
};

union ID
{
	char aadhar[20];
	char pan[8];
	char voter[10];
	char passport[15];
};
struct student
{
	char id[10];
	char name[20];
	float marks;
	struct DOB dob;
	int choice;
	union ID idproof;
};


