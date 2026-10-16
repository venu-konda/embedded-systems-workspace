#include<stdio.h>
#include<string.h>
int i=0,temp;
int main()
{
	char s[30];
	int l;
	l=strlen(s);
	reverse(s,l);
	printf("%s",s);
}
int reverse(char *p,int l)
{
	if(i<l/2)
	{
		
