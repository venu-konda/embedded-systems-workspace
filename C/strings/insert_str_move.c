#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[10];
	int i,l1,l2,n;
	printf("enter the string 1=");
	gets(s1);
	printf("enter the string 2=");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	printf("enter the position to add=");
	scanf("%d",&n);
	memmove(s1+n+l2,s1+n,l1-n);
	strncpy(s1+n,s2,l2);
	printf("%s",s1);
}


