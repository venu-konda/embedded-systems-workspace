#include<stdio.h>
int main()
{
	char ch;
	printf("enter any alphabet=");
	scanf("%c",&ch);
	((ch>=65)&&(ch<=90)||(ch>=97)&&(ch<=122))?
		printf("it is an alphabet %d",ch):
		printf("it is not an alphabet");
}
