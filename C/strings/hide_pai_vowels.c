#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isvowel(const char *);
int main()
{
	char s[100],*p;
	int i,flag=0,count=1;
	fgets(s,100,stdin);
//	printf("%d",strlen(s));
	p=s;
	for(i=0;s[i];i++)
		if((isalpha(s[i]))||(s[i]==' '))
			count++;
//	printf("%d",count);

	if(count==strlen(s))
	{
		for(p;*p;p++)
		{
			if(isvowel(p)&&isvowel(p+1))
			{
				*p='*';
				*(p+1)='*';
				flag=1;
			}
		}
		if(flag)
		{
			printf("%s",s);
			return 0;
		}
		else
		{
			printf("there is no pair of vovels to hide");
			return 0;
		}
	}
	else
	{
		printf("invalid input");
		return 0;
	}
}

int isvowel(const char *p)
{
	char v[]="aeiouAEIOU";
	int i;
	for(i=0;v[i];i++)
		if(*p==v[i])
			return 1;
	return 0;
}
