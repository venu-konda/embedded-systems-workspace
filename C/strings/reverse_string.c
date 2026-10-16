#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],temp[30];
	int i,l;
	gets(s);
	l=strlen(s);
	for(i=0;s[i];i++)
	{
		temp[l-i-1]=s[i];
	}
	printf("%s",temp);
}

