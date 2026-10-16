#include "stdio.h"
int main()
{
	enum week{sun=1,mon,tue,wed,thur,fri,sat};
	int a;
	printf("enter the day::");
	scanf("%d",&a);
	if(a==sun)
		printf("sunday");
	else if(a==mon)
		printf("monday");
	else if(a==tue)
		printf("tuesday");
	else if(a==wed)
		printf("wednesday");
	else if(a==thur)
		printf("thursday");
	else if(a==fri)
		printf("friday");
	else if(a==sat)
		printf("saturday");
	else 
		printf("error");
}
