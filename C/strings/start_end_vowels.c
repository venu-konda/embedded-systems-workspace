#include<stdio.h>
#include<string.h>
int isvowel(const char *);
int main()
{
	char s[50],*p,*q;
	gets(s);
	p=strtok(s," ");
	while(p)
	{
		q=p;
		p=strtok(NULL," ");
		if((isvowel(q))&&(isvowel((q+strlen(q)-1))))
			puts(q);
			*(q+strlen(q))=' ';

	//	p=strtok(NULL," ");
	}
//	puts(s);

}

int isvowel(const char *p)
{
	char vowels[]="aeiouAEIOU";
	for(int i=0;vowels[i];i++)
		if(vowels[i]==*p)
			return 1;
	return 0;
}
