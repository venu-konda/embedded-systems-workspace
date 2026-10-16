#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[10],*p;
	fgets(s1,30,stdin);
//	fgets(s2,10,stdin);
	gets(s2);
	int l1,l2;
	l1=strlen(s1)-1;
	l2=strlen(s2);
//	p=s1;
	while(p=strstr(s1,s2))
	{
	//	memmove(p,p+l2,strlen(p+l2)+1);
	//	memmove(p+l2,p,strlen(p)+1);
		memset(p,'*',l2);
	}
	printf("%s",s1);
}
