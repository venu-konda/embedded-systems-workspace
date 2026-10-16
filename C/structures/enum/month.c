#include "stdio.h"
int main()
{
	enum month{jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};
	int a;
	printf("enter the month::");
	scanf("%d",&a);
	if(a==jan)
		printf("january");
	else if(a==feb)
		printf("february");
	else if(a==mar)
		printf("march");
	else if(a==apr)
		printf("may");
	else if(a==june)
		printf("june");				
	else if(a==july)
		printf("july");				
	else if(a==aug)
		printf("august");				
	else if(a==sep)
		printf("september");				
	else if(a==oct)
		printf("october");
	else if(a==nov)
		printf("november");	
	else if(a==dec)
		printf("december");				
	else 
		printf("error");		
}
