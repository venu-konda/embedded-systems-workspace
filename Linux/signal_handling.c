#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void *getstring(void)
{
	int i=0;
	static char *str=NULL;
	do
	{
		str=realloc(str,i+1);
		str[i]=getchar();
	}while(str[i++]!='\n');
	str[--i]='\0';
}
int count_words(char *s)
{	
	static int count=1;
	while(strchr(s,' '))
	{
		count++;
		s++;
	}
	return count;
}
void f1(int c)
{
	
}
int 
