#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100],s2[100],*p;
	int l1,l2;
	gets(s);
	gets(s1);
	gets(s2);
	p=s;
	l1=strlen(s1);
	l2=strlen(s2);
	while(p=strstr(p,s1))
	{
		memmove(p+l2,p+l1,strlen(p+l1)+1);
                 printf("%s\n",p);
		strncpy(p,s2,l2);
		p+=l2;
	}
	printf("%s",s);
}
