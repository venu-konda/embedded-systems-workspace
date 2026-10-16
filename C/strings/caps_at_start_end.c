#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],*p;
	gets(s);
	int l=strlen(s);
	p=s;
	for(p;*p;p++)
	{
		if(*p==' ')
		{
			if(*(p-1)>='a'&&*(p-1)<='z')
				*(p-1)=*(p-1)^32;
			 if(*(p+1)>='a'&&*(p+1)<='z')
                                *(p+1)=*(p+1)^32;

		}
	}
	if(s[0]>='a'&&s[0]<='z')
		s[0]=s[0]^32;
	if(s[l-1]>='a'&&s[l-1]<='z')
		s[l-1]^=32;
	printf("%s",s);

}
