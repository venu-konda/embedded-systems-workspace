#include<stdio.h>
int main()
{
	char ch;
	printf("enter any assci character=");
	scanf("%c",&ch);
	(ch>=48)&&(ch<=57)?printf("it is a NUMERIC character \n the assci value of numeric character is=%d",ch):0;
	(ch>=65)&&(ch<=90)?printf("it is a UPPERCASE character \n the assci value of upper case character is=  %d",ch):0;
	(ch>=97)&&(ch<=122)?printf("it is a LOWERCASE character \n the assci value of lower case character is= %d",ch):0;
	((ch>=32)&&(ch<=47))||((ch>=58)&&(ch<=64))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=126))?printf("it is a SPECIAL character\n the assci value of special character is=  %d",ch):0;
}
