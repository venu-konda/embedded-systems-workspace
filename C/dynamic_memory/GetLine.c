#include<stdio.h>
#include<stdlib.h>
char *GetLine(char **,int *);
int main()
{
	char *str;
	puts("enter a sting");
	int n=0;
	GetLine(&str,&n);
	printf("str=%s\n",str);
	printf("n=%d\n",n);
}
char *GetLine(char **str,int *n)
{
	int i=0;
	char *p=NULL;
	do
	{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	*str=p;
	*n=i;

}
