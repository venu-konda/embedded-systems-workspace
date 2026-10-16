#include<stdio.h>
int main()
{
	char ch;
	printf("enter any assci character=");
	scanf("%c",&ch);
	(ch>=65)&&(ch<=90)?printf("uppercase=%c",ch):
		(ch>=97)&&(ch<=122)?printf("lowercase=%c",ch):
		(ch>=48)&&(ch<=57)?printf("numeric=%c",ch):
		((ch>=32)&&(ch<=47))||((ch>=58)&&(ch<=64))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=126))?printf("special character=%c",ch):
		0;
}
	
