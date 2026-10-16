#include<stdio.h>
#include<string.h>
char *strRev(const char *);
int main()
{
	char s1[30],s2[30],*p;
	int l1,l2;
	gets(s1);
	gets(s2);
	l2=strlen(s2);
	while(p=strstr(s1,s2))
	{
		strncpy(p,strRev(s2),l2);
	}
	printf("%s",s1);
}

char *strRev(const char *p)
{
	static char temp[30];
	*temp='\0';
	while(*p)
	{
		memmove(temp+1,temp,strlen(temp)+1);
		*temp=*p;
		p++;
	}
	return temp;
}
