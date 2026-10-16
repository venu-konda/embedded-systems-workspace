#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],*p,*q;
	gets(s);
	*s^=32;
	p=strtok(s," ");
	while(p)
	{
		q=p;
		p=strtok(NULL," ");
		//*q^=32;
		*(q+strlen(q)-1)^=32;
		*(q+strlen(q)+1)^=32;
		*(q+strlen(q))=' ';
	}

	puts(s);
}
