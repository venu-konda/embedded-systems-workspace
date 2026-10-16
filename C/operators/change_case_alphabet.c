#include<stdio.h>
int main()
{
	char ch;
	printf("enter any alphabet=");
	scanf("%c",&ch);
	(ch>=65)&&(ch<=90)?
		printf("converted from upper to lower=%c ",ch+=32):
		(ch>=97)&&(ch<=122)?
		printf("converted from lower to upper=%c ",ch-=32):
		printf("it is not an alphabet it cannot be converted to any case");
}

