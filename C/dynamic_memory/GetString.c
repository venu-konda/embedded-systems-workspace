#include<stdio.h>
#include<stdlib.h>
char *getstring();
int main()
{
	char *str;
	puts("enter a string");
	str=getstring();
	printf("str=%s\n",str);
}
char *getstring()
{
	int i=0;char *p=NULL;
	do
	{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}
