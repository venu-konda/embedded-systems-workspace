#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ADDRESS
{
	char flatNo[10];
	char nameOfBuilding[10];
	char street[10];
	char area[10];
	char city[10];
};
struct PERSON
{
	char name[20];
	int age;
	char email[30];
	char contactNo[10];
	struct ADDRESS address;
	struct DOB
	{
		int day;
		int month;
		int year;
	}dob;
}v;
int main()
{
	printf("enter the name::");
	scanf("%s",v.name);
	printf("enter the age::");
	scanf("%d",&v.age);
	printf("enter the email::");
	scanf("%s",v.email);
	printf("enter the contact number::");
	scanf("%s",v.contactNo);
	printf("enter the flat number::");
	scanf("%s",v.address.flatNo);
	printf("enter the name of building::");
	scanf("%s",v.address.nameOfBuilding);
	printf("enter the street number::");
	scanf("%s",v.address.street);
	printf("enter the area::");
	scanf("%s",v.address.area);
	printf("enter the city::");
	scanf("%s",v.address.city);
	printf("enter the day::");
	scanf("%d",&v.dob.day);
	printf("enter the month::");
	scanf("%d",&v.dob.month);
	printf("enter the year ::");
	scanf("%d",&v.dob.year);
	printf("\n-------------------\n");

        printf("name::%s\n",v.name);
        printf("age::%d\n",v.age);
        printf("email::%s\n",v.email);
        printf("contact number::%s\n",v.contactNo);
        printf("flat number::%s , ",v.address.flatNo);
        printf("name of building::%s , ",v.address.nameOfBuilding);
        printf("street number::%s , ",v.address.street);
	printf("area::%s , ",v.address.area);
        printf("city::%s \n",v.address.city);
        printf("date of birth::%d-%d-%d",v.dob.day,v.dob.month,v.dob.year);
}
