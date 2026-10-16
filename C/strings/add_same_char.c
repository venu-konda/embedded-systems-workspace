#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],ch,*p;
	gets(s);
	ch=getchar();
	p=s;
	for(p;*p;p++)
	{
		if(*p==ch)
		{
			memmove(p+1,p,strlen(p)+1);
			*p=ch;
			p++;
		}
	}
	printf("%s",s);


}
